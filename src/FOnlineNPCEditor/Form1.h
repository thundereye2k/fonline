#pragma once

#include "Edit_node.h"
#include "Edit_nodeA.h"

namespace NPC_edit {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>

	int st[300];
	int sk[300];
	int pe[300];

	int not_answ[MAX_DIALOGS];
	int time_answ[MAX_DIALOGS];

	char dlg_str[MAX_DIALOGS][MAX_TEXT_DIALOG];

	void EditNode();
	void MoveNode(int count);
	void ResetAll();
	void AddParam(BYTE local_or_global);

	char VarName[MAX_VARS][MAX_NAME_VAR+1];
	char VarParam[MAX_VARS][200];
	int VarMax[MAX_VARS];
	int VarMin[MAX_VARS];
	int VarCur[MAX_VARS];
	char VarAbout[MAX_VARS][MAX_ABOUT_VAR+1];

	//typedef map<char[100],char[200]> vars_map;

	//vars_map Lvars;
	//vars_map Gvars;

	//typedef cli::array<String^,

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

		Edit_node enD;
		String^ path_data;

	public: System::Windows::Forms::NumericUpDown^  numLink;
	public: System::Windows::Forms::Label^  label24;
	public: System::Windows::Forms::Button^  button3;

	public: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::NumericUpDown^  numQuest;
	public: 

	private: System::Windows::Forms::RadioButton^  rbQuest;
	private: System::Windows::Forms::ComboBox^  cbQuest_usl;
	private: System::Windows::Forms::ComboBox^  cbQuest_rez;
	public: System::Windows::Forms::Button^  button8;

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::NumericUpDown^  nSt;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::NumericUpDown^  nPe;



	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::NumericUpDown^  nSk;

	private: System::Windows::Forms::Label^  label16;



	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::RichTextBox^  txtTemp2;
	private: System::Windows::Forms::RichTextBox^  txtAnswer;
	private: System::Windows::Forms::ListBox^  lbPerks;
	private: System::Windows::Forms::ListBox^  lbStats;

	private: System::Windows::Forms::ListBox^  lbSkills;





	private: System::Windows::Forms::RichTextBox^  txtTemp3;
	private: System::Windows::Forms::ComboBox^  cbState;

	private: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::Label^  label25;
	public: System::Windows::Forms::SaveFileDialog^  dlg_save;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::NumericUpDown^  numTime_answ;
	public: 

	private: System::Windows::Forms::ComboBox^  cbAction_no_answ;

	private: System::Windows::Forms::Label^  label26;
	public: System::Windows::Forms::OpenFileDialog^  dlg_open;
	private: System::Windows::Forms::ComboBox^  cbTemp;
	private: System::Windows::Forms::Label^  txtFName;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::RadioButton^  rbScript;
	private: System::Windows::Forms::RichTextBox^  txtCheck;
	public: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::NumericUpDown^  numLock;
	public: 

	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TabPage^  tabPage8;




	private: System::Windows::Forms::TextBox^  txtParamName;

	private: System::Windows::Forms::Label^  label31;



	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label35;








	private: System::Windows::Forms::Button^  button15;


	private: System::Windows::Forms::ComboBox^  cbVars;

	private: System::Windows::Forms::RadioButton^  rbVars;


	private: System::Windows::Forms::ListBox^  lbVars;
private: System::Windows::Forms::RichTextBox^  txtParamAbout;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Button^  button18;
private: System::Windows::Forms::Button^  button17;
private: System::Windows::Forms::NumericUpDown^  numParamCur;
private: System::Windows::Forms::NumericUpDown^  numParamMax;
private: System::Windows::Forms::NumericUpDown^  numParamMin;
	public: 
	private: 


	public: 
	private: 


	private: 

			 Edit_nodeA enA;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TreeView^  Tree;
	protected: 

	public: System::Windows::Forms::TabControl^  tabControl1;
	public: System::Windows::Forms::TabPage^  tabPage1;

	public: System::Windows::Forms::TabPage^  tabPage3;

	public: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::RichTextBox^  txtDialog;

	public: System::Windows::Forms::TabPage^  tabPage4;
public: System::Windows::Forms::CheckBox^  cbAID;





	public: System::Windows::Forms::Label^  label1;


	public: System::Windows::Forms::TextBox^  textBox7;
	public: System::Windows::Forms::TextBox^  textBox6;
	public: System::Windows::Forms::TextBox^  textBox5;
	public: System::Windows::Forms::TextBox^  textBox4;
	public: System::Windows::Forms::TextBox^  textBox3;
	public: System::Windows::Forms::TextBox^  textBox2;



	public: System::Windows::Forms::Label^  label15;
	public: System::Windows::Forms::Label^  label14;
	public: System::Windows::Forms::Label^  label13;
	public: System::Windows::Forms::Label^  label12;
	public: System::Windows::Forms::Label^  label11;
	public: System::Windows::Forms::Label^  label10;


	public: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::TabPage^  tabPage7;
	public: System::Windows::Forms::Button^  button2;
private: System::ComponentModel::IContainer^  components;
public: 



	public: System::Windows::Forms::NumericUpDown^  numType_dude;

	public: System::Windows::Forms::NumericUpDown^  numIDdude;

	public: System::Windows::Forms::ComboBox^  cbStat;




	public: System::Windows::Forms::RadioButton^  rbSkill;


	public: System::Windows::Forms::RadioButton^  rbStat;
	public: System::Windows::Forms::ComboBox^  cbPerk;


	public: System::Windows::Forms::ComboBox^  cbSkill;



	public: System::Windows::Forms::RadioButton^  rbItem;

	public: System::Windows::Forms::RadioButton^  rbPerk;






	public: System::Windows::Forms::NumericUpDown^  numItem;

	public: System::Windows::Forms::Label^  label21;
	public: System::Windows::Forms::Button^  button4;


	public: System::Windows::Forms::NumericUpDown^  numCount_usl;

	public: System::Windows::Forms::Label^  label22;
public: System::Windows::Forms::NumericUpDown^  numCount_rez;
public: System::Windows::Forms::Button^  button5;



	public: System::Windows::Forms::Button^  button7;
	public: System::Windows::Forms::Button^  button6;
	public: System::Windows::Forms::Button^  button10;
	public: System::Windows::Forms::Button^  button9;

public: System::Windows::Forms::ComboBox^  cbItem_rez;




public: System::Windows::Forms::ComboBox^  cbItem_usl;






public: System::Windows::Forms::RadioButton^  rbLock;




public: System::Windows::Forms::Button^  button11;
public: System::Windows::Forms::Button^  button12;


public: System::Windows::Forms::RichTextBox^  txtTemp;







public: System::Windows::Forms::Label^  label23;
public: System::Windows::Forms::Button^  button13;
public: System::Windows::Forms::NumericUpDown^  numOri_dude;

public: System::Windows::Forms::NumericUpDown^  numYdude;

public: System::Windows::Forms::NumericUpDown^  numXdude;

public: System::Windows::Forms::NumericUpDown^  numMap_dude;


public: System::Windows::Forms::Label^  lErr;
	public: System::Windows::Forms::NumericUpDown^  numIDdialog;
	protected: 

