#include "stdafx.h"

#include "CFont.h"

#include "common.h"

//для работы с битами (по игре - флагами)
#define BITS(x,y) ((x)&(y))
#define FLAG BITS

#define SET_BITS(x,y) (x)=(x)|(y)
#define SETFLAG SET_BITS

//#define UNSET_BITS(x,y) {if((x)&(y)) (x)=(x)^(y);}
#define UNSET_BITS(x,y) (x)=((x)|(y))^(y)
#define UNSETFLAG UNSET_BITS

//#include <SimpleLeakDetector/SimpleLeakDetector.hpp>

char* list_fnt[4]=
{
  {"fnt_def"},
  {"fnt_num"},
  {"fnt_big_num"},
  {"fnt_not_num"},
};

CFOFont::CFOFont(): crtd(0),lpVB(NULL),lpIB(NULL),lpDevice(NULL),lpWaitBuf(NULL)
{
  for(int cur_f=0;cur_f<MAX_FONT;++cur_f)
  {
    fonts[cur_f].fontSurface=NULL;
    fonts[cur_f].max_cnt=16;
    fonts[cur_f].maxx=new int[fonts[cur_f].max_cnt];
  }
}

CFOFont::~CFOFont()
{
  for(int cur_f=0;cur_f<MAX_FONT;++cur_f) {
  if (fonts[cur_f].maxx != NULL) {
    delete [] fonts[cur_f].maxx;
    fonts[cur_f].maxx = NULL;
  }
  }
}


int CFOFont::Init(LPDIRECT3DDEVICE8 lpD3Device,LPDIRECT3DVERTEXBUFFER8 aVB,LPDIRECT3DINDEXBUFFER8 aIB)
{
  if(crtd) return 0;
  FONLINE_LOG("CFont Initialization...\n");

  lpDevice=lpD3Device;
  lpIB=aIB;
  lpVB=aVB;

  spr_cnt=opt_flushval;
  lpWaitBuf=new Vertex[spr_cnt*4];

  for(int cur_f=0;cur_f<MAX_FONT;++cur_f)
  {
    FONLINE_LOG("Init Font %s...",list_fnt[cur_f]);

    char path[1024];
    strcpy(path,opt_fopath.c_str());
    if(path[strlen(path)-1]!='\\') strcat(path,"\\");
    strcat(path,"art\\misc\\");
    strcat(path,list_fnt[cur_f]);
    strcat(path,".bmp");

    HRESULT hr=D3DXCreateTextureFromFileEx(lpDevice,path,D3DX_DEFAULT,D3DX_DEFAULT,1,0,
      D3DFMT_UNKNOWN,D3DPOOL_MANAGED,D3DX_DEFAULT,D3DX_DEFAULT,D3DCOLOR_ARGB(255,0,0,0),NULL,NULL,&fonts[cur_f].fontSurface);
    if(hr!=D3D_OK)
    {
      ReportErrorMessage("CFont CreateFontSurf","Не могу создать текстуру %s",path);
      return 0;
    }

    HANDLE hFile;
    DWORD ByteWritten;

    strcpy(path,opt_fopath.c_str());
    if(path[strlen(path)-1]!='\\') strcat(path,"\\");
    strcat(path,"art\\misc\\");
    strcat(path,list_fnt[cur_f]);
    strcat(path,".fnt");

    hFile=CreateFile(path,GENERIC_READ,FILE_SHARE_READ,NULL,
      OPEN_EXISTING,FILE_FLAG_SEQUENTIAL_SCAN,NULL);

    if(hFile==INVALID_HANDLE_VALUE)
    {
      ReportErrorMessage("CFont LoadLetters","Не могу найти %s",path);
      return 0;
    }

    ReadFile(hFile,fonts[cur_f].letters,sizeof(Letter)*256,&ByteWritten,NULL);

    CloseHandle(hFile);

    fonts[cur_f].eth=fonts[cur_f].letters[(uint8_t)'а'].h;
    fonts[cur_f].etw=fonts[cur_f].letters[(uint8_t)'а'].w;

    D3DSURFACE_DESC sd;
    fonts[cur_f].fontSurface->GetLevelDesc(0,&sd);
    UINT wd=sd.Width;

    for(int i=0;i<256;i++)
    {
      int w=fonts[cur_f].letters[i].w;
      int h=fonts[cur_f].letters[i].h;
      fonts[cur_f].xyarr[i][0]=(FLOAT)fonts[cur_f].letters[i].dx/wd;
      fonts[cur_f].xyarr[i][1]=(FLOAT)fonts[cur_f].letters[i].dy/wd;
      fonts[cur_f].xyarr[i][2]=(FLOAT)(fonts[cur_f].letters[i].dx+w)/wd;
      fonts[cur_f].xyarr[i][3]=(FLOAT)(fonts[cur_f].letters[i].dy+h)/wd;
    }

    FONLINE_LOG("OK\n");
  }

  FONLINE_LOG("CFont Initialization complete\n");
  crtd=1;
  return 1;
}