	public:

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Tree = (gcnew System::Windows::Forms::TreeView());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->cbState = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numOri_dude = (gcnew System::Windows::Forms::NumericUpDown());
			this->numYdude = (gcnew System::Windows::Forms::NumericUpDown());
			this->numXdude = (gcnew System::Windows::Forms::NumericUpDown());
			this->numMap_dude = (gcnew System::Windows::Forms::NumericUpDown());
			this->numType_dude = (gcnew System::Windows::Forms::NumericUpDown());
			this->numIDdude = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->lbStats = (gcnew System::Windows::Forms::ListBox());
			this->lbSkills = (gcnew System::Windows::Forms::ListBox());
			this->lbPerks = (gcnew System::Windows::Forms::ListBox());
			this->nPe = (gcnew System::Windows::Forms::NumericUpDown());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->nSk = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->nSt = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->numParamCur = (gcnew System::Windows::Forms::NumericUpDown());
			this->numParamMax = (gcnew System::Windows::Forms::NumericUpDown());
			this->numParamMin = (gcnew System::Windows::Forms::NumericUpDown());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->txtParamAbout = (gcnew System::Windows::Forms::RichTextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->txtParamName = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->lbVars = (gcnew System::Windows::Forms::ListBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->numTime_answ = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtAnswer = (gcnew System::Windows::Forms::RichTextBox());
			this->numLink = (gcnew System::Windows::Forms::NumericUpDown());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->numIDdialog = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbAID = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtDialog = (gcnew System::Windows::Forms::RichTextBox());
			this->cbAction_no_answ = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->rbVars = (gcnew System::Windows::Forms::RadioButton());
			this->cbVars = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->numLock = (gcnew System::Windows::Forms::NumericUpDown());
			this->rbScript = (gcnew System::Windows::Forms::RadioButton());
			this->cbTemp = (gcnew System::Windows::Forms::ComboBox());
			this->txtTemp3 = (gcnew System::Windows::Forms::RichTextBox());
			this->txtTemp2 = (gcnew System::Windows::Forms::RichTextBox());
			this->cbQuest_rez = (gcnew System::Windows::Forms::ComboBox());
			this->cbQuest_usl = (gcnew System::Windows::Forms::ComboBox());
			this->numQuest = (gcnew System::Windows::Forms::NumericUpDown());
			this->rbQuest = (gcnew System::Windows::Forms::RadioButton());
			this->txtTemp = (gcnew System::Windows::Forms::RichTextBox());
			this->rbLock = (gcnew System::Windows::Forms::RadioButton());
			this->cbItem_usl = (gcnew System::Windows::Forms::ComboBox());
			this->cbItem_rez = (gcnew System::Windows::Forms::ComboBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->numCount_rez = (gcnew System::Windows::Forms::NumericUpDown());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->numCount_usl = (gcnew System::Windows::Forms::NumericUpDown());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->numItem = (gcnew System::Windows::Forms::NumericUpDown());
			this->cbPerk = (gcnew System::Windows::Forms::ComboBox());
			this->cbSkill = (gcnew System::Windows::Forms::ComboBox());
			this->rbItem = (gcnew System::Windows::Forms::RadioButton());
			this->rbPerk = (gcnew System::Windows::Forms::RadioButton());
			this->rbSkill = (gcnew System::Windows::Forms::RadioButton());
			this->rbStat = (gcnew System::Windows::Forms::RadioButton());
			this->cbStat = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->txtCheck = (gcnew System::Windows::Forms::RichTextBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->txtFName = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->lErr = (gcnew System::Windows::Forms::Label());
			this->dlg_save = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dlg_open = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numOri_dude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numYdude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numXdude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMap_dude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numType_dude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numIDdude))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nPe))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nSk))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nSt))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numParamCur))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numParamMax))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numParamMin))->BeginInit();
			this->tabPage6->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numTime_answ))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numLink))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numIDdialog))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numLock))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numQuest))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numCount_rez))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numCount_usl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numItem))->BeginInit();
			this->tabPage7->SuspendLayout();
			this->SuspendLayout();
			// 
			// Tree
			// 
			this->Tree->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->Tree->BackColor = System::Drawing::Color::White;
			this->Tree->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Tree->ForeColor = System::Drawing::SystemColors::Window;
			this->Tree->HideSelection = false;
			this->Tree->HotTracking = true;
			this->Tree->LineColor = System::Drawing::Color::Red;
			this->Tree->Location = System::Drawing::Point(0, 0);
			this->Tree->Name = L"Tree";
			this->Tree->ShowNodeToolTips = true;
			this->Tree->Size = System::Drawing::Size(692, 246);
			this->Tree->TabIndex = 0;
			this->Tree->NodeMouseDoubleClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &Form1::Tree_NodeMouseDoubleClick);
			this->Tree->NodeMouseHover += gcnew System::Windows::Forms::TreeNodeMouseHoverEventHandler(this, &Form1::Tree_NodeMouseHover);
			this->Tree->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &Form1::Tree_AfterSelect);
			this->Tree->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &Form1::Tree_NodeMouseClick);
			this->Tree->BeforeSelect += gcnew System::Windows::Forms::TreeViewCancelEventHandler(this, &Form1::Tree_BeforeSelect);
			this->Tree->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Tree_KeyDown);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->tabControl1->Location = System::Drawing::Point(0, 245);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(692, 221);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->cbState);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->numOri_dude);
			this->tabPage1->Controls->Add(this->numYdude);
			this->tabPage1->Controls->Add(this->numXdude);
			this->tabPage1->Controls->Add(this->numMap_dude);
			this->tabPage1->Controls->Add(this->numType_dude);
			this->tabPage1->Controls->Add(this->numIDdude);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(684, 195);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Инфа";
			this->tabPage1->ToolTipText = L"rrrrrr";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// cbState
			// 
			this->cbState->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbState->FormattingEnabled = true;
			this->cbState->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Живой", L"Мертвый"});
			this->cbState->Location = System::Drawing::Point(416, 6);
			this->cbState->Name = L"cbState";
			this->cbState->Size = System::Drawing::Size(121, 21);
			this->cbState->TabIndex = 31;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(349, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 13);
			this->label8->TabIndex = 30;
			this->label8->Text = L"Состояние";
			// 
			// numOri_dude
			// 
			this->numOri_dude->Location = System::Drawing::Point(287, 135);
			this->numOri_dude->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {5, 0, 0, 0});
			this->numOri_dude->Name = L"numOri_dude";
			this->numOri_dude->Size = System::Drawing::Size(53, 20);
			this->numOri_dude->TabIndex = 29;
			this->numOri_dude->ValueChanged += gcnew System::EventHandler(this, &Form1::numOri_dude_ValueChanged);
			// 
			// numYdude
			// 
			this->numYdude->Location = System::Drawing::Point(287, 109);
			this->numYdude->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {199, 0, 0, 0});
			this->numYdude->Name = L"numYdude";
			this->numYdude->Size = System::Drawing::Size(53, 20);
			this->numYdude->TabIndex = 28;
			// 
			// numXdude
			// 
			this->numXdude->Location = System::Drawing::Point(287, 83);
			this->numXdude->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {199, 0, 0, 0});
			this->numXdude->Name = L"numXdude";
			this->numXdude->Size = System::Drawing::Size(53, 20);
			this->numXdude->TabIndex = 27;
			this->numXdude->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged);
			// 
			// numMap_dude
			// 
			this->numMap_dude->Location = System::Drawing::Point(287, 57);
			this->numMap_dude->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000, 0, 0, 0});
			this->numMap_dude->Name = L"numMap_dude";
			this->numMap_dude->Size = System::Drawing::Size(53, 20);
			this->numMap_dude->TabIndex = 26;
			this->numMap_dude->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// numType_dude
			// 
			this->numType_dude->Location = System::Drawing::Point(287, 32);
			this->numType_dude->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {110, 0, 0, 0});
			this->numType_dude->Name = L"numType_dude";
			this->numType_dude->Size = System::Drawing::Size(53, 20);
			this->numType_dude->TabIndex = 25;
			// 
			// numIDdude
			// 
			this->numIDdude->Location = System::Drawing::Point(287, 6);
			this->numIDdude->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numIDdude->Name = L"numIDdude";
			this->numIDdude->Size = System::Drawing::Size(53, 20);
			this->numIDdude->TabIndex = 24;
			this->numIDdude->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(96, 135);
			this->textBox7->MaxLength = 20;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(125, 20);
			this->textBox7->TabIndex = 22;
			this->textBox7->Text = L"о ком";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(96, 109);
			this->textBox6->MaxLength = 20;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(125, 20);
			this->textBox6->TabIndex = 21;
			this->textBox6->Text = L"с кем";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(96, 83);
			this->textBox5->MaxLength = 20;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(125, 20);
			this->textBox5->TabIndex = 20;
			this->textBox5->Text = L"кого";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(96, 57);
			this->textBox4->MaxLength = 20;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(125, 20);
			this->textBox4->TabIndex = 19;
			this->textBox4->Text = L"кому";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(96, 31);
			this->textBox3->MaxLength = 20;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(125, 20);
			this->textBox3->TabIndex = 18;
			this->textBox3->Text = L"кого";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(96, 5);
			this->textBox2->MaxLength = 20;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(125, 20);
			this->textBox2->TabIndex = 17;
			this->textBox2->Tag = L"";
			this->textBox2->Text = L"кто";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(227, 138);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(36, 13);
			this->label15->TabIndex = 13;
			this->label15->Text = L"Напр.";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(239, 86);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(14, 13);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Х";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(227, 34);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 13);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Тип";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 138);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 13);
			this->label12->TabIndex = 10;
			this->label12->Text = L"Предложный";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(6, 84);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 13);
			this->label11->TabIndex = 9;
			this->label11->Text = L"Винительный";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 34);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(75, 13);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Родительный";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(238, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 13);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Y";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(227, 60);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Карта";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(227, 8);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"ИД";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Творительный";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Дательный";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Имя";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->lbStats);
			this->tabPage2->Controls->Add(this->lbSkills);
			this->tabPage2->Controls->Add(this->lbPerks);
			this->tabPage2->Controls->Add(this->nPe);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->nSk);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->nSt);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(684, 195);
			this->tabPage2->TabIndex = 7;
			this->tabPage2->Text = L"Параметры";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// lbStats
			// 
			this->lbStats->FormattingEnabled = true;
			this->lbStats->Location = System::Drawing::Point(7, 27);
			this->lbStats->Name = L"lbStats";
			this->lbStats->ScrollAlwaysVisible = true;
			this->lbStats->Size = System::Drawing::Size(220, 160);
			this->lbStats->TabIndex = 12;
			this->lbStats->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbStats_SelectedIndexChanged);
			// 
			// lbSkills
			// 
			this->lbSkills->FormattingEnabled = true;
			this->lbSkills->Location = System::Drawing::Point(233, 27);
			this->lbSkills->Name = L"lbSkills";
			this->lbSkills->ScrollAlwaysVisible = true;
			this->lbSkills->Size = System::Drawing::Size(220, 160);
			this->lbSkills->TabIndex = 11;
			this->lbSkills->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbSkills_SelectedIndexChanged);
			// 
			// lbPerks
			// 
			this->lbPerks->FormattingEnabled = true;
			this->lbPerks->Location = System::Drawing::Point(459, 26);
			this->lbPerks->Name = L"lbPerks";
			this->lbPerks->ScrollAlwaysVisible = true;
			this->lbPerks->Size = System::Drawing::Size(217, 160);
			this->lbPerks->TabIndex = 10;
			this->lbPerks->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lbPerks_SelectedIndexChanged);
			// 
			// nPe
			// 
			this->nPe->Location = System::Drawing::Point(546, 5);
			this->nPe->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->nPe->Name = L"nPe";
			this->nPe->Size = System::Drawing::Size(89, 20);
			this->nPe->TabIndex = 9;
			this->nPe->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown3_ValueChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(477, 7);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 13);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Перки";
			// 
			// nSk
			// 
			this->nSk->Location = System::Drawing::Point(320, 5);
			this->nSk->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999, 0, 0, 0});
			this->nSk->Name = L"nSk";
			this->nSk->Size = System::Drawing::Size(89, 20);
			this->nSk->TabIndex = 7;
			this->nSk->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown2_ValueChanged_1);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(254, 7);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(46, 13);
			this->label16->TabIndex = 6;
			this->label16->Text = L"Скиллы";
			// 
			// nSt
			// 
			this->nSt->Location = System::Drawing::Point(94, 3);
			this->nSt->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999, 0, 0, 0});
			this->nSt->Name = L"nSt";
			this->nSt->Size = System::Drawing::Size(89, 20);
			this->nSt->TabIndex = 3;
			this->nSt->ValueChanged += gcnew System::EventHandler(this, &Form1::nSt_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(38, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Статы";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->numParamCur);
			this->tabPage8->Controls->Add(this->numParamMax);
			this->tabPage8->Controls->Add(this->numParamMin);
			this->tabPage8->Controls->Add(this->button18);
			this->tabPage8->Controls->Add(this->button17);
			this->tabPage8->Controls->Add(this->txtParamAbout);
			this->tabPage8->Controls->Add(this->label29);
			this->tabPage8->Controls->Add(this->button15);
			this->tabPage8->Controls->Add(this->label35);
			this->tabPage8->Controls->Add(this->label34);
			this->tabPage8->Controls->Add(this->label33);
			this->tabPage8->Controls->Add(this->txtParamName);
			this->tabPage8->Controls->Add(this->label31);
			this->tabPage8->Controls->Add(this->lbVars);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Padding = System::Windows::Forms::Padding(3);
			this->tabPage8->Size = System::Drawing::Size(684, 195);
			this->tabPage8->TabIndex = 10;
			this->tabPage8->Text = L"Переменные";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// numParamCur
			// 
			this->numParamCur->Location = System::Drawing::Point(6, 169);
			this->numParamCur->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999999, 0, 0, 0});
			this->numParamCur->Name = L"numParamCur";
			this->numParamCur->Size = System::Drawing::Size(153, 20);
			this->numParamCur->TabIndex = 22;
			// 
			// numParamMax
			// 
			this->numParamMax->Location = System::Drawing::Point(6, 130);
			this->numParamMax->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999999, 0, 0, 0});
			this->numParamMax->Name = L"numParamMax";
			this->numParamMax->Size = System::Drawing::Size(153, 20);
			this->numParamMax->TabIndex = 21;
			// 
			// numParamMin
			// 
			this->numParamMin->Location = System::Drawing::Point(6, 93);
			this->numParamMin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999999, 0, 0, 0});
			this->numParamMin->Name = L"numParamMin";
			this->numParamMin->Size = System::Drawing::Size(153, 20);
			this->numParamMin->TabIndex = 20;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(537, 143);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(140, 23);
			this->button18->TabIndex = 19;
			this->button18->Text = L"Просмотреть описание";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(537, 169);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(140, 23);
			this->button17->TabIndex = 18;
			this->button17->Text = L"Удалить";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// txtParamAbout
			// 
			this->txtParamAbout->Location = System::Drawing::Point(165, 19);
			this->txtParamAbout->Name = L"txtParamAbout";
			this->txtParamAbout->Size = System::Drawing::Size(220, 168);
			this->txtParamAbout->TabIndex = 17;
			this->txtParamAbout->Text = L"";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(185, 3);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(57, 13);
			this->label29->TabIndex = 16;
			this->label29->Text = L"Описание";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(391, 143);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(140, 49);
			this->button15->TabIndex = 14;
			this->button15->Text = L"Добавить";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(7, 153);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(110, 13);
			this->label35->TabIndex = 12;
			this->label35->Text = L"Стартовое значение";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(6, 114);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(87, 13);
			this->label34->TabIndex = 9;
			this->label34->Text = L"Макс. значение";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(6, 77);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(81, 13);
			this->label33->TabIndex = 8;
			this->label33->Text = L"Мин. значение";
			// 
			// txtParamName
			// 
			this->txtParamName->Location = System::Drawing::Point(6, 19);
			this->txtParamName->MaxLength = 20;
			this->txtParamName->Name = L"txtParamName";
			this->txtParamName->Size = System::Drawing::Size(153, 20);
			this->txtParamName->TabIndex = 5;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(8, 3);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(57, 13);
			this->label31->TabIndex = 4;
			this->label31->Text = L"Название";
			// 
			// lbVars
			// 
			this->lbVars->FormattingEnabled = true;
			this->lbVars->HorizontalScrollbar = true;
			this->lbVars->Location = System::Drawing::Point(391, 6);
			this->lbVars->Name = L"lbVars";
			this->lbVars->Size = System::Drawing::Size(285, 134);
			this->lbVars->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->label20);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(684, 195);
			this->tabPage6->TabIndex = 9;
			this->tabPage6->Text = L"Инвентарь";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(329, 91);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(27, 13);
			this->label20->TabIndex = 11;
			this->label20->Text = L"N/A";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(684, 195);
			this->tabPage5->TabIndex = 8;
			this->tabPage5->Text = L"Настройка ИИ";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(329, 80);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(27, 13);
			this->label25->TabIndex = 10;
			this->label25->Text = L"N/A";
			// 
			// tabPage3
			// 
			this->tabPage3->AutoScroll = true;
			this->tabPage3->Controls->Add(this->label26);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->numTime_answ);
			this->tabPage3->Controls->Add(this->txtAnswer);
			this->tabPage3->Controls->Add(this->numLink);
			this->tabPage3->Controls->Add(this->label24);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->label19);
			this->tabPage3->Controls->Add(this->numIDdialog);
			this->tabPage3->Controls->Add(this->cbAID);
			this->tabPage3->Controls->Add(this->label1);
			this->tabPage3->Controls->Add(this->button1);
			this->tabPage3->Controls->Add(this->txtDialog);
			this->tabPage3->Controls->Add(this->cbAction_no_answ);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(684, 195);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Диалог/ответ";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(326, 84);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(127, 13);
			this->label26->TabIndex = 39;
			this->label26->Text = L"Действия при неответе";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(326, 45);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 13);
			this->label18->TabIndex = 38;
			this->label18->Text = L"Время на ответ";
			// 
			// numTime_answ
			// 
			this->numTime_answ->Location = System::Drawing::Point(329, 61);
			this->numTime_answ->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {300000, 0, 0, 0});
			this->numTime_answ->Name = L"numTime_answ";
			this->numTime_answ->Size = System::Drawing::Size(82, 20);
			this->numTime_answ->TabIndex = 37;
			this->numTime_answ->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {60000, 0, 0, 0});
			// 
			// txtAnswer
			// 
			this->txtAnswer->Location = System::Drawing::Point(45, 155);
			this->txtAnswer->Name = L"txtAnswer";
			this->txtAnswer->Size = System::Drawing::Size(379, 32);
			this->txtAnswer->TabIndex = 36;
			this->txtAnswer->Text = L"Ответ Игрока";
			// 
			// numLink
			// 
			this->numLink->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->numLink->Location = System::Drawing::Point(469, 165);
			this->numLink->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999, 0, 0, 0});
			this->numLink->Name = L"numLink";
			this->numLink->Size = System::Drawing::Size(53, 20);
			this->numLink->TabIndex = 35;
			// 
			// label24
			// 
			this->label24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(430, 168);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(33, 13);
			this->label24->TabIndex = 34;
			this->label24->Text = L"Линк";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(528, 155);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(153, 33);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Добавить ответ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click_1);
			// 
			// label19
			// 
			this->label19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(4, 170);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(37, 13);
			this->label19->TabIndex = 31;
			this->label19->Text = L"Ответ";
			// 
			// numIDdialog
			// 
			this->numIDdialog->Location = System::Drawing::Point(329, 22);
			this->numIDdialog->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {999, 0, 0, 0});
			this->numIDdialog->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			this->numIDdialog->Name = L"numIDdialog";
			this->numIDdialog->Size = System::Drawing::Size(82, 20);
			this->numIDdialog->TabIndex = 6;
			this->numIDdialog->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {2, 0, 0, 0});
			// 
			// cbAID
			// 
			this->cbAID->AutoSize = true;
			this->cbAID->Checked = true;
			this->cbAID->CheckState = System::Windows::Forms::CheckState::Checked;
			this->cbAID->Location = System::Drawing::Point(417, 23);
			this->cbAID->Name = L"cbAID";
			this->cbAID->Size = System::Drawing::Size(64, 17);
			this->cbAID->TabIndex = 5;
			this->cbAID->Text = L"Авто ID";
			this->cbAID->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(326, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Номер диалога";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(542, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 54);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Добавить диалог";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtDialog
			// 
			this->txtDialog->Location = System::Drawing::Point(3, 3);
			this->txtDialog->MaxLength = 10000;
			this->txtDialog->Name = L"txtDialog";
			this->txtDialog->Size = System::Drawing::Size(280, 150);
			this->txtDialog->TabIndex = 0;
			this->txtDialog->Text = L"Текст НПЦ";
			// 
			// cbAction_no_answ
			// 
			this->cbAction_no_answ->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbAction_no_answ->FormattingEnabled = true;
			this->cbAction_no_answ->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Завершить диалог", L"Начать атаку"});
			this->cbAction_no_answ->Location = System::Drawing::Point(329, 100);
			this->cbAction_no_answ->Name = L"cbAction_no_answ";
			this->cbAction_no_answ->Size = System::Drawing::Size(168, 21);
			this->cbAction_no_answ->TabIndex = 40;
			// 
			// tabPage4
			// 
			this->tabPage4->AutoScroll = true;
			this->tabPage4->Controls->Add(this->rbVars);
			this->tabPage4->Controls->Add(this->cbVars);
			this->tabPage4->Controls->Add(this->label28);
			this->tabPage4->Controls->Add(this->numLock);
			this->tabPage4->Controls->Add(this->rbScript);
			this->tabPage4->Controls->Add(this->cbTemp);
			this->tabPage4->Controls->Add(this->txtTemp3);
			this->tabPage4->Controls->Add(this->txtTemp2);
			this->tabPage4->Controls->Add(this->cbQuest_rez);
			this->tabPage4->Controls->Add(this->cbQuest_usl);
			this->tabPage4->Controls->Add(this->numQuest);
			this->tabPage4->Controls->Add(this->rbQuest);
			this->tabPage4->Controls->Add(this->txtTemp);
			this->tabPage4->Controls->Add(this->rbLock);
			this->tabPage4->Controls->Add(this->cbItem_usl);
			this->tabPage4->Controls->Add(this->cbItem_rez);
			this->tabPage4->Controls->Add(this->button7);
			this->tabPage4->Controls->Add(this->button6);
			this->tabPage4->Controls->Add(this->label22);
			this->tabPage4->Controls->Add(this->numCount_rez);
			this->tabPage4->Controls->Add(this->button5);
			this->tabPage4->Controls->Add(this->numCount_usl);
			this->tabPage4->Controls->Add(this->button4);
			this->tabPage4->Controls->Add(this->label21);
			this->tabPage4->Controls->Add(this->numItem);
			this->tabPage4->Controls->Add(this->cbPerk);
			this->tabPage4->Controls->Add(this->cbSkill);
			this->tabPage4->Controls->Add(this->rbItem);
			this->tabPage4->Controls->Add(this->rbPerk);
			this->tabPage4->Controls->Add(this->rbSkill);
			this->tabPage4->Controls->Add(this->rbStat);
			this->tabPage4->Controls->Add(this->cbStat);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(684, 195);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Условие/Результат";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// rbVars
			// 
			this->rbVars->AutoSize = true;
			this->rbVars->Location = System::Drawing::Point(8, 75);
			this->rbVars->Name = L"rbVars";
			this->rbVars->Size = System::Drawing::Size(74, 17);
			this->rbVars->TabIndex = 44;
			this->rbVars->TabStop = true;
			this->rbVars->Text = L"Перемен.";
			this->rbVars->UseVisualStyleBackColor = true;
			// 
			// cbVars
			// 
			this->cbVars->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbVars->FormattingEnabled = true;
			this->cbVars->Location = System::Drawing::Point(82, 74);
			this->cbVars->MaxDropDownItems = 20;
			this->cbVars->Name = L"cbVars";
			this->cbVars->Size = System::Drawing::Size(180, 21);
			this->cbVars->TabIndex = 43;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(641, 149);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(30, 13);
			this->label28->TabIndex = 42;
			this->label28->Text = L"мин.";
			// 
			// numLock
			// 
			this->numLock->Location = System::Drawing::Point(581, 144);
			this->numLock->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999, 0, 0, 0});
			this->numLock->Name = L"numLock";
			this->numLock->Size = System::Drawing::Size(57, 20);
			this->numLock->TabIndex = 41;
			// 
			// rbScript
			// 
			this->rbScript->AutoSize = true;
			this->rbScript->Enabled = false;
			this->rbScript->Location = System::Drawing::Point(8, 173);
			this->rbScript->Name = L"rbScript";
			this->rbScript->Size = System::Drawing::Size(61, 17);
			this->rbScript->TabIndex = 40;
			this->rbScript->TabStop = true;
			this->rbScript->Text = L"Скрипт";
			this->rbScript->UseVisualStyleBackColor = true;
			// 
			// cbTemp
			// 
			this->cbTemp->FormattingEnabled = true;
			this->cbTemp->Location = System::Drawing::Point(650, 172);
			this->cbTemp->Name = L"cbTemp";
			this->cbTemp->Size = System::Drawing::Size(19, 21);
			this->cbTemp->TabIndex = 39;
			this->cbTemp->Visible = false;
			// 
			// txtTemp3
			// 
			this->txtTemp3->Location = System::Drawing::Point(647, 169);
			this->txtTemp3->Name = L"txtTemp3";
			this->txtTemp3->Size = System::Drawing::Size(16, 9);
			this->txtTemp3->TabIndex = 38;
			this->txtTemp3->Text = L"";
			this->txtTemp3->Visible = false;
			// 
			// txtTemp2
			// 
			this->txtTemp2->Location = System::Drawing::Point(638, 182);
			this->txtTemp2->Name = L"txtTemp2";
			this->txtTemp2->Size = System::Drawing::Size(14, 10);
			this->txtTemp2->TabIndex = 37;
			this->txtTemp2->Text = L"";
			this->txtTemp2->Visible = false;
			// 
			// cbQuest_rez
			// 
			this->cbQuest_rez->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbQuest_rez->FormattingEnabled = true;
			this->cbQuest_rez->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Добавить как невыполненный", L"Пометить как выполненный", 
				L"Удалить из списка"});
			this->cbQuest_rez->Location = System::Drawing::Point(482, 96);
			this->cbQuest_rez->Name = L"cbQuest_rez";
			this->cbQuest_rez->Size = System::Drawing::Size(170, 21);
			this->cbQuest_rez->TabIndex = 36;
			// 
			// cbQuest_usl
			// 
			this->cbQuest_usl->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbQuest_usl->FormattingEnabled = true;
			this->cbQuest_usl->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Не должно быть", L"Должен быть невыплненный", 
				L"Должен быть выполненный"});
			this->cbQuest_usl->Location = System::Drawing::Point(277, 96);
			this->cbQuest_usl->Name = L"cbQuest_usl";
			this->cbQuest_usl->Size = System::Drawing::Size(170, 21);
			this->cbQuest_usl->TabIndex = 35;
			// 
			// numQuest
			// 
			this->numQuest->Location = System::Drawing::Point(82, 97);
			this->numQuest->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {100000, 0, 0, 0});
			this->numQuest->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numQuest->Name = L"numQuest";
			this->numQuest->Size = System::Drawing::Size(70, 20);
			this->numQuest->TabIndex = 34;
			this->numQuest->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			// 
			// rbQuest
			// 
			this->rbQuest->AutoSize = true;
			this->rbQuest->Location = System::Drawing::Point(9, 100);
			this->rbQuest->Name = L"rbQuest";
			this->rbQuest->Size = System::Drawing::Size(55, 17);
			this->rbQuest->TabIndex = 33;
			this->rbQuest->TabStop = true;
			this->rbQuest->Text = L"Квест";
			this->rbQuest->UseVisualStyleBackColor = true;
			// 
			// txtTemp
			// 
			this->txtTemp->Location = System::Drawing::Point(667, 182);
			this->txtTemp->Name = L"txtTemp";
			this->txtTemp->Size = System::Drawing::Size(14, 10);
			this->txtTemp->TabIndex = 32;
			this->txtTemp->Text = L"";
			this->txtTemp->Visible = false;
			// 
			// rbLock
			// 
			this->rbLock->AutoSize = true;
			this->rbLock->Location = System::Drawing::Point(483, 147);
			this->rbLock->Name = L"rbLock";
			this->rbLock->Size = System::Drawing::Size(101, 17);
			this->rbLock->TabIndex = 31;
			this->rbLock->TabStop = true;
			this->rbLock->Text = L"Блокировка на";
			this->rbLock->UseVisualStyleBackColor = true;
			// 
			// cbItem_usl
			// 
			this->cbItem_usl->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbItem_usl->FormattingEnabled = true;
			this->cbItem_usl->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Должен быть", L"Не должно быть"});
			this->cbItem_usl->Location = System::Drawing::Point(277, 121);
			this->cbItem_usl->Name = L"cbItem_usl";
			this->cbItem_usl->Size = System::Drawing::Size(170, 21);
			this->cbItem_usl->TabIndex = 26;
			// 
			// cbItem_rez
			// 
			this->cbItem_rez->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbItem_rez->FormattingEnabled = true;
			this->cbItem_rez->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"Добавить итем Игроку", L"Удалить итем у Игрока", 
				L"Добавить итем НПЦ", L"Удалить итем у НПЦ"});
			this->cbItem_rez->Location = System::Drawing::Point(482, 121);
			this->cbItem_rez->Name = L"cbItem_rez";
			this->cbItem_rez->Size = System::Drawing::Size(170, 21);
			this->cbItem_rez->TabIndex = 23;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(482, 169);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(146, 23);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Добавить результат";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(277, 169);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(170, 23);
			this->button6->TabIndex = 21;
			this->button6->Text = L"Добавить условие";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::Blue;
			this->label22->Location = System::Drawing::Point(525, 2);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(72, 13);
			this->label22->TabIndex = 20;
			this->label22->Text = L"Результат:";
			// 
			// numCount_rez
			// 
			this->numCount_rez->Location = System::Drawing::Point(528, 46);
			this->numCount_rez->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999, 0, 0, 0});
			this->numCount_rez->Name = L"numCount_rez";
			this->numCount_rez->Size = System::Drawing::Size(124, 20);
			this->numCount_rez->TabIndex = 19;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::Blue;
			this->button5->Location = System::Drawing::Point(482, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 90);
			this->button5->TabIndex = 18;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// numCount_usl
			// 
			this->numCount_usl->Location = System::Drawing::Point(323, 46);
			this->numCount_usl->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9999, 0, 0, 0});
			this->numCount_usl->Name = L"numCount_usl";
			this->numCount_usl->Size = System::Drawing::Size(124, 20);
			this->numCount_usl->TabIndex = 17;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(277, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 90);
			this->button4->TabIndex = 16;
			this->button4->Text = L">";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(320, 2);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(62, 13);
			this->label21->TabIndex = 15;
			this->label21->Text = L"Условие:";
			// 
			// numItem
			// 
			this->numItem->Location = System::Drawing::Point(82, 121);
			this->numItem->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {10000, 0, 0, 0});
			this->numItem->Name = L"numItem";
			this->numItem->Size = System::Drawing::Size(70, 20);
			this->numItem->TabIndex = 12;
			// 
			// cbPerk
			// 
			this->cbPerk->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbPerk->FormattingEnabled = true;
			this->cbPerk->Location = System::Drawing::Point(82, 50);
			this->cbPerk->MaxDropDownItems = 20;
			this->cbPerk->Name = L"cbPerk";
			this->cbPerk->Size = System::Drawing::Size(180, 21);
			this->cbPerk->TabIndex = 11;
			// 
			// cbSkill
			// 
			this->cbSkill->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbSkill->FormattingEnabled = true;
			this->cbSkill->Location = System::Drawing::Point(82, 27);
			this->cbSkill->MaxDropDownItems = 20;
			this->cbSkill->Name = L"cbSkill";
			this->cbSkill->Size = System::Drawing::Size(180, 21);
			this->cbSkill->TabIndex = 10;
			// 
			// rbItem
			// 
			this->rbItem->AutoSize = true;
			this->rbItem->Location = System::Drawing::Point(9, 121);
			this->rbItem->Name = L"rbItem";
			this->rbItem->Size = System::Drawing::Size(52, 17);
			this->rbItem->TabIndex = 8;
			this->rbItem->Text = L"Итем";
			this->rbItem->UseVisualStyleBackColor = true;
			// 
			// rbPerk
			// 
			this->rbPerk->AutoSize = true;
			this->rbPerk->Location = System::Drawing::Point(9, 51);
			this->rbPerk->Name = L"rbPerk";
			this->rbPerk->Size = System::Drawing::Size(51, 17);
			this->rbPerk->TabIndex = 7;
			this->rbPerk->Text = L"Перк";
			this->rbPerk->UseVisualStyleBackColor = true;
			// 
			// rbSkill
			// 
			this->rbSkill->AutoSize = true;
			this->rbSkill->Location = System::Drawing::Point(9, 28);
			this->rbSkill->Name = L"rbSkill";
			this->rbSkill->Size = System::Drawing::Size(56, 17);
			this->rbSkill->TabIndex = 6;
			this->rbSkill->Text = L"Скилл";
			this->rbSkill->UseVisualStyleBackColor = true;
			// 
			// rbStat
			// 
			this->rbStat->AutoSize = true;
			this->rbStat->Checked = true;
			this->rbStat->Location = System::Drawing::Point(9, 5);
			this->rbStat->Name = L"rbStat";
			this->rbStat->Size = System::Drawing::Size(48, 17);
			this->rbStat->TabIndex = 5;
			this->rbStat->TabStop = true;
			this->rbStat->Text = L"Стат";
			this->rbStat->UseVisualStyleBackColor = true;
			// 
			// cbStat
			// 
			this->cbStat->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbStat->FormattingEnabled = true;
			this->cbStat->Location = System::Drawing::Point(82, 4);
			this->cbStat->MaxDropDownItems = 20;
			this->cbStat->Name = L"cbStat";
			this->cbStat->Size = System::Drawing::Size(180, 21);
			this->cbStat->TabIndex = 4;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->txtCheck);
			this->tabPage7->Controls->Add(this->button14);
			this->tabPage7->Controls->Add(this->txtFName);
			this->tabPage7->Controls->Add(this->button8);
			this->tabPage7->Controls->Add(this->label23);
			this->tabPage7->Controls->Add(this->button13);
			this->tabPage7->Controls->Add(this->button10);
			this->tabPage7->Controls->Add(this->button9);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(684, 195);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Опции редактора";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// txtCheck
			// 
			this->txtCheck->Location = System::Drawing::Point(11, 105);
			this->txtCheck->Name = L"txtCheck";
			this->txtCheck->Size = System::Drawing::Size(429, 87);
			this->txtCheck->TabIndex = 11;
			this->txtCheck->Text = L"";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(537, 105);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(139, 29);
			this->button14->TabIndex = 10;
			this->button14->Text = L"Очистить все";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// txtFName
			// 
			this->txtFName->AutoSize = true;
			this->txtFName->Location = System::Drawing::Point(53, 57);
			this->txtFName->Name = L"txtFName";
			this->txtFName->Size = System::Drawing::Size(0, 13);
			this->txtFName->TabIndex = 9;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(156, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(139, 47);
			this->button8->TabIndex = 3;
			this->button8->Text = L"Сохранить НПЦ";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click_1);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(8, 57);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(39, 13);
			this->label23->TabIndex = 8;
			this->label23->Text = L"Файл:";
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button13->Location = System::Drawing::Point(11, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(139, 47);
			this->button13->TabIndex = 1;
			this->button13->Text = L"Загрузить НПЦ";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button10->Location = System::Drawing::Point(537, 140);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(139, 47);
			this->button10->TabIndex = 4;
			this->button10->Text = L"Выйти";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(11, 73);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(429, 26);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Проверить текущего НПЦ";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(571, 203);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(96, 21);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Удалить строку";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click_1);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(629, 12);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(38, 28);
			this->button11->TabIndex = 2;
			this->button11->Text = L"/\\";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(629, 46);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(38, 28);
			this->button12->TabIndex = 3;
			this->button12->Text = L"\\/";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// lErr
			// 
			this->lErr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lErr->AutoSize = true;
			this->lErr->ForeColor = System::Drawing::Color::Red;
			this->lErr->Location = System::Drawing::Point(302, 229);
			this->lErr->Name = L"lErr";
			this->lErr->Size = System::Drawing::Size(24, 13);
			this->lErr->TabIndex = 5;
			this->lErr->Text = L"нет";
			// 
			// dlg_save
			// 
			this->dlg_save->Filter = L"NPC files|*.npc";
			this->dlg_save->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::dlg_save_FileOk);
			// 
			// dlg_open
			// 
			this->dlg_open->Filter = L"NPC files|*.npc";
			this->dlg_open->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Form1::dlg_open_FileOk);
			// 
			// label27
			// 
			this->label27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::Color::Green;
			this->label27->Location = System::Drawing::Point(189, 229);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(107, 13);
			this->label27->TabIndex = 6;
			this->label27->Text = L"Последняя ошибка:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(692, 466);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->lErr);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Tree);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Редактор НПЦ. версия 0.7 alfa. From FOdev by FOdev";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numOri_dude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numYdude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numXdude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numMap_dude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numType_dude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numIDdude))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nPe))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nSk))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->nSt))->EndInit();
			this->tabPage8->ResumeLayout(false);
			this->tabPage8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numParamCur))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numParamMax))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numParamMin))->EndInit();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numTime_answ))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numLink))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numIDdialog))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numLock))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numQuest))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numCount_rez))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numCount_usl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numItem))->EndInit();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: 
		
		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			if (Tree->Nodes->IndexOfKey(numIDdialog->Text)!=-1)
			{
				lErr->Text="Диалог под таким номером уже создан";
				return;
			}

			not_answ[int(numIDdialog->Value)]=cbAction_no_answ->SelectedIndex;
			time_answ[int(numIDdialog->Value)]=int(numTime_answ->Value);
			sprintf(dlg_str[int(numIDdialog->Value)],"%s",txtDialog->Text);

			Tree->SelectedNode=Tree->Nodes->Add(numIDdialog->Text,"["+numIDdialog->Text+"] "+txtDialog->Text);
			Tree->SelectedNode->ToolTipText="Время:"+time_answ[int(numIDdialog->Value)]+" Нет ответа:"+cbAction_no_answ->Text;
			Tree->SelectedNode->ForeColor=Tree->SelectedNode->BackColor.Blue;

			if (cbAID->Checked==true)
				for (;;)
				{
					numIDdialog->Value++;
					if (Tree->Nodes->IndexOfKey(numIDdialog->Text)==-1) break;
					if (numIDdialog->Value>=numIDdialog->Maximum) break;
				}
		}

public: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e)
		{
			if (Tree->GetNodeCount(false) && Tree->SelectedNode)
			{
				if (Tree->SelectedNode->Level==0 && Tree->SelectedNode->Index==0)
				{
					lErr->Text="Этот диалог нельзя удалить";
					return;
				}
				Tree->Nodes->Remove(Tree->SelectedNode);
			}
			else
			{
				lErr->Text="Нет ни одного диалога";
				return;
			}
		}
public: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if (button4->Text==">") button4->Text="<";
			 else if (button4->Text=="<") button4->Text="=";
			 else if (button4->Text=="=") button4->Text=">";
		 }
public: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			if (button5->Text=="+") button5->Text="-";
			else if (button5->Text=="-") button5->Text="*";
			else if (button5->Text=="*") button5->Text="/";
			else if (button5->Text=="/") button5->Text="=";
			else if (button5->Text=="=") button5->Text="+";
		 }

public: System::Void Tree_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e)
		{
		//	Tree->SelectedNode->BackColor=Tree->SelectedNode->BackColor.FromArgb(1,2,3);
			/*
			if (!Tree->SelectedNode) return;

			if (Tree->SelectedNode->Level==0)
			{
				txtDialog->Text=Tree->SelectedNode->Text;
				numIDdialog->Text=Tree->SelectedNode->Name;
			}

			if (Tree->SelectedNode->Level==1)
			{
				txtAnswer->Text=Tree->SelectedNode->Text;
				numLink->Text=Tree->SelectedNode->Name;
			}
			*/
		}