void CFOFont::Clear()
{
  FONLINE_LOG("CFont Clear...\n");

  for(int cur_f=0;cur_f<MAX_FONT;++cur_f) {
  if (fonts[cur_f].fontSurface != NULL) {
    fonts[cur_f].fontSurface->Release();
    fonts[cur_f].fontSurface = NULL;
  }
  }

  if (lpWaitBuf != NULL) {
  delete [] lpWaitBuf;
  lpWaitBuf = NULL;
  }

  crtd=0;
  FONLINE_LOG("CFont Clear complete\n");
}

void CFOFont::PreRestore()
{
}

void CFOFont::PostRestore(LPDIRECT3DVERTEXBUFFER8 aVB,LPDIRECT3DINDEXBUFFER8 aIB)
{
  lpIB=aIB;
  lpVB=aVB;
}

void CFOFont::RenderText(RECT r,char* astr,uint32_t flags, uint32_t col, int num_font)
{
  if(!astr) return;

//!Cvet ++++++++++++
  Font* font=&fonts[num_font];

  if(!font) return;

  if(col==NULL) col=COLOR_TEXT_DEFAULT;

  int offs_x=0;
  switch(num_font)
  {
  case FONT_DEF:
  case FONT_NUM:
    offs_x=1;
    break;
  case FONT_BIG_NUM:
  case FONT_NOT_NUM:
    offs_x=0;
    break;
  }
//!Cvet -----------

  int curx=r.left+1;
  int cury=r.top+4;
  int strcnt=1;
  char* str=new char[strlen(astr)*2 + 2];
  char* alloc_str=str;
  strcpy(str,astr);

  //сначала делаем перенос строк или обрезку
  //если перенести нельзя или не помещается

//!Cvet переделал+++++++++++++
  int strcnt_r=0; //кол-во строк в прямоугольнике

  for(int i=0;str[i];i++)
  {
    if(FLAG(flags,FT_COLORIZE) && str[i]=='|')
    {
      for(;str[++i];) if(str[i]==' ') break;
      continue;
    }

    if(curx+font->etw>=r.right)
    {
      if(!FLAG(flags,FT_NOBREAK))
      {
        // XXX[27.7.2012 alex]: unreadable. there should be a standard function that does the same
        int j;
        for(j=i;j>=0;j--)
        {
          if(str[j]==' ')
          {
            str[j]='\n';
            i=j;
            break;
          }
          else if(str[j]=='\n')
          {
            j=-1;
            break;
          }
        }

        if(j<0) str[i]='\n';
      }
      else
        str[i]=0;
    }

    switch(str[i])
    {
    case ' ':
      curx+=font->etw-1;
      continue;
    case '\n':
      cury+=font->eth+4;

      if(cury+font->eth+4>=r.bottom)
      {
        if(!strcnt_r) strcnt_r=strcnt;

        if(!FLAG(flags,FT_UPPER))
        {
          str[i]=0;
          break;
        }
      }

      curx=r.left+1;
      strcnt++;
      continue;
    case '\r':
      continue;
    default:
      curx+=font->letters[(uint8_t)str[i]].w+offs_x;
    }

    if(!str[i]) break;
  }

  if(!strcnt_r) strcnt_r=strcnt;

  //выбираем нужные строки исходя из дополнительных флагов
  if((flags & FT_UPPER) && strcnt>strcnt_r)
  {
    int i = 0;
    for(int line_cur = 0;str[i],line_cur<(strcnt-strcnt_r);i++)
      if(str[i]=='\n') line_cur++;

    str=&str[i];

    strcnt=strcnt_r;
  }
//!Cvet -------------

  //хорошо, теперь прикинем в какие размеры мы поместились после всего этого
  curx=r.left+1;
  cury=r.top+4;

  if(strcnt>font->max_cnt)
  {
    while(strcnt>font->max_cnt) font->max_cnt*=2;
  if (font->maxx != NULL) {
    delete [] font->maxx;
    font->maxx = NULL;
  }
    font->maxx=new int[font->max_cnt];
  }

  //memset(maxx,curx,sizeof(int)*strcnt);
  for(int i=0;i<strcnt;i++) font->maxx[i]=curx;
  int curstr=0;
  for(int i=0;str[i];i++)
  {
    switch(str[i])
    {
    case ' ':
      curx+=font->etw-1;
      continue;
    case '\n':
      cury+=font->eth+4;
      curx=r.left+1;
      curstr++;
      continue;
    case '\r':
      continue;
    default:
      curx+=font->letters[(uint8_t)str[i]].w+offs_x;
      if(curx>font->maxx[curstr]) font->maxx[curstr]=curx;
    }
  }

  //а вот теперь рисуем взаправду
  curstr=0;
  curx=r.left+((flags & FT_CENTERX)?(r.right-font->maxx[curstr])/2:1);

  if(flags & FT_CENTERY)
    cury=r.top+4+(r.bottom-r.top-strcnt*(font->eth+4))/2;
  else
    if(flags & FT_BOTTOM)
      cury=r.bottom-strcnt*(font->eth+4);
    else
      cury=r.top+4;

  font->cur_pos=0;
  lpDevice->SetTexture(0,font->fontSurface);

  uint32_t colorize=col;
  for(int i=0;str[i];i++)
  {
    if(FLAG(flags,FT_COLORIZE))
    {
      if(str[i]=='|')
      {
        colorize=0;
        sscanf(&str[++i],"%d",&colorize);
        if(!colorize)
        {
          colorize=col;
          continue;
        }

        for(;str[i]!=' ';i++);
        continue;
      }
    }

    switch(str[i])
    {
    case ' ':
      curx+=font->etw-1;
      continue;
    case '\n':
      cury+=font->eth+4;
      curx=r.left+((flags & FT_CENTERX)?(r.right-font->maxx[++curstr])/2:1);
      continue;
    case '\r':
      continue;
    default:

      int mulpos=font->cur_pos*4;
      int x=curx;
      int y=cury-font->letters[(uint8_t)str[i]].y_offs;
      int w=font->letters[(uint8_t)str[i]].w;
      int h=font->letters[(uint8_t)str[i]].h;

      FLOAT x1=font->xyarr[(uint8_t)str[i]][0];
      FLOAT y1=font->xyarr[(uint8_t)str[i]][1];
      FLOAT x2=font->xyarr[(uint8_t)str[i]][2];
      FLOAT y2=font->xyarr[(uint8_t)str[i]][3];

      lpWaitBuf[mulpos].x=x-0.5f;
      lpWaitBuf[mulpos].y=y+h-0.5f;
      lpWaitBuf[mulpos].tu=x1;
      lpWaitBuf[mulpos].tv=y2;
      lpWaitBuf[mulpos++].Diffuse=colorize;

      lpWaitBuf[mulpos].x=x-0.5f;
      lpWaitBuf[mulpos].y=y-0.5f;
      lpWaitBuf[mulpos].tu=x1;
      lpWaitBuf[mulpos].tv=y1;
      lpWaitBuf[mulpos++].Diffuse=colorize;

      lpWaitBuf[mulpos].x=x+w-0.5f;
      lpWaitBuf[mulpos].y=y-0.5f;
      lpWaitBuf[mulpos].tu=x2;
      lpWaitBuf[mulpos].tv=y1;
      lpWaitBuf[mulpos++].Diffuse=colorize;

      lpWaitBuf[mulpos].x=x+w-0.5f;
      lpWaitBuf[mulpos].y=y+h-0.5f;
      lpWaitBuf[mulpos].tu=x2;
      lpWaitBuf[mulpos].tv=y2;
      lpWaitBuf[mulpos++].Diffuse=colorize;

      font->cur_pos++;

      if(font->cur_pos==spr_cnt) Flush(&font->cur_pos);
      curx+=font->letters[(uint8_t)str[i]].w+offs_x;
    }
  }

  Flush(&font->cur_pos);

  if (alloc_str != NULL) {
  delete [] alloc_str;
  alloc_str = NULL;
  }
}

int CFOFont::Flush(int* cur_pos) //!Cvet int* cur_pos
{
  //который потом разом сливается в буфер вершин
  if(!crtd) return 0;
  void* pBuffer;
  int mulpos=4*(*cur_pos);
  lpVB->Lock(0,sizeof(Vertex)*mulpos,(uint8_t**)&pBuffer,D3DLOCK_DISCARD);
    memcpy(pBuffer,lpWaitBuf,sizeof(Vertex)*mulpos);
  lpVB->Unlock();

  //рисуем спрайты
  lpDevice->DrawIndexedPrimitive(D3DPT_TRIANGLELIST,0,mulpos,0,2*(*cur_pos));

  *cur_pos=0;
  return 1;
}