public: System::Void Tree_BeforeSelect(System::Object^  sender, System::Windows::Forms::TreeViewCancelEventArgs^  e)
		{
		/*
			if (!Tree->SelectedNode) return;
			switch (Tree->SelectedNode->Level)
			{
			case 0:
				Tree->SelectedNode->BackColor=Tree->SelectedNode->BackColor.DarkGreen;
				break;
			case 1:
				Tree->SelectedNode->BackColor=Tree->SelectedNode->BackColor.DarkGoldenrod;
				break;
			case 2:
				if (Tree->SelectedNode->Text=="Условие")
					Tree->SelectedNode->BackColor=Tree->SelectedNode->BackColor.DarkRed;
				if (Tree->SelectedNode->Text=="Результат")
					Tree->SelectedNode->BackColor=Tree->SelectedNode->BackColor.LimeGreen;
				break;
			case 3:
				Tree->SelectedNode->BackColor=Tree->SelectedNode->BackColor.Empty;
				break;
			}
			*/
		 }
public: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
		{
			if (!Tree->SelectedNode)
			{
				lErr->Text="Выберите ответ для условия";
				return;
			}
			if (Tree->SelectedNode->Level!=1)
			{
				lErr->Text="Выберите ответ для условия";
				return;
			}
			if (rbLock->Checked)
			{
				lErr->Text="Только для результата";
				return;
			}
			
			if (Tree->SelectedNode->Nodes->IndexOfKey("usl")==-1)
			{
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Add("usl","Условие");
				//Tree->SelectedNode->BackColor=Tree->SelectedNode->BackColor.Maroon;
				Tree->SelectedNode->ForeColor=Tree->SelectedNode->BackColor.Black;
			}
			else
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Find("usl",false)[0];

			if (rbStat->Checked)
			{
				txtTemp->LoadFile(path_data+"stats2.rtf");
				
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
					"stat "+txtTemp->Lines[cbStat->SelectedIndex]+" "+button4->Text+" "+numCount_usl->Text,
					cbStat->Text+" "+button4->Text+" "+numCount_usl->Text);
			}
			if (rbSkill->Checked)
			{
				txtTemp->LoadFile(path_data+"skills2.rtf");
				
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
					"skill "+txtTemp->Lines[cbSkill->SelectedIndex]+" "+button4->Text+" "+numCount_usl->Text,
					cbSkill->Text+" "+button4->Text+" "+numCount_usl->Text);
			}
			if (rbVars->Checked && cbVars->SelectedIndex!=-1)
			{
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
					"var "+cbVars->Text+" "+button4->Text+" "+numCount_usl->Text,
					cbVars->Text+" "+button4->Text+" "+numCount_usl->Text);
			}
			if (rbPerk->Checked)
			{
				txtTemp->LoadFile(path_data+"perks2.rtf");
				
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
					"perk "+txtTemp->Lines[cbPerk->SelectedIndex]+" "+button4->Text+" "+numCount_usl->Text,
					cbPerk->Text+" "+button4->Text+" "+numCount_usl->Text);
			}
			if (rbQuest->Checked)
			{
				if (cbQuest_usl->SelectedIndex==0) //не должно быть
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"quest "+numQuest->Text+" 0",
						"Квеста №"+numQuest->Text+" не должно быть в списке");
				}
				else if (cbQuest_usl->SelectedIndex==1) //не выполн.
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"quest "+numQuest->Text+" -",
						"Квест №"+numQuest->Text+" в списке, но невыполнен");
				}
				else if (cbQuest_usl->SelectedIndex==2) //выполн.
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"quest "+numQuest->Text+" +",
						"Квест №"+numQuest->Text+" выполнен");
				}
			}
			if (rbItem->Checked)
			{
				if (cbItem_usl->SelectedIndex==0)
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"item "+numItem->Text+" +",
						"Налиичие итема №"+numItem->Text);
				else
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"item "+numItem->Text+" -",
						"Отсутствие итема №"+numItem->Text);
			}

			Tree->SelectedNode->ForeColor=Tree->SelectedNode->BackColor.Red;
		}
public: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e)
		{
			if (!Tree->SelectedNode)
			{
				lErr->Text="Выберите ответ для результата";
				return;
			}
			if (Tree->SelectedNode->Level!=1)
			{
				lErr->Text="Выберите ответ для результата";
				return;
			}
			
			if (Tree->SelectedNode->Nodes->IndexOfKey("rez")==-1)
			{
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Add("rez","Результат");
				//Tree->SelectedNode->BackColor=Tree->SelectedNode->BackColor.DarkOrchid;
				Tree->SelectedNode->ForeColor=Tree->SelectedNode->BackColor.Black;
			}
			else
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Find("rez",false)[0];

			if (rbStat->Checked)
			{
				txtTemp->LoadFile(path_data+"stats2.rtf");
				
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
					"stat "+txtTemp->Lines[cbStat->SelectedIndex]+" "+button5->Text+" "+numCount_rez->Text,
					cbStat->Text+" "+button5->Text+" "+numCount_rez->Text);
			}
			if (rbSkill->Checked)
			{
				txtTemp->LoadFile(path_data+"skills2.rtf");
				
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
					"skill "+txtTemp->Lines[cbSkill->SelectedIndex]+" "+button5->Text+" "+numCount_rez->Text,
					cbSkill->Text+" "+button5->Text+" "+numCount_rez->Text);
			}
			if (rbVars->Checked && cbVars->SelectedIndex!=-1)
			{
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
					"var "+cbVars->Text+" "+button5->Text+" "+numCount_rez->Text,
					cbVars->Text+" "+button5->Text+" "+numCount_rez->Text);
			}
			if (rbPerk->Checked)
			{
				txtTemp->LoadFile(path_data+"perks2.rtf");
				
				Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
					"perk "+txtTemp->Lines[cbPerk->SelectedIndex]+" "+button5->Text+" "+numCount_rez->Text,
					cbPerk->Text+" "+button5->Text+" "+numCount_rez->Text);
			}
			if (rbQuest->Checked)
			{
				if (cbQuest_rez->SelectedIndex==0) //не должно быть
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"quest "+numQuest->Text+" -",
						"Квеста №"+numQuest->Text+" пометить как невыполненный");
				}
				else if (cbQuest_rez->SelectedIndex==1) //не выполн.
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"quest "+numQuest->Text+" +",
						"Квест №"+numQuest->Text+" пометить как выполненный");
				}
				else if (cbQuest_rez->SelectedIndex==2) //выполн.
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"quest "+numQuest->Text+" 0",
						"Квест №"+numQuest->Text+" удалить из списка");
				}
			}
			if (rbItem->Checked)
			{
				if (cbItem_rez->SelectedIndex==0) //Добавить итем Игроку
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"item "+numItem->Text+" p+",
						"Добавить ИГРОКУ итем №"+numItem->Text);
				}
				else if (cbItem_rez->SelectedIndex==1) //Удалить итем у Игрока
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"item "+numItem->Text+" p-",
						"Удалить у ИГРОКА итем №"+numItem->Text);
				}
				else if (cbItem_rez->SelectedIndex==2) //Добавить итем НПЦ
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"item "+numItem->Text+" n+",
						"Добавить НПЦ итем №"+numItem->Text);
				}
				else if (cbItem_rez->SelectedIndex==3) //Удалить итем у НПЦ
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"item "+numItem->Text+" n-",
						"Удалить у НПЦ итем №"+numItem->Text);
				}
			}
			if (rbLock->Checked)
			{
				if (numLock->Value==0)
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"lock "+numLock->Text,
						"Блокировать ответ навсегда");
				}
				else
				{
					Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(
						"lock "+numLock->Text,
						"Блокировать ответ на "+numLock->Text+" игровых минут");
				}
			}

			Tree->SelectedNode->ForeColor=Tree->SelectedNode->BackColor.Red;
		}
public: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		{

		}
public: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MoveNode(-1);
		}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e)
		{
			MoveNode(1);
		}
public: System::Void MoveNode(int count)
		{
			if (!Tree->SelectedNode)
			{
				lErr->Text="Выберите ветку диалога или ответа";
				return;
			}
			if (Tree->SelectedNode->Level!=0 && Tree->SelectedNode->Level!=1)
			{
				lErr->Text="Менять номер можно только у диалога или ответа";
				return;
			}

			System::Windows::Forms::TreeNode^ dlg1;
			System::Windows::Forms::TreeNode^ dlg2;
			int ins_ind=0;

			if (Tree->SelectedNode->Level==0)
			{
				if (Tree->SelectedNode->Index==0)
				{
					lErr->Text="Этот диалог нельзя перемещать";
					return;
				}
				dlg1=Tree->SelectedNode;
				ins_ind=Tree->SelectedNode->Index;
				if (ins_ind+count==0)
				{
					lErr->Text="Нельзя переместить выше";
					return;
				}
				dlg1->Remove();
				Tree->Nodes->Insert(ins_ind+count,dlg1);
				Tree->SelectedNode=dlg1;
			}
			if (Tree->SelectedNode->Level==1)
			{
				dlg1=Tree->SelectedNode;
				dlg2=Tree->SelectedNode->Parent;
				ins_ind=Tree->SelectedNode->Index;
				dlg1->Remove();
				dlg2->Nodes->Insert(ins_ind+count,dlg1);
				Tree->SelectedNode=dlg1;
			}
		}
public: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e)
		{
			dlg_save->ShowDialog();
		}
public: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e)
		{
			char path_dir[300];
			GetCurrentDirectoryA(300,path_dir);
			path_data=String(path_dir).ToString()+"\\Data\\";

			dlg_save->InitialDirectory+="NPC\\";
			dlg_open->InitialDirectory+="NPC\\";

			ResetAll();

			Tree->SelectedNode=Tree->Nodes->Add("1","[1] {Преддиалоговые установки}");
			Tree->SelectedNode->ToolTipText="Преддиалоговые установки";
			Tree->SelectedNode->ForeColor=Tree->SelectedNode->BackColor.BlueViolet;
			not_answ[1]=0;
			time_answ[1]=0;
			strcpy(dlg_str[1],"{Преддиалоговые установки}");
		}
public: System::Void ResetAll()
		{
			int r=0;

			txtTemp->LoadFile(path_data+"stats1.rtf");
			cbStat->Items->Clear();
			cbStat->Items->AddRange(txtTemp->Lines);
			cbStat->SelectedIndex=0;
			lbStats->Items->Clear();
			lbStats->Items->AddRange(txtTemp->Lines);
			lbStats->SelectedIndex=0;
			for (r=0; r<lbStats->Items->Count; r++)
			{
				st[r]=0;
				lbStats->Items[r]+=" "+st[r].ToString();
			}

			txtTemp->LoadFile(path_data+"skills1.rtf");
			cbSkill->Items->Clear();
			cbSkill->Items->AddRange(txtTemp->Lines);
			cbSkill->SelectedIndex=0;
			lbSkills->Items->Clear();
			lbSkills->Items->AddRange(txtTemp->Lines);
			lbSkills->SelectedIndex=0;
			for (r=0; r<lbSkills->Items->Count; r++)
			{
				sk[r]=0;
				lbSkills->Items[r]+=" "+sk[r].ToString();
			}

			txtTemp->LoadFile(path_data+"perks1.rtf");
			cbPerk->Items->Clear();
			cbPerk->Items->AddRange(txtTemp->Lines);
			cbPerk->SelectedIndex=0;
			lbPerks->Items->Clear();
			lbPerks->Items->AddRange(txtTemp->Lines);
			lbPerks->SelectedIndex=0;
			for (r=0; r<lbPerks->Items->Count; r++)
			{
				pe[r]=0;
				lbPerks->Items[r]+=" "+pe[r].ToString();
			}

			cbItem_usl->SelectedIndex=0;
			cbItem_rez->SelectedIndex=0;

			cbQuest_usl->SelectedIndex=0;
			cbQuest_rez->SelectedIndex=0;

			cbState->SelectedIndex=0;

			cbAction_no_answ->SelectedIndex=0;

			Tree->Nodes->Clear();

//ПЕРЕМЕННЫЕ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
			for (int ev=0; ev<MAX_VARS; ev++)
			{
				VarName[ev][0]=0;
				VarParam[ev][0]=0;
			}

			lbVars->Items->Clear();
			txtParamAbout->MaxLength=MAX_ABOUT_VAR;
			txtParamName->MaxLength=MAX_NAME_VAR;
			txtParamName->Text="english_letters";
			numParamCur->Text="0";
			numParamMin->Text="0";
			numParamMax->Text="0";
			txtParamAbout->Text="Описание пока не реализовано";
			cbVars->Items->Clear();

			numParamMin->Minimum=-2000000000;
			numParamMin->Maximum=2000000000;
			numParamMax->Minimum=-2000000000;
			numParamMax->Maximum=2000000000;
			numParamCur->Minimum=-2000000000;
			numParamCur->Maximum=2000000000;

			numParamMin->Value=-2000000000;
			numParamMax->Value=2000000000;
			numParamCur->Value=0;
//ПЕРЕМЕННЫЕ------------------------------------------------------------------------------------------------
		}
public: System::Void Tree_NodeMouseDoubleClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e)
		{

		}
public: System::Void Tree_NodeMouseClick(System::Object^  sender, System::Windows::Forms::TreeNodeMouseClickEventArgs^  e)
		{
			if (e->Button==System::Windows::Forms::MouseButtons::Right) EditNode();
		}
private: System::Void Tree_NodeMouseHover(System::Object^  sender, System::Windows::Forms::TreeNodeMouseHoverEventArgs^  e)
		{
			//Tree->SelectedNode->
		}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e)
		{
			if (!Tree->SelectedNode)
			{
				lErr->Text="Выберите диалог";
				return;
			}
			if (Tree->SelectedNode->Level!=0)
			{
				lErr->Text="Выберите диалог";
				return;
			}

			Tree->SelectedNode=Tree->SelectedNode->Nodes->Add(numLink->Text,"null");
			Tree->SelectedNode->ToolTipText=txtAnswer->Text;
			Tree->SelectedNode->Text="[->"+Tree->SelectedNode->Name+"] "+Tree->SelectedNode->ToolTipText;
			//Tree->SelectedNode->BackColor=Tree->SelectedNode->BackColor.DarkGoldenrod;
			Tree->SelectedNode->ForeColor=Tree->SelectedNode->BackColor.Green;
		}
private: System::Void button8_Click_1(System::Object^  sender, System::EventArgs^  e)
		{
			dlg_save->FileName=txtFName->Text;
			dlg_save->ShowDialog();
		}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
		{
			Close();
		}
private: System::Void lbSt_Click(System::Object^  sender, System::EventArgs^  e)
		{
			
		}
private: System::Void lbSt_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
		{
			
		}
private: System::Void lbSt_ParentChanged(System::Object^  sender, System::EventArgs^  e)
		{
			
		}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e)
		{
			dlg_open->FileName=txtFName->Text;
			dlg_open->ShowDialog();
		}
private: System::Void lbSt_ChangeUICues(System::Object^  sender, System::Windows::Forms::UICuesEventArgs^  e)
		{
			
		}
private: System::Void lbSt_Validating(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e)
		{
			
		}
private: System::Void lbSt_MouseHover(System::Object^  sender, System::EventArgs^  e)
		{
		}
private: System::Void lbStats_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
		{
			nSt->Value=st[lbStats->SelectedIndex];
		}
private: System::Void nSt_ValueChanged(System::Object^  sender, System::EventArgs^  e)
		{
			st[lbStats->SelectedIndex]=int(nSt->Value);

			txtTemp->LoadFile(path_data+"stats1.rtf");

			int tmp=lbStats->SelectedIndex;

			lbStats->Items->Clear();
			lbStats->Items->AddRange(txtTemp->Lines);
			
			for (int r=0; r<lbStats->Items->Count; r++)
			{
				lbStats->Items[r]+=" "+st[r].ToString();
			}

			lbStats->SelectedIndex=tmp;
		}
private: System::Void lbSkills_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
		{
			nSk->Value=sk[lbSkills->SelectedIndex];
		}
private: System::Void numericUpDown2_ValueChanged_1(System::Object^  sender, System::EventArgs^  e)
		{
			sk[lbSkills->SelectedIndex]=int(nSk->Value);

			txtTemp->LoadFile(path_data+"skills1.rtf");

			int tmp=lbSkills->SelectedIndex;

			lbSkills->Items->Clear();
			lbSkills->Items->AddRange(txtTemp->Lines);
			
			for (int r=0; r<lbSkills->Items->Count; r++)
			{
				lbSkills->Items[r]+=" "+sk[r].ToString();
			}

			lbSkills->SelectedIndex=tmp;
		}

private: System::Void lbPerks_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
		{
			nPe->Value=pe[lbPerks->SelectedIndex];
		}
private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e)
		{
			pe[lbPerks->SelectedIndex]=int(nPe->Value);

			txtTemp->LoadFile(path_data+"perks1.rtf");

			int tmp=lbPerks->SelectedIndex;

			lbPerks->Items->Clear();
			lbPerks->Items->AddRange(txtTemp->Lines);
			
			for (int r=0; r<lbPerks->Items->Count; r++)
			{
				lbPerks->Items[r]+=" "+pe[r].ToString();
			}

			lbPerks->SelectedIndex=tmp;
		}
private: System::Void dlg_save_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e)
		{
			txtFName->Text=dlg_save->FileName;

			txtTemp->Clear();
			txtTemp2->Clear();
			txtTemp2->Text="[dialogs]\n";

			txtTemp->Text="[info]\n";
			txtTemp->Text+="id="+		numIDdude->Text+	"\n";
			txtTemp->Text+="base_type="+numType_dude->Text+	"\n";
			txtTemp->Text+="map="+		numMap_dude->Text+	"\n";
			txtTemp->Text+="x="+		numXdude->Text+		"\n";
			txtTemp->Text+="y="+		numYdude->Text+		"\n";
			txtTemp->Text+="ori="+		numOri_dude->Text+	"\n";

			txtTemp->Text+="name="+		textBox2->Text+"\n";
			txtTemp->Text+="cases0="+	textBox3->Text+"\n";
			txtTemp->Text+="cases1="+	textBox4->Text+"\n";
			txtTemp->Text+="cases2="+	textBox5->Text+"\n";
			txtTemp->Text+="cases3="+	textBox6->Text+"\n";
			txtTemp->Text+="cases4="+	textBox7->Text+"\n";

			if (cbState->SelectedIndex==0)
			{
				txtTemp->Text+="cond=LIFE"+"\n";
			}
			else if (cbState->SelectedIndex==1)
			{
				txtTemp->Text+="cond=DEAD"+"\n";
			}

			txtTemp->Text+="\n";
			txtTemp->Text+="[stats]\n";
			txtTemp3->LoadFile(path_data+"stats2.rtf");
			for (int z=0; z<lbStats->Items->Count; z++)
				txtTemp->Text+=txtTemp3->Lines[z]+"="+st[z].ToString()+"\n";

			txtTemp->Text+="\n";
			txtTemp->Text+="[skills]\n";
			txtTemp3->LoadFile(path_data+"skills2.rtf");
			for (int z=0; z<lbSkills->Items->Count; z++)
				txtTemp->Text+=txtTemp3->Lines[z]+"="+sk[z].ToString()+"\n";

			txtTemp->Text+="\n";
			txtTemp->Text+="[perks]\n";
			txtTemp3->LoadFile(path_data+"perks2.rtf");
			for (int z=0; z<lbPerks->Items->Count; z++)
				txtTemp->Text+=txtTemp3->Lines[z]+"="+pe[z].ToString()+"\n";

			txtTemp->Text+="\n";

			txtTemp->Text+="[vars]\n";
			for (int gv=0; gv<MAX_VARS; gv++)
					txtTemp->Text+=String(VarName[gv]).ToString()+" "+String(VarParam[gv]).ToString()+"\n";

			txtTemp->Text+="[end_vars]\n\n";

			if (Tree->GetNodeCount(false) && Tree->Nodes->IndexOfKey("1")!=-1)
			{
				int b=0;
				int b2=0;
				int b3=0;
				int b4=0;

				int rnd=0;
				Random randomizer;

				String^ str_1;

				System::Windows::Forms::TreeNode^ dlg_node;
				System::Windows::Forms::TreeNode^ link_node;
				System::Windows::Forms::TreeNode^ usl_node;
				System::Windows::Forms::TreeNode^ usl;
				System::Windows::Forms::TreeNode^ rez_node;
				System::Windows::Forms::TreeNode^ rez;

				dlg_node=Tree->Nodes->Find("1",false)[0];

				txtTemp->Text+="[dialogs]\n";
				txtTemp->Text+="&\n";
				
				for (b=1; b<=Tree->GetNodeCount(false); b++)
				{
				//визуализация сохранения
					Tree->SelectedNode=dlg_node;
				
				//рандомный указатель на строку
					rnd=randomizer.Next(10000000,99999999);

				//диалог
					txtTemp->Text+=dlg_node->Name+" "+rnd.ToString()+" ";
				//доп. параметры диалога
					char tmp_str[300];
					sprintf(tmp_str,"%s",dlg_node->Name);
					int b_1=atoi(tmp_str);
					if (not_answ[b_1]==0) //none
						txtTemp->Text+="NOT_ANSWER_CLOSE_DIALOG "+time_answ[b_1];
					else if (not_answ[b_1]==1) //attack
						txtTemp->Text+="NOT_ANSWER_BEGIN_BATTLE "+time_answ[b_1];

				//текст
					str_1=String(dlg_str[b_1]).ToString();
					str_1=str_1->Replace('\n','#');
					txtTemp2->Text+=rnd.ToString()+"="+str_1+"\n";

					if (dlg_node->GetNodeCount(false))
					{
						txtTemp->Text+="#\n";

						link_node=dlg_node->FirstNode;

						for (b2=1; b2<=dlg_node->GetNodeCount(false); b2++)
						{
							rnd=randomizer.Next(10000000,99999999);
						//id линка
							txtTemp->Text+=link_node->Name+" "+rnd.ToString();

							str_1=link_node->ToolTipText;
							str_1=str_1->Replace('\n','#');
						//id текста
							txtTemp2->Text+=rnd.ToString()+"="+str_1+"\n";

							if (link_node->GetNodeCount(false))
							{
								if (link_node->Nodes->IndexOfKey("usl")!=-1)
								{
									usl_node=link_node->Nodes->Find("usl",false)[0];
									
									if (usl_node->Nodes->Count)
									{
										usl=usl_node->FirstNode;

										txtTemp->Text+="u";
									
										for (b4=0; b4<usl_node->GetNodeCount(false); b4++)
										{
											txtTemp->Text+="*"+usl->Name;
											usl=usl->NextNode;
										}
									}
								}
								if (link_node->Nodes->IndexOfKey("rez")!=-1)
								{
									rez_node=link_node->Nodes->Find("rez",false)[0];

									if (rez_node->Nodes->Count)
									{
										rez=rez_node->FirstNode;

										txtTemp->Text+="r";
									
										for (b4=0; b4<rez_node->GetNodeCount(false); b4++)
										{
											txtTemp->Text+="*"+rez->Name;
											rez=rez->NextNode;
										}
									}
								}
							}

							if (b2!=dlg_node->GetNodeCount(false))
							{
								link_node=link_node->NextNode;
								txtTemp->Text+="#\n";
							}
						}
					}

					if (b==Tree->GetNodeCount(false))
						txtTemp->Text+="&\n";
					else
					{
						dlg_node=dlg_node->NextNode;
						txtTemp->Text+="@\n";
					}
				}
			}

			char file_name1[300];
			char file_name2[300];
			sprintf(file_name1,"%s",dlg_save->FileName);
			sprintf(file_name2,"%s",dlg_save->FileName);
			file_name1[strlen(file_name1)-3]=0;
			file_name2[strlen(file_name2)-3]=0;
			strcat(file_name1,"npc");
			strcat(file_name2,"dlg");

			txtTemp->SaveFile(String(file_name1).ToString(),RichTextBoxStreamType::PlainText);
			txtTemp2->SaveFile(String(file_name2).ToString(),RichTextBoxStreamType::PlainText);
			txtTemp2->SaveFile(String(file_name2).ToString(),RichTextBoxStreamType::PlainText);//!!!!!!!!!!
		}
private: System::Void dlg_open_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e)
		{
			txtFName->Text=dlg_open->FileName;

			FILE *cf;
			char file_name1[300];
			char file_name2[300];

			sprintf(file_name1,"%s",dlg_open->FileName);
			sprintf(file_name2,"%s",dlg_open->FileName);
			file_name1[strlen(file_name1)-3]=0;
			file_name2[strlen(file_name2)-3]=0;
			strcat(file_name1,"npc");
			strcat(file_name2,"dlg");

			if ((cf=fopen(file_name2, "rt"))==NULL)
			{
				lErr->Text="Не найден файл:|"+String(file_name2).ToString()+"|";
				return;
			}
			fclose(cf);
			if ((cf=fopen(file_name1, "rt"))==NULL)
			{
				lErr->Text="Не найден файл:|"+String(file_name1).ToString()+"|";
				return;
			}
			
			ResetAll();

			char ret_str[10000];

		//Инфа
			numIDdude->Value	=GetPrivateProfileIntA("info","id"			,0,file_name1);
			numType_dude->Value	=GetPrivateProfileIntA("info","base_type"	,0,file_name1);
			numMap_dude->Value	=GetPrivateProfileIntA("info","map"			,0,file_name1);
			numXdude->Value		=GetPrivateProfileIntA("info","x"			,0,file_name1);
			numYdude->Value		=GetPrivateProfileIntA("info","y"			,0,file_name1);
			numOri_dude->Value	=GetPrivateProfileIntA("info","ori"			,0,file_name1);

			GetPrivateProfileStringA("info","name"	,"err",ret_str,MAX_NAME,file_name1);
			textBox2->Text=String(ret_str).ToString();
			GetPrivateProfileStringA("info","cases0","err",ret_str,MAX_NAME,file_name1);
			textBox3->Text=String(ret_str).ToString();
			GetPrivateProfileStringA("info","cases1","err",ret_str,MAX_NAME,file_name1);
			textBox4->Text=String(ret_str).ToString();
			GetPrivateProfileStringA("info","cases2","err",ret_str,MAX_NAME,file_name1);
			textBox5->Text=String(ret_str).ToString();
			GetPrivateProfileStringA("info","cases3","err",ret_str,MAX_NAME,file_name1);
			textBox6->Text=String(ret_str).ToString();
			GetPrivateProfileStringA("info","cases4","err",ret_str,MAX_NAME,file_name1);
			textBox7->Text=String(ret_str).ToString();

			GetPrivateProfileStringA("info","cond","err",ret_str,MAX_NAME,file_name1);
			if (String(ret_str).ToString()=="LIFE")
			{
				cbState->SelectedIndex=0;
			}
			else if (String(ret_str).ToString()=="DEAD")
			{
				cbState->SelectedIndex=1;
			}

		//параметры
			char key[100];

			txtTemp3->LoadFile(path_data+"stats2.rtf");
			for (int z=0; z<lbStats->Items->Count; z++)
			{
				sprintf(key,"%s",txtTemp3->Lines[z]);
				GetPrivateProfileStringA("stats",key,"0",ret_str,10,file_name1);
				st[z]=atoi(ret_str);
			}

			txtTemp3->LoadFile(path_data+"skills2.rtf");
			for (int z=0; z<lbSkills->Items->Count; z++)
			{
				sprintf(key,"%s",txtTemp3->Lines[z]);
				GetPrivateProfileStringA("skills",key,"0",ret_str,10,file_name1);
				sk[z]=atoi(ret_str);
			}

			txtTemp3->LoadFile(path_data+"perks2.rtf");
			for (int z=0; z<lbPerks->Items->Count; z++)
			{
				sprintf(key,"%s",txtTemp3->Lines[z]);
				GetPrivateProfileStringA("stats",key,"0",ret_str,10,file_name1);
				pe[z]=atoi(ret_str);
			}

		//переменные
			char p_tmp1[200];
			char p_tmp2[200];
			char p_tmp3[200];
			int p_tmpi=0;

			while (!feof(cf))
			{
				fscanf(cf, "%s", &p_tmp1);
				if (!stricmp(p_tmp1,"[vars]"))
				{
					while (!feof(cf))
					{
						fscanf(cf, "%s", &p_tmp2);
						if (!stricmp(p_tmp2,"[end_vars]")) break;

					//имя
						txtParamName->Text=String(p_tmp2).ToString();

					//cur
						fscanf(cf, "%d", &p_tmp3, &p_tmpi);
						numParamCur->Value=p_tmpi;

					//min
						fscanf(cf, "%s%d", &p_tmp3, &p_tmpi);
						numParamMin->Value=p_tmpi;

					//max
						fscanf(cf, "%s%d", &p_tmp3, &p_tmpi);
						numParamMax->Value=p_tmpi;

						AddParam();
					}
					break;
				}
			}
			fclose(cf);
			cf=fopen(file_name1, "rt");

		//диалоги
			int read_int=0;
			int read_int2=0;
			int read_int3=0;
			char read_str[100];
			char read_str2[100];
			char read_str3[100];
			char read_str4[100];
			char key1[100];
			char ch[20];
			BOOL read_proc=FALSE;

			System::Windows::Forms::TreeNode^ dlg;
			System::Windows::Forms::TreeNode^ answ;
			System::Windows::Forms::TreeNode^ usl;
			System::Windows::Forms::TreeNode^ usl_n;
			System::Windows::Forms::TreeNode^ rez;
			System::Windows::Forms::TreeNode^ rez_n;

			while (!feof(cf))
			{
				fscanf(cf, "%c", &ch);
				if (ch[0]=='&')
				{
					read_proc=TRUE;
					break;
				}
			}

			while ((!feof(cf))&&(read_proc))
			{
//++++++++ДИАЛОГ+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
			//ID диалога
				fscanf(cf, "%d", &read_int);
			//ID текста
				fscanf(cf, "%d", &read_int2);
			//При неполучении ответа
				fscanf(cf, "%s", &read_str2);
			//Время на ответ
				fscanf(cf, "%d", &read_int3);
			//Создаем ветку
				if (Tree->Nodes->IndexOfKey(read_int.ToString())!=-1) { lErr->Text="Диалог под таким номером уже создан"; }
				sprintf(key1,"%d",read_int2);
				GetPrivateProfileStringA("dialogs",key1,"error",ret_str,10000,file_name2);
				strcpy(dlg_str[read_int],ret_str);
				dlg=Tree->Nodes->Add(read_int.ToString(),"["+read_int.ToString()+"] "+String(ret_str).ToString());
				if (read_int==1)
					dlg->ForeColor=dlg->BackColor.BlueViolet;
				else
					dlg->ForeColor=dlg->BackColor.Blue;
			//доп. параметры
				if (String(read_str2).ToString()=="NOT_ANSWER_CLOSE_DIALOG") not_answ[read_int]=0;
				else if (String(read_str2).ToString()=="NOT_ANSWER_BEGIN_BATTLE") not_answ[read_int]=1;
				time_answ[read_int]=read_int3; //time
			//tip
				if (dlg->Name=="1")
					dlg->ToolTipText="Преддиалоговые настройки";
				else
					dlg->ToolTipText="Время:"+read_int3.ToString()+" Нет ответа:"+cbAction_no_answ->Items[not_answ[read_int]];

				fscanf(cf, "%c", &ch);

				if (ch[0]=='@') continue;
				if (ch[0]=='&') break;
//--------ДИАЛОГ-----------------------------------------------------------------------------------------
//++++++++ОТВЕТЫ+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
				if (ch[0]!='#')
				{
					read_proc=FALSE;
					break;
				}
				while (!feof(cf))
				{
				//ID линка
					fscanf(cf, "%d", &read_int);
				//ID текста
					fscanf(cf, "%d", &read_int2);
				//Создаем ответ
					sprintf(key1,"%d",read_int2);
					GetPrivateProfileStringA("dialogs",key1,"error",ret_str,10000,file_name2);
					answ=dlg->Nodes->Add(read_int.ToString(),"null");
					answ->ToolTipText=String(ret_str).ToString();
					answ->Text="[->"+answ->Name+"] "+answ->ToolTipText;
					answ->ForeColor=answ->BackColor.Green;
					
					fscanf(cf, "%c", &ch);
//--------ОТВЕТЫ-----------------------------------------------------------------------------------------
//++++++++УСЛОВИЯ+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
					if (ch[0]=='u')
					{
						usl=answ->Nodes->Add("usl","Условия");
						usl->ForeColor=usl->BackColor.Black;

						while (!feof(cf))
						{
							fscanf(cf, "%c", &ch);
							if (ch[0]!='*') break;

						//название условия
							fscanf(cf, "%s", &read_str);

							if (String(read_str).ToString()=="stat")
							{
							//case "stat":
								fscanf(cf, "%s", &read_str2); //название стата
								fscanf(cf, "%1s", &read_str3); //оператор сравнения
								fscanf(cf, "%d", &read_int); //значение

								txtTemp->Clear(); cbTemp->Items->Clear();
								txtTemp->LoadFile(path_data+"stats2.rtf");
								cbTemp->Items->AddRange(txtTemp->Lines);
								
								strcpy(read_str4,read_str2);
								if (cbTemp->FindString(String(read_str2).ToString())==-1) strcat(read_str4," - ERROR ЗНАЧЕНИЕ НЕ НАЙДЕНО !!!");
								else sprintf(read_str4,"%s",cbStat->Items[cbTemp->FindString(String(read_str2).ToString())]->ToString());

								usl_n=usl->Nodes->Add(
									"stat "+String(read_str2).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString(),
									String(read_str4).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString());
							}
							else if (String(read_str).ToString()=="skill")
							{
								fscanf(cf, "%s", &read_str2); //название скилла
								fscanf(cf, "%1s", &read_str3); //оператор сравнения
								fscanf(cf, "%d", &read_int); //значение

								txtTemp->Clear(); cbTemp->Items->Clear();
								txtTemp->LoadFile(path_data+"skills2.rtf");
								cbTemp->Items->AddRange(txtTemp->Lines);

								strcpy(read_str4,read_str2);
								if (cbTemp->FindString(String(read_str2).ToString())==-1) strcat(read_str4," - ERROR ЗНАЧЕНИЕ НЕ НАЙДЕНО !!!");
								else sprintf(read_str4,"%s",cbSkill->Items[cbTemp->FindString(String(read_str2).ToString())]->ToString());

								usl_n=usl->Nodes->Add(
									"skill "+String(read_str2).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString(),
									String(read_str4).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString());
							}
							else if (String(read_str).ToString()=="perk")
							{
								fscanf(cf, "%s", &read_str2); //название перка
								fscanf(cf, "%1s", &read_str3); //оператор сравнения
								fscanf(cf, "%d", &read_int); //значение

								txtTemp->Clear(); cbTemp->Items->Clear();
								txtTemp->LoadFile(path_data+"perks2.rtf");
								cbTemp->Items->AddRange(txtTemp->Lines);

								strcpy(read_str4,read_str2);
								if (cbTemp->FindString(String(read_str2).ToString())==-1) strcat(read_str4," - ERROR ЗНАЧЕНИЕ НЕ НАЙДЕНО !!!");
								else sprintf(read_str4,"%s",cbPerk->Items[cbTemp->FindString(String(read_str2).ToString())]->ToString());

								usl_n=usl->Nodes->Add(
									"perk "+String(read_str2).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString(),
									String(read_str4).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString());
							}
							else if (String(read_str).ToString()=="var")
							{
								fscanf(cf, "%s", &read_str2); //название переменной
								fscanf(cf, "%1s", &read_str3); //оператор сравнения
								fscanf(cf, "%d", &read_int); //значение

								usl_n=usl->Nodes->Add(
									"var "+String(read_str2).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString(),
									String(read_str2).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString());
							}
							else if (String(read_str).ToString()=="quest")
							{
								fscanf(cf, "%d", &read_int); //номер квеста
								fscanf(cf, "%1s", &read_str2); //оператор сравнения
									
								if (String(read_str2).ToString()=="0")
								{
									usl_n=usl->Nodes->Add(
										"quest "+read_int.ToString()+" 0",
										"Квеста №"+read_int.ToString()+" не должно быть в списке");
								}
								else if (String(read_str2).ToString()=="-")
								{
									usl_n=usl->Nodes->Add(
										"quest "+read_int.ToString()+" -",
										"Квест №"+read_int.ToString()+" в списке, но невыполнен");
								}
								else if (String(read_str2).ToString()=="+")
								{
									usl_n=usl->Nodes->Add(
										"quest "+read_int.ToString()+" +",
										"Квест №"+read_int.ToString()+" выполнен");
								}
							}
							else if (String(read_str).ToString()=="item")
							{
								fscanf(cf, "%d", &read_int); //номер итема
								fscanf(cf, "%1s", &read_str2); //оператор сравнения

								if (String(read_str2).ToString()=="+")
								{
									usl_n=usl->Nodes->Add(
										"item "+read_int.ToString()+" +",
										"Наличие итема №"+read_int.ToString());
								}
								else if (String(read_str2).ToString()=="-")
								{
									usl_n=usl->Nodes->Add(
										"item "+read_int.ToString()+" -",
										"Отстутствие итема №"+read_int.ToString());
								}
							}
							else
							{
								//!!!неизвестное условие
							}
							usl_n->ForeColor=usl_n->BackColor.Red;
						}
					}
//--------УСЛОВИЯ-----------------------------------------------------------------------------------------
//++++++++РЕЗУЛЬТАТ+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
					if (ch[0]=='r')
					{
						rez=answ->Nodes->Add("rez","Результат");
						rez->ForeColor=rez->BackColor.Black;

						while (!feof(cf))
						{
							fscanf(cf, "%c", &ch);
							if (ch[0]!='*') break;

						//название результата
							fscanf(cf, "%s", &read_str);

							if (String(read_str).ToString()=="stat")
								{
								fscanf(cf, "%s", &read_str2); //название стата
								fscanf(cf, "%1s", &read_str3); //оператор присваивания
								fscanf(cf, "%d", &read_int); //значение

								txtTemp->Clear(); cbTemp->Items->Clear();
								txtTemp->LoadFile(path_data+"stats2.rtf");
								cbTemp->Items->AddRange(txtTemp->Lines);

								strcpy(read_str4,read_str2);
								if (cbTemp->FindString(String(read_str2).ToString())==-1) strcat(read_str4," - ERROR ЗНАЧЕНИЕ НЕ НАЙДЕНО !!!");
								else sprintf(read_str4,"%s",cbStat->Items[cbTemp->FindString(String(read_str2).ToString())]->ToString());

								rez_n=rez->Nodes->Add(
									"stat "+String(read_str2).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString(),
									String(read_str4).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString());
							}
							else if (String(read_str).ToString()=="skill")
							{
								fscanf(cf, "%s", &read_str2); //название скилла
								fscanf(cf, "%1s", &read_str3); //оператор присваивания
								fscanf(cf, "%d", &read_int); //значение

								txtTemp->Clear(); cbTemp->Items->Clear();
								txtTemp->LoadFile(path_data+"skills2.rtf");
								cbTemp->Items->AddRange(txtTemp->Lines);

								strcpy(read_str4,read_str2);
								if (cbTemp->FindString(String(read_str2).ToString())==-1) strcat(read_str4," - ERROR ЗНАЧЕНИЕ НЕ НАЙДЕНО !!!");
								else sprintf(read_str4,"%s",cbSkill->Items[cbTemp->FindString(String(read_str2).ToString())]->ToString());

								rez_n=rez->Nodes->Add(
									"skill "+String(read_str2).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString(),
									String(read_str4).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString());
							}
							else if (String(read_str).ToString()=="perk")
							{
								fscanf(cf, "%s", &read_str2); //название перка
								fscanf(cf, "%1s", &read_str3); //оператор присваивания
								fscanf(cf, "%d", &read_int); //значение

								txtTemp->Clear(); cbTemp->Items->Clear();
								txtTemp->LoadFile(path_data+"perks2.rtf");
								cbTemp->Items->AddRange(txtTemp->Lines);

								strcpy(read_str4,read_str2);
								if (cbTemp->FindString(String(read_str2).ToString())==-1) strcat(read_str4," - ERROR ЗНАЧЕНИЕ НЕ НАЙДЕНО !!!");
								else sprintf(read_str4,"%s",cbPerk->Items[cbTemp->FindString(String(read_str2).ToString())]->ToString());

								rez_n=rez->Nodes->Add(
									"perk "+String(read_str2).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString(),
									String(read_str4).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString());
							}
							else if (String(read_str).ToString()=="var")
							{
								fscanf(cf, "%s", &read_str2); //название переменной
								fscanf(cf, "%1s", &read_str3); //оператор присваивания
								fscanf(cf, "%d", &read_int); //значение

								rez_n=rez->Nodes->Add(
									"var "+String(read_str2).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString(),
									String(read_str2).ToString()+" "+String(read_str3).ToString()+" "+read_int.ToString());
							}
							else if (String(read_str).ToString()=="quest")
							{
								fscanf(cf, "%d", &read_int); //номер квеста
								fscanf(cf, "%1s", &read_str2); //оператор присваивания
									
								if (String(read_str2).ToString()=="-")
								{
									rez_n=rez->Nodes->Add(
										"quest "+read_int.ToString()+" -",
										"Квест №"+read_int.ToString()+" пометить как невыполненный");
								}
								else if (String(read_str2).ToString()=="+")
								{
									rez_n=rez->Nodes->Add(
										"quest "+read_int.ToString()+" +",
										"Квест №"+read_int.ToString()+" пометить как выполненный");
								}
								else if (String(read_str2).ToString()=="0")
								{
									rez_n=rez->Nodes->Add(
										"quest "+read_int.ToString()+" 0",
										"Квест №"+read_int.ToString()+" удалить из списка");
								}
							}
							else if (String(read_str).ToString()=="item")
							{
								fscanf(cf, "%d", &read_int); //номер итема
								fscanf(cf, "%2s", &read_str2); //оператор присваивания

								if (String(read_str2).ToString()=="p+")
								{
									rez_n=rez->Nodes->Add(
										"item "+read_int.ToString()+" p+",
										"Добавить ИГРОКУ итем №"+read_int.ToString());
								}
								else if (String(read_str2).ToString()=="p-")
								{
									rez_n=rez->Nodes->Add(
										"item "+read_int.ToString()+" p-",
										"Удалить у ИГРОКА итем №"+read_int.ToString());
								}
								else if (String(read_str2).ToString()=="n+")
								{
									rez_n=rez->Nodes->Add(
										"item "+read_int.ToString()+" n+",
										"Добавить НПЦ итем №"+read_int.ToString());
								}
								else if (String(read_str2).ToString()=="n-")
								{
									rez_n=rez->Nodes->Add(
										"item "+read_int.ToString()+" n-",
										"Удалить у НПЦ итем №"+read_int.ToString());
								}
							}
							else if (String(read_str).ToString()=="lock")
							{
								fscanf(cf, "%d", &read_int); //время блокировки

								if (read_int==0)
								{
									rez_n=rez->Nodes->Add(
										"lock "+read_int.ToString(),
										"Блокировать ответ навсегда");
								}
								else
								{
									rez_n=rez->Nodes->Add(
										"lock "+read_int.ToString(),
										"Блокировать ответ на "+read_int.ToString()+" игровых минут");
								}
							}
							rez_n->ForeColor=rez_n->BackColor.Red;
						}
					}
//--------РЕЗУЛЬТАТ-----------------------------------------------------------------------------------------
				//проверки
					if (ch[0]=='#') continue;
					if (ch[0]=='@' || ch[0]=='&') break;

					read_proc=FALSE;
					break;
				}

				if (ch[0]=='&') break;
			}

			fclose(cf);

			if (!read_proc)
			{
				lErr->Text="Ошибка чтения";
				return;
			}
		}
private: System::Void Tree_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
		{
			if (e->KeyCode==System::Windows::Forms::Keys::Enter) EditNode();
		}
public: System::Void EditNode()
		{
			if (Tree->SelectedNode->Level==0)
			{
				if (Tree->SelectedNode->Name=="1")
				{
					lErr->Text="Этот диалог нельзя редактировать";
					return;
				}

				enD.num->Text=Tree->SelectedNode->Name;
				enD.text->Text=String(dlg_str[int(enD.num->Value)]).ToString();
				enD.cbNot_answ->SelectedIndex=not_answ[int(enD.num->Value)];
				enD.numTime_answ->Value=time_answ[int(enD.num->Value)];

				enD.ShowDialog();

				if (enD.edit==true)
				{
					if (Tree->Nodes->IndexOfKey(enD.num->Text)!=-1 && enD.num->Text!=Tree->SelectedNode->Name)
						lErr->Text="Диалог под таким номером уже создан";
					else
					{
						cli::array<System::Windows::Forms::TreeNode^>^ edit_tree;
						edit_tree=Tree->Nodes->Find(Tree->SelectedNode->Name,true);

						for (int et=0; et<edit_tree->Length; et++)
							if (edit_tree[et]->Level==1)
							{
								edit_tree[et]->Name=enD.num->Text;
								edit_tree[et]->Text="[->"+edit_tree[et]->Name+"] "+edit_tree[et]->ToolTipText;
							}

						Tree->SelectedNode->Name=enD.num->Text;
					}
					enD.num->Text=Tree->SelectedNode->Name;

					sprintf(dlg_str[int(enD.num->Value)],"%s",enD.text->Text);
					Tree->SelectedNode->Text="["+Tree->SelectedNode->Name+"] "+enD.text->Text;
					not_answ[int(enD.num->Value)]=enD.cbNot_answ->SelectedIndex;
					time_answ[int(enD.num->Value)]=int(enD.numTime_answ->Value);
					Tree->SelectedNode->ToolTipText="Время:"+enD.numTime_answ->Text+" Нет ответа:"+enD.cbNot_answ->Text;
				}
			}
			if (Tree->SelectedNode->Level==1)
			{
				enA.answer->Text=Tree->SelectedNode->ToolTipText;
				enA.link->Text=Tree->SelectedNode->Name;
				enA.ShowDialog();

				if (enA.edit==true)
				{
					Tree->SelectedNode->Name=enA.link->Text;
					Tree->SelectedNode->ToolTipText=enA.answer->Text;
					Tree->SelectedNode->Text="[->"+Tree->SelectedNode->Name+"] "+Tree->SelectedNode->ToolTipText;
				}
			}
		}
private: System::Void numOri_dude_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e)
		{
			ResetAll();

			Tree->SelectedNode=Tree->Nodes->Add("1","[1] {Преддиалоговые установки}");
			Tree->SelectedNode->ToolTipText="Преддиалоговые установки";
			Tree->SelectedNode->ForeColor=Tree->SelectedNode->BackColor.BlueViolet;
			not_answ[1]=0;
			time_answ[1]=0;
			strcpy(dlg_str[1],"{Преддиалоговые установки}");
		}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
		{
			
		}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e)
		{
			AddParam();
		}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e)
		{

		}
public: System::Void AddParam()
		{
			int fv=0;
			for (fv=0; fv<MAX_VARS ;fv++)
				if (VarName[fv][0]==0) break;

			if (fv==MAX_VARS)
			{
				lErr->Text="Лимит исчерпан";
				return;
			}

			String^ tmp1;
			String^ tmp2;
			String^ tmp3;

			tmp1=txtParamName->Text;
			tmp3=txtParamAbout->Text;

			tmp2=numParamCur->Text+"  |  "+numParamMin->Text+" ... "+numParamMax->Text;

			sprintf(VarName[fv],"%s",tmp1);
			sprintf(VarParam[fv],"%s",tmp2);
			sprintf(VarAbout[fv],"%s",tmp3);

			VarMax[fv]=int(numParamMax->Value);
			VarMin[fv]=int(numParamMin->Value);
			VarCur[fv]=int(numParamCur->Value);

			lbVars->Items->Insert(fv,String(VarName[fv]).ToString()+"  =  "+String(VarParam[fv]).ToString());

			cbVars->Items->Insert(fv,String(VarName[fv]).ToString());
		}
private: System::Void cbParamType_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
		{

		}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e)
		{
			if (lbVars->SelectedIndex==-1)
			{
				lErr->Text="Нечего удалять";	
				return;
			}
			VarName[lbVars->SelectedIndex][0]=0;
			cbVars->Items->RemoveAt(lbVars->SelectedIndex);
			lbVars->Items->RemoveAt(lbVars->SelectedIndex);			
		}
};
}

