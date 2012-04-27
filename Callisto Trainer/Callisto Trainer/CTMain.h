#include <Windows.h>
#include <tchar.h>
#include <stdio.h>
#include <stdlib.h>
#include <ShellAPI.h>
#include <math.h>
#include <sstream>
#include <string>

#using <System.dll>

#pragma comment( lib, "TabControlEx.lib" )

// Char Base
#define CharBase 0x00C68754
#define OFS_X 0x4680
#define OFS_Y 0x4684
#define OFS_TTOG 0x3B24
#define OFS_TX 0x3B2C
#define OFS_TY 0x3B30
#define OFS_ATKCT 0x3BAC
#define OFS_BRTH 0x063C
#define OFS_ATKCB 0x4790

// Mob Base
#define MobBase 0x00C687B8
#define OFS_MOBCT 0x0010
#define OFS_MO1 0x0028
#define OFS_MOD 0x0428
#define OFS_MO21 0x00FE
#define OFS_MO22 0x0014
#define OFS_MO2 0x0004
#define OFS_MO3 0x04E8
#define OFS_MO4 0x0044
#define OFS_MO5 0x0028
#define OFS_MO6 0x001C
#define OFS_MO7 0x0028
#define OFS_MOX 0x0060
#define OFS_MOY 0x0064

// GUI Base
#define GUIBase 0x00C68AC8
#define OFS_HP 0x1818
#define OFS_MP 0x181C
#define OFS_EXP 0x1758

// Alert Base
#define AlrtBase 0x00C687AC
#define OFS_HPA 0x0088
#define OFS_MPA 0x008C

// Minimap Base
#define MiniMapBase 0x00C68E40
#define OFS_NPCCT 0x0B6C
#define OFS_MAPID 0x0C84

// Item Base
#define ItemBase 0x00C6AC58
#define OFS_ITMCT 0x0014

// Portal Base
#define PortalBase 0x00C6AD54
#define OFS_PRTCT 0x0018

// Random Base
#define RandBase 0x00C64068
#define OFS_WORLD 0x205C
#define OFS_CHAN 0x2060

// Get EXP
#define lpdwStatBase 0x00C68AC8
#define StatEXPOff 0x1758


#pragma once

using namespace System;
using namespace std;
using namespace System::Threading;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Runtime::InteropServices;

namespace CallistoTrainer {

	/// <summary>
	/// Summary for CTMain
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class CTMain : public System::Windows::Forms::Form
	{
	public:
		CTMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CTMain()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 







	private: System::Windows::Forms::CheckBox^  checkUA;
	private: System::Windows::Forms::CheckBox^  checkNBreath;
	private: System::Windows::Forms::CheckBox^  checkMobkb;



	private: System::Windows::Forms::CheckBox^  checkNokbme;
	private: System::Windows::Forms::CheckBox^  checkTubi;

	private: System::Windows::Forms::CheckBox^  blinkGod;


	private: System::Windows::Forms::CheckBox^  sitHack;








	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  textX;
	private: System::Windows::Forms::Label^  textY;
	private: System::Windows::Forms::CheckBox^  checkFGM;
	private: System::Windows::Forms::CheckBox^  checkMGM;
	private: System::Windows::Forms::CheckBox^  rfVac;
	private: System::Windows::Forms::CheckBox^  lfVac;
	private: System::Windows::Forms::CheckBox^  rpVac;
	private: System::Windows::Forms::CheckBox^  lpVac;
	private: System::Windows::Forms::CheckBox^  lfMVac;



	private: System::Windows::Forms::Button^  killBT;









	private: System::Windows::Forms::Timer^  statsTimer;
	private: System::Windows::Forms::Label^  hpText;
	private: System::Windows::Forms::Label^  mpText;



	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  expText;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  itemText;

	private: System::Windows::Forms::Label^  mobText;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  atkText;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  npcText;

	private: System::Windows::Forms::Label^  portalText;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Timer^  lootTimer;
	private: System::Windows::Forms::Timer^  attackTimer;











private: System::Windows::Forms::Label^  textChannel;

private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  textMapID;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  textBreath;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  textCombo;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::CheckBox^  checkPIC;




private: System::Windows::Forms::Timer^  potTimer;





private: System::Windows::Forms::Label^  textMobY;

private: System::Windows::Forms::Label^  textmobX;

private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::CheckBox^  mapSpeed;
private: System::Windows::Forms::CheckBox^  csDark;






private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Timer^  intelliKami;





private: System::Windows::Forms::TextBox^  kamiDel;
private: System::Windows::Forms::Label^  label16;

private: System::Windows::Forms::TextBox^  forceDelay;

private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Timer^  intelliForce;


private: System::Windows::Forms::CheckBox^  checkiKam;
private: System::Windows::Forms::CheckBox^  checkiForce;
private: Dotnetrix::Controls::TabControlEX^  tabControlEX1;




private: Dotnetrix::Controls::TabPageEX^  tabPageEX1;
private: Dotnetrix::Controls::TabPageEX^  tabPageEX2;
private: Dotnetrix::Controls::TabPageEX^  tabPageEX3;
private: Dotnetrix::Controls::TabPageEX^  tabPageEX4;
private: Dotnetrix::Controls::TabPageEX^  tabPageEX5;
private: System::Windows::Forms::CheckBox^  checkpermS;
private: System::Windows::Forms::CheckBox^  checkEF;
private: Dotnetrix::Controls::TabPageEX^  tabPageEX6;
private: Dotnetrix::Controls::TabControlEX^  tabControlEX2;
private: Dotnetrix::Controls::TabPageEX^  tabPageEX7;
private: Dotnetrix::Controls::TabPageEX^  tabPageEX8;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label3;
private: Dotnetrix::Controls::TabControlEX^  tabControlEX3;
private: Dotnetrix::Controls::TabPageEX^  tabPageEX9;
private: Dotnetrix::Controls::TabPageEX^  tabPageEX10;
private: System::Windows::Forms::ComboBox^  skillCombo;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TextBox^  skillDelay;
private: System::Windows::Forms::CheckBox^  skillCheck;

private: System::Windows::Forms::ComboBox^  potMbox;
private: System::Windows::Forms::ComboBox^  potHbox;
private: System::Windows::Forms::ComboBox^  lootBox;
private: System::Windows::Forms::ComboBox^  atkCombo;
private: System::Windows::Forms::TextBox^  mpPotVal;
private: System::Windows::Forms::CheckBox^  autoPot;
private: System::Windows::Forms::TextBox^  hpPotVal;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  potHP;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::TextBox^  lootMS;
private: System::Windows::Forms::Label^  potMP;
private: System::Windows::Forms::CheckBox^  autoLoot;
private: System::Windows::Forms::TextBox^  atkMS;
private: System::Windows::Forms::CheckBox^  autoATK;
private: System::Windows::Forms::Timer^  skillTimer;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  delayJump;

private: System::Windows::Forms::CheckBox^  walkJump;

private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  delayRight;

private: System::Windows::Forms::CheckBox^  walkRight;
private: System::Windows::Forms::TextBox^  delayLeft;


private: System::Windows::Forms::CheckBox^  walkLeft;


private: System::Windows::Forms::CheckBox^  fasTcheck;
private: System::Windows::Forms::Timer^  wlTime;
private: System::Windows::Forms::Timer^  wrTime;
private: System::Windows::Forms::Timer^  jTime;
private: System::Windows::Forms::CheckBox^  mobRain;
private: System::Windows::Forms::CheckBox^  invMobs;




























	private: System::ComponentModel::IContainer^  components;









	protected: 

	protected: 


























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CTMain::typeid));
			this->checkUA = (gcnew System::Windows::Forms::CheckBox());
			this->checkNBreath = (gcnew System::Windows::Forms::CheckBox());
			this->checkMobkb = (gcnew System::Windows::Forms::CheckBox());
			this->checkNokbme = (gcnew System::Windows::Forms::CheckBox());
			this->checkTubi = (gcnew System::Windows::Forms::CheckBox());
			this->checkMGM = (gcnew System::Windows::Forms::CheckBox());
			this->checkFGM = (gcnew System::Windows::Forms::CheckBox());
			this->blinkGod = (gcnew System::Windows::Forms::CheckBox());
			this->lfMVac = (gcnew System::Windows::Forms::CheckBox());
			this->rfVac = (gcnew System::Windows::Forms::CheckBox());
			this->lfVac = (gcnew System::Windows::Forms::CheckBox());
			this->rpVac = (gcnew System::Windows::Forms::CheckBox());
			this->lpVac = (gcnew System::Windows::Forms::CheckBox());
			this->checkiForce = (gcnew System::Windows::Forms::CheckBox());
			this->checkiKam = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->forceDelay = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->kamiDel = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->csDark = (gcnew System::Windows::Forms::CheckBox());
			this->mapSpeed = (gcnew System::Windows::Forms::CheckBox());
			this->checkPIC = (gcnew System::Windows::Forms::CheckBox());
			this->sitHack = (gcnew System::Windows::Forms::CheckBox());
			this->textMobY = (gcnew System::Windows::Forms::Label());
			this->textmobX = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textCombo = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBreath = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textMapID = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textChannel = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->npcText = (gcnew System::Windows::Forms::Label());
			this->portalText = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->itemText = (gcnew System::Windows::Forms::Label());
			this->mobText = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->atkText = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->expText = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->hpText = (gcnew System::Windows::Forms::Label());
			this->mpText = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textY = (gcnew System::Windows::Forms::Label());
			this->textX = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->killBT = (gcnew System::Windows::Forms::Button());
			this->statsTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->lootTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->attackTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->potTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->intelliKami = (gcnew System::Windows::Forms::Timer(this->components));
			this->intelliForce = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControlEX1 = (gcnew Dotnetrix::Controls::TabControlEX());
			this->tabPageEX1 = (gcnew Dotnetrix::Controls::TabPageEX());
			this->fasTcheck = (gcnew System::Windows::Forms::CheckBox());
			this->tabPageEX2 = (gcnew Dotnetrix::Controls::TabPageEX());
			this->tabPageEX3 = (gcnew Dotnetrix::Controls::TabPageEX());
			this->tabControlEX2 = (gcnew Dotnetrix::Controls::TabControlEX());
			this->tabPageEX7 = (gcnew Dotnetrix::Controls::TabPageEX());
			this->tabPageEX8 = (gcnew Dotnetrix::Controls::TabPageEX());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPageEX5 = (gcnew Dotnetrix::Controls::TabPageEX());
			this->checkpermS = (gcnew System::Windows::Forms::CheckBox());
			this->checkEF = (gcnew System::Windows::Forms::CheckBox());
			this->tabPageEX4 = (gcnew Dotnetrix::Controls::TabPageEX());
			this->invMobs = (gcnew System::Windows::Forms::CheckBox());
			this->mobRain = (gcnew System::Windows::Forms::CheckBox());
			this->tabPageEX6 = (gcnew Dotnetrix::Controls::TabPageEX());
			this->tabControlEX3 = (gcnew Dotnetrix::Controls::TabControlEX());
			this->tabPageEX9 = (gcnew Dotnetrix::Controls::TabPageEX());
			this->skillCombo = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->skillDelay = (gcnew System::Windows::Forms::TextBox());
			this->skillCheck = (gcnew System::Windows::Forms::CheckBox());
			this->potMbox = (gcnew System::Windows::Forms::ComboBox());
			this->potHbox = (gcnew System::Windows::Forms::ComboBox());
			this->lootBox = (gcnew System::Windows::Forms::ComboBox());
			this->atkCombo = (gcnew System::Windows::Forms::ComboBox());
			this->mpPotVal = (gcnew System::Windows::Forms::TextBox());
			this->autoPot = (gcnew System::Windows::Forms::CheckBox());
			this->hpPotVal = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->potHP = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lootMS = (gcnew System::Windows::Forms::TextBox());
			this->potMP = (gcnew System::Windows::Forms::Label());
			this->autoLoot = (gcnew System::Windows::Forms::CheckBox());
			this->atkMS = (gcnew System::Windows::Forms::TextBox());
			this->autoATK = (gcnew System::Windows::Forms::CheckBox());
			this->tabPageEX10 = (gcnew Dotnetrix::Controls::TabPageEX());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->delayJump = (gcnew System::Windows::Forms::TextBox());
			this->walkJump = (gcnew System::Windows::Forms::CheckBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->delayRight = (gcnew System::Windows::Forms::TextBox());
			this->walkRight = (gcnew System::Windows::Forms::CheckBox());
			this->delayLeft = (gcnew System::Windows::Forms::TextBox());
			this->walkLeft = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->skillTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->wlTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->wrTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->jTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControlEX1->SuspendLayout();
			this->tabPageEX1->SuspendLayout();
			this->tabPageEX2->SuspendLayout();
			this->tabPageEX3->SuspendLayout();
			this->tabControlEX2->SuspendLayout();
			this->tabPageEX7->SuspendLayout();
			this->tabPageEX8->SuspendLayout();
			this->tabPageEX5->SuspendLayout();
			this->tabPageEX4->SuspendLayout();
			this->tabPageEX6->SuspendLayout();
			this->tabControlEX3->SuspendLayout();
			this->tabPageEX9->SuspendLayout();
			this->tabPageEX10->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkUA
			// 
			this->checkUA->AutoSize = true;
			this->checkUA->ForeColor = System::Drawing::Color::White;
			this->checkUA->Location = System::Drawing::Point(3, 95);
			this->checkUA->Name = L"checkUA";
			this->checkUA->Size = System::Drawing::Size(43, 17);
			this->checkUA->TabIndex = 4;
			this->checkUA->Text = L"UA";
			this->checkUA->UseVisualStyleBackColor = true;
			this->checkUA->CheckedChanged += gcnew System::EventHandler(this, &CTMain::checkUA_CheckedChanged);
			// 
			// checkNBreath
			// 
			this->checkNBreath->AutoSize = true;
			this->checkNBreath->ForeColor = System::Drawing::Color::White;
			this->checkNBreath->Location = System::Drawing::Point(3, 72);
			this->checkNBreath->Name = L"checkNBreath";
			this->checkNBreath->Size = System::Drawing::Size(83, 17);
			this->checkNBreath->TabIndex = 3;
			this->checkNBreath->Text = L"No Breath";
			this->checkNBreath->UseVisualStyleBackColor = true;
			this->checkNBreath->CheckedChanged += gcnew System::EventHandler(this, &CTMain::checkNBreath_CheckedChanged);
			// 
			// checkMobkb
			// 
			this->checkMobkb->AutoSize = true;
			this->checkMobkb->ForeColor = System::Drawing::Color::White;
			this->checkMobkb->Location = System::Drawing::Point(3, 49);
			this->checkMobkb->Name = L"checkMobkb";
			this->checkMobkb->Size = System::Drawing::Size(88, 17);
			this->checkMobkb->TabIndex = 2;
			this->checkMobkb->Text = L"All Mob KB";
			this->checkMobkb->UseVisualStyleBackColor = true;
			this->checkMobkb->CheckedChanged += gcnew System::EventHandler(this, &CTMain::checkMobkb_CheckedChanged);
			// 
			// checkNokbme
			// 
			this->checkNokbme->AutoSize = true;
			this->checkNokbme->ForeColor = System::Drawing::Color::White;
			this->checkNokbme->Location = System::Drawing::Point(3, 26);
			this->checkNokbme->Name = L"checkNokbme";
			this->checkNokbme->Size = System::Drawing::Size(109, 17);
			this->checkNokbme->TabIndex = 1;
			this->checkNokbme->Text = L"No KB (Player)";
			this->checkNokbme->UseVisualStyleBackColor = true;
			this->checkNokbme->CheckedChanged += gcnew System::EventHandler(this, &CTMain::checkNokbme_CheckedChanged);
			// 
			// checkTubi
			// 
			this->checkTubi->AutoSize = true;
			this->checkTubi->ForeColor = System::Drawing::Color::White;
			this->checkTubi->Location = System::Drawing::Point(3, 3);
			this->checkTubi->Name = L"checkTubi";
			this->checkTubi->Size = System::Drawing::Size(82, 17);
			this->checkTubi->TabIndex = 0;
			this->checkTubi->Text = L"Uber Tubi";
			this->checkTubi->UseVisualStyleBackColor = true;
			this->checkTubi->CheckedChanged += gcnew System::EventHandler(this, &CTMain::checkTubi_CheckedChanged);
			// 
			// checkMGM
			// 
			this->checkMGM->AutoSize = true;
			this->checkMGM->ForeColor = System::Drawing::Color::White;
			this->checkMGM->Location = System::Drawing::Point(3, 49);
			this->checkMGM->Name = L"checkMGM";
			this->checkMGM->Size = System::Drawing::Size(113, 17);
			this->checkMGM->TabIndex = 2;
			this->checkMGM->Text = L"Miss God Mode";
			this->checkMGM->UseVisualStyleBackColor = true;
			this->checkMGM->CheckedChanged += gcnew System::EventHandler(this, &CTMain::checkMGM_CheckedChanged);
			// 
			// checkFGM
			// 
			this->checkFGM->AutoSize = true;
			this->checkFGM->ForeColor = System::Drawing::Color::White;
			this->checkFGM->Location = System::Drawing::Point(3, 3);
			this->checkFGM->Name = L"checkFGM";
			this->checkFGM->Size = System::Drawing::Size(108, 17);
			this->checkFGM->TabIndex = 1;
			this->checkFGM->Text = L"Full God Mode";
			this->checkFGM->UseVisualStyleBackColor = true;
			this->checkFGM->CheckedChanged += gcnew System::EventHandler(this, &CTMain::checkFGM_CheckedChanged);
			// 
			// blinkGod
			// 
			this->blinkGod->AutoSize = true;
			this->blinkGod->ForeColor = System::Drawing::Color::White;
			this->blinkGod->Location = System::Drawing::Point(3, 26);
			this->blinkGod->Name = L"blinkGod";
			this->blinkGod->Size = System::Drawing::Size(116, 17);
			this->blinkGod->TabIndex = 0;
			this->blinkGod->Text = L"Blink God Mode";
			this->blinkGod->UseVisualStyleBackColor = true;
			this->blinkGod->CheckedChanged += gcnew System::EventHandler(this, &CTMain::blinkGod_CheckedChanged);
			// 
			// lfMVac
			// 
			this->lfMVac->AutoSize = true;
			this->lfMVac->ForeColor = System::Drawing::Color::White;
			this->lfMVac->Location = System::Drawing::Point(3, 72);
			this->lfMVac->Name = L"lfMVac";
			this->lfMVac->Size = System::Drawing::Size(175, 17);
			this->lfMVac->TabIndex = 6;
			this->lfMVac->Text = L"Left Force Vac (Mob Only)";
			this->lfMVac->UseVisualStyleBackColor = true;
			this->lfMVac->CheckedChanged += gcnew System::EventHandler(this, &CTMain::lfMVac_CheckedChanged);
			// 
			// rfVac
			// 
			this->rfVac->AutoSize = true;
			this->rfVac->ForeColor = System::Drawing::Color::White;
			this->rfVac->Location = System::Drawing::Point(3, 95);
			this->rfVac->Name = L"rfVac";
			this->rfVac->Size = System::Drawing::Size(118, 17);
			this->rfVac->TabIndex = 5;
			this->rfVac->Text = L"Right Force Vac";
			this->rfVac->UseVisualStyleBackColor = true;
			this->rfVac->CheckedChanged += gcnew System::EventHandler(this, &CTMain::rfVac_CheckedChanged);
			// 
			// lfVac
			// 
			this->lfVac->AutoSize = true;
			this->lfVac->ForeColor = System::Drawing::Color::White;
			this->lfVac->Location = System::Drawing::Point(3, 49);
			this->lfVac->Name = L"lfVac";
			this->lfVac->Size = System::Drawing::Size(110, 17);
			this->lfVac->TabIndex = 4;
			this->lfVac->Text = L"Left Force Vac";
			this->lfVac->UseVisualStyleBackColor = true;
			this->lfVac->CheckedChanged += gcnew System::EventHandler(this, &CTMain::lfVac_CheckedChanged);
			// 
			// rpVac
			// 
			this->rpVac->AutoSize = true;
			this->rpVac->ForeColor = System::Drawing::Color::White;
			this->rpVac->Location = System::Drawing::Point(3, 26);
			this->rpVac->Name = L"rpVac";
			this->rpVac->Size = System::Drawing::Size(114, 17);
			this->rpVac->TabIndex = 3;
			this->rpVac->Text = L"Right Push Vac";
			this->rpVac->UseVisualStyleBackColor = true;
			this->rpVac->CheckedChanged += gcnew System::EventHandler(this, &CTMain::rpVac_CheckedChanged);
			// 
			// lpVac
			// 
			this->lpVac->AutoSize = true;
			this->lpVac->ForeColor = System::Drawing::Color::White;
			this->lpVac->Location = System::Drawing::Point(3, 3);
			this->lpVac->Name = L"lpVac";
			this->lpVac->Size = System::Drawing::Size(106, 17);
			this->lpVac->TabIndex = 2;
			this->lpVac->Text = L"Left Push Vac";
			this->lpVac->UseVisualStyleBackColor = true;
			this->lpVac->CheckedChanged += gcnew System::EventHandler(this, &CTMain::lpVac_CheckedChanged);
			// 
			// checkiForce
			// 
			this->checkiForce->AutoSize = true;
			this->checkiForce->ForeColor = System::Drawing::Color::White;
			this->checkiForce->Location = System::Drawing::Point(326, 14);
			this->checkiForce->Name = L"checkiForce";
			this->checkiForce->Size = System::Drawing::Size(42, 17);
			this->checkiForce->TabIndex = 15;
			this->checkiForce->Text = L"On";
			this->checkiForce->UseVisualStyleBackColor = true;
			this->checkiForce->CheckedChanged += gcnew System::EventHandler(this, &CTMain::checkiForce_CheckedChanged);
			// 
			// checkiKam
			// 
			this->checkiKam->AutoSize = true;
			this->checkiKam->ForeColor = System::Drawing::Color::White;
			this->checkiKam->Location = System::Drawing::Point(326, 14);
			this->checkiKam->Name = L"checkiKam";
			this->checkiKam->Size = System::Drawing::Size(42, 17);
			this->checkiKam->TabIndex = 14;
			this->checkiKam->Text = L"On";
			this->checkiKam->UseVisualStyleBackColor = true;
			this->checkiKam->CheckedChanged += gcnew System::EventHandler(this, &CTMain::checkiKam_CheckedChanged);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->forceDelay);
			this->groupBox3->Controls->Add(this->checkiForce);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(3, 44);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(374, 36);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Force (possible a/b)";
			// 
			// forceDelay
			// 
			this->forceDelay->BackColor = System::Drawing::Color::Black;
			this->forceDelay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->forceDelay->ForeColor = System::Drawing::Color::White;
			this->forceDelay->Location = System::Drawing::Point(124, 11);
			this->forceDelay->Name = L"forceDelay";
			this->forceDelay->Size = System::Drawing::Size(118, 20);
			this->forceDelay->TabIndex = 3;
			this->forceDelay->Text = L"100";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(7, 16);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(111, 13);
			this->label17->TabIndex = 2;
			this->label17->Text = L"Enable every:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->checkiKam);
			this->groupBox2->Controls->Add(this->kamiDel);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(3, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(374, 36);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Perfect Kami";
			// 
			// kamiDel
			// 
			this->kamiDel->BackColor = System::Drawing::Color::Black;
			this->kamiDel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->kamiDel->ForeColor = System::Drawing::Color::White;
			this->kamiDel->Location = System::Drawing::Point(124, 11);
			this->kamiDel->Name = L"kamiDel";
			this->kamiDel->Size = System::Drawing::Size(118, 20);
			this->kamiDel->TabIndex = 1;
			this->kamiDel->Text = L"100";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Lucida Console", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(7, 16);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(111, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Enable every:";
			// 
			// csDark
			// 
			this->csDark->AutoSize = true;
			this->csDark->ForeColor = System::Drawing::Color::White;
			this->csDark->Location = System::Drawing::Point(3, 72);
			this->csDark->Name = L"csDark";
			this->csDark->Size = System::Drawing::Size(106, 17);
			this->csDark->TabIndex = 3;
			this->csDark->Text = L"CS Dark Sight";
			this->csDark->UseVisualStyleBackColor = true;
			this->csDark->CheckedChanged += gcnew System::EventHandler(this, &CTMain::csDark_CheckedChanged);
			// 
			// mapSpeed
			// 
			this->mapSpeed->AutoSize = true;
			this->mapSpeed->ForeColor = System::Drawing::Color::White;
			this->mapSpeed->Location = System::Drawing::Point(3, 49);
			this->mapSpeed->Name = L"mapSpeed";
			this->mapSpeed->Size = System::Drawing::Size(107, 17);
			this->mapSpeed->TabIndex = 2;
			this->mapSpeed->Text = L"Speed up map";
			this->mapSpeed->UseVisualStyleBackColor = true;
			this->mapSpeed->CheckedChanged += gcnew System::EventHandler(this, &CTMain::mapSpeed_CheckedChanged);
			// 
			// checkPIC
			// 
			this->checkPIC->AutoSize = true;
			this->checkPIC->ForeColor = System::Drawing::Color::White;
			this->checkPIC->Location = System::Drawing::Point(3, 26);
			this->checkPIC->Name = L"checkPIC";
			this->checkPIC->Size = System::Drawing::Size(81, 17);
			this->checkPIC->TabIndex = 1;
			this->checkPIC->Text = L"Show PIC";
			this->checkPIC->UseVisualStyleBackColor = true;
			this->checkPIC->CheckedChanged += gcnew System::EventHandler(this, &CTMain::checkPIC_CheckedChanged);
			// 
			// sitHack
			// 
			this->sitHack->AutoSize = true;
			this->sitHack->ForeColor = System::Drawing::Color::White;
			this->sitHack->Location = System::Drawing::Point(3, 3);
			this->sitHack->Name = L"sitHack";
			this->sitHack->Size = System::Drawing::Size(75, 17);
			this->sitHack->TabIndex = 0;
			this->sitHack->Text = L"Sit Hack";
			this->sitHack->UseVisualStyleBackColor = true;
			this->sitHack->CheckedChanged += gcnew System::EventHandler(this, &CTMain::sitHack_CheckedChanged);
			// 
			// textMobY
			// 
			this->textMobY->AutoSize = true;
			this->textMobY->BackColor = System::Drawing::Color::Transparent;
			this->textMobY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textMobY->ForeColor = System::Drawing::Color::White;
			this->textMobY->Location = System::Drawing::Point(356, 151);
			this->textMobY->Name = L"textMobY";
			this->textMobY->Size = System::Drawing::Size(16, 16);
			this->textMobY->TabIndex = 33;
			this->textMobY->Text = L"0";
			// 
			// textmobX
			// 
			this->textmobX->AutoSize = true;
			this->textmobX->BackColor = System::Drawing::Color::Transparent;
			this->textmobX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textmobX->ForeColor = System::Drawing::Color::White;
			this->textmobX->Location = System::Drawing::Point(356, 135);
			this->textmobX->Name = L"textmobX";
			this->textmobX->Size = System::Drawing::Size(16, 16);
			this->textmobX->TabIndex = 32;
			this->textmobX->Text = L"0";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(294, 151);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(56, 16);
			this->label24->TabIndex = 31;
			this->label24->Text = L"Mob Y:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Black;
			this->label25->Location = System::Drawing::Point(294, 135);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 16);
			this->label25->TabIndex = 30;
			this->label25->Text = L"Mob X:";
			// 
			// textCombo
			// 
			this->textCombo->AutoSize = true;
			this->textCombo->BackColor = System::Drawing::Color::Transparent;
			this->textCombo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textCombo->ForeColor = System::Drawing::Color::White;
			this->textCombo->Location = System::Drawing::Point(240, 168);
			this->textCombo->Name = L"textCombo";
			this->textCombo->Size = System::Drawing::Size(16, 16);
			this->textCombo->TabIndex = 29;
			this->textCombo->Text = L"0";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Black;
			this->label23->Location = System::Drawing::Point(133, 168);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(104, 16);
			this->label23->TabIndex = 28;
			this->label23->Text = L"Combo Count:";
			// 
			// textBreath
			// 
			this->textBreath->AutoSize = true;
			this->textBreath->BackColor = System::Drawing::Color::Transparent;
			this->textBreath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBreath->ForeColor = System::Drawing::Color::White;
			this->textBreath->Location = System::Drawing::Point(240, 185);
			this->textBreath->Name = L"textBreath";
			this->textBreath->Size = System::Drawing::Size(16, 16);
			this->textBreath->TabIndex = 27;
			this->textBreath->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Black;
			this->label22->Location = System::Drawing::Point(134, 185);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(57, 16);
			this->label22->TabIndex = 26;
			this->label22->Text = L"Breath:";
			// 
			// textMapID
			// 
			this->textMapID->AutoSize = true;
			this->textMapID->BackColor = System::Drawing::Color::Transparent;
			this->textMapID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textMapID->ForeColor = System::Drawing::Color::White;
			this->textMapID->Location = System::Drawing::Point(126, 226);
			this->textMapID->Name = L"textMapID";
			this->textMapID->Size = System::Drawing::Size(16, 16);
			this->textMapID->TabIndex = 25;
			this->textMapID->Text = L"0";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(24, 226);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(61, 16);
			this->label20->TabIndex = 24;
			this->label20->Text = L"Map ID:";
			// 
			// textChannel
			// 
			this->textChannel->AutoSize = true;
			this->textChannel->BackColor = System::Drawing::Color::Transparent;
			this->textChannel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textChannel->ForeColor = System::Drawing::Color::White;
			this->textChannel->Location = System::Drawing::Point(126, 209);
			this->textChannel->Name = L"textChannel";
			this->textChannel->Size = System::Drawing::Size(16, 16);
			this->textChannel->TabIndex = 23;
			this->textChannel->Text = L"0";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Black;
			this->label21->Location = System::Drawing::Point(24, 209);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(92, 16);
			this->label21->TabIndex = 22;
			this->label21->Text = L"Channel No:";
			// 
			// npcText
			// 
			this->npcText->AutoSize = true;
			this->npcText->BackColor = System::Drawing::Color::Transparent;
			this->npcText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->npcText->ForeColor = System::Drawing::Color::White;
			this->npcText->Location = System::Drawing::Point(126, 260);
			this->npcText->Name = L"npcText";
			this->npcText->Size = System::Drawing::Size(16, 16);
			this->npcText->TabIndex = 19;
			this->npcText->Text = L"0";
			// 
			// portalText
			// 
			this->portalText->AutoSize = true;
			this->portalText->BackColor = System::Drawing::Color::Transparent;
			this->portalText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->portalText->ForeColor = System::Drawing::Color::White;
			this->portalText->Location = System::Drawing::Point(126, 243);
			this->portalText->Name = L"portalText";
			this->portalText->Size = System::Drawing::Size(16, 16);
			this->portalText->TabIndex = 18;
			this->portalText->Text = L"0";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(24, 260);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(86, 16);
			this->label18->TabIndex = 17;
			this->label18->Text = L"NPC Count:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Black;
			this->label19->Location = System::Drawing::Point(24, 243);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(96, 16);
			this->label19->TabIndex = 16;
			this->label19->Text = L"Portal Count:";
			// 
			// itemText
			// 
			this->itemText->AutoSize = true;
			this->itemText->BackColor = System::Drawing::Color::Transparent;
			this->itemText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->itemText->ForeColor = System::Drawing::Color::White;
			this->itemText->Location = System::Drawing::Point(240, 134);
			this->itemText->Name = L"itemText";
			this->itemText->Size = System::Drawing::Size(16, 16);
			this->itemText->TabIndex = 15;
			this->itemText->Text = L"0";
			// 
			// mobText
			// 
			this->mobText->AutoSize = true;
			this->mobText->BackColor = System::Drawing::Color::Transparent;
			this->mobText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mobText->ForeColor = System::Drawing::Color::White;
			this->mobText->Location = System::Drawing::Point(240, 117);
			this->mobText->Name = L"mobText";
			this->mobText->Size = System::Drawing::Size(16, 16);
			this->mobText->TabIndex = 14;
			this->mobText->Text = L"0";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(134, 134);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 16);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Item Count:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(133, 117);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(85, 16);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Mob Count:";
			// 
			// atkText
			// 
			this->atkText->AutoSize = true;
			this->atkText->BackColor = System::Drawing::Color::Transparent;
			this->atkText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->atkText->ForeColor = System::Drawing::Color::White;
			this->atkText->Location = System::Drawing::Point(240, 151);
			this->atkText->Name = L"atkText";
			this->atkText->Size = System::Drawing::Size(16, 16);
			this->atkText->TabIndex = 11;
			this->atkText->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Black;
			this->label12->Location = System::Drawing::Point(134, 151);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 16);
			this->label12->TabIndex = 10;
			this->label12->Text = L"ATK Count:";
			// 
			// expText
			// 
			this->expText->AutoSize = true;
			this->expText->BackColor = System::Drawing::Color::Transparent;
			this->expText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->expText->ForeColor = System::Drawing::Color::White;
			this->expText->Location = System::Drawing::Point(74, 185);
			this->expText->Name = L"expText";
			this->expText->Size = System::Drawing::Size(16, 16);
			this->expText->TabIndex = 9;
			this->expText->Text = L"0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(24, 185);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(41, 16);
			this->label9->TabIndex = 8;
			this->label9->Text = L"EXP:";
			// 
			// hpText
			// 
			this->hpText->AutoSize = true;
			this->hpText->BackColor = System::Drawing::Color::Transparent;
			this->hpText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hpText->ForeColor = System::Drawing::Color::White;
			this->hpText->Location = System::Drawing::Point(74, 151);
			this->hpText->Name = L"hpText";
			this->hpText->Size = System::Drawing::Size(16, 16);
			this->hpText->TabIndex = 7;
			this->hpText->Text = L"0";
			// 
			// mpText
			// 
			this->mpText->AutoSize = true;
			this->mpText->BackColor = System::Drawing::Color::Transparent;
			this->mpText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mpText->ForeColor = System::Drawing::Color::White;
			this->mpText->Location = System::Drawing::Point(74, 168);
			this->mpText->Name = L"mpText";
			this->mpText->Size = System::Drawing::Size(16, 16);
			this->mpText->TabIndex = 6;
			this->mpText->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(24, 168);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 16);
			this->label10->TabIndex = 5;
			this->label10->Text = L"MP:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Black;
			this->label11->Location = System::Drawing::Point(24, 151);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(33, 16);
			this->label11->TabIndex = 4;
			this->label11->Text = L"HP:";
			// 
			// textY
			// 
			this->textY->AutoSize = true;
			this->textY->BackColor = System::Drawing::Color::Transparent;
			this->textY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textY->ForeColor = System::Drawing::Color::White;
			this->textY->Location = System::Drawing::Point(74, 134);
			this->textY->Name = L"textY";
			this->textY->Size = System::Drawing::Size(16, 16);
			this->textY->TabIndex = 3;
			this->textY->Text = L"0";
			// 
			// textX
			// 
			this->textX->AutoSize = true;
			this->textX->BackColor = System::Drawing::Color::Transparent;
			this->textX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textX->ForeColor = System::Drawing::Color::White;
			this->textX->Location = System::Drawing::Point(74, 117);
			this->textX->Name = L"textX";
			this->textX->Size = System::Drawing::Size(16, 16);
			this->textX->TabIndex = 2;
			this->textX->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(24, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 16);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Y:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(24, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"X:";
			// 
			// killBT
			// 
			this->killBT->Font = (gcnew System::Drawing::Font(L"Lucida Console", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->killBT->ForeColor = System::Drawing::Color::Black;
			this->killBT->Location = System::Drawing::Point(346, 113);
			this->killBT->Name = L"killBT";
			this->killBT->Size = System::Drawing::Size(66, 14);
			this->killBT->TabIndex = 4;
			this->killBT->Text = L"Killswitch";
			this->killBT->UseVisualStyleBackColor = true;
			this->killBT->Click += gcnew System::EventHandler(this, &CTMain::killBT_Click);
			// 
			// statsTimer
			// 
			this->statsTimer->Enabled = true;
			this->statsTimer->Tick += gcnew System::EventHandler(this, &CTMain::statsTimer_Tick);
			// 
			// lootTimer
			// 
			this->lootTimer->Interval = 1000;
			this->lootTimer->Tick += gcnew System::EventHandler(this, &CTMain::lootTimer_Tick);
			// 
			// attackTimer
			// 
			this->attackTimer->Interval = 1000;
			this->attackTimer->Tick += gcnew System::EventHandler(this, &CTMain::attackTimer_Tick);
			// 
			// potTimer
			// 
			this->potTimer->Tick += gcnew System::EventHandler(this, &CTMain::potTimer_Tick);
			// 
			// intelliKami
			// 
			this->intelliKami->Tick += gcnew System::EventHandler(this, &CTMain::intelliKami_Tick);
			// 
			// intelliForce
			// 
			this->intelliForce->Tick += gcnew System::EventHandler(this, &CTMain::intelliForce_Tick);
			// 
			// tabControlEX1
			// 
			this->tabControlEX1->Appearance = Dotnetrix::Controls::TabAppearanceEX::FlatTab;
			this->tabControlEX1->BackColor = System::Drawing::Color::Transparent;
			this->tabControlEX1->Controls->Add(this->tabPageEX1);
			this->tabControlEX1->Controls->Add(this->tabPageEX2);
			this->tabControlEX1->Controls->Add(this->tabPageEX3);
			this->tabControlEX1->Controls->Add(this->tabPageEX5);
			this->tabControlEX1->Controls->Add(this->tabPageEX4);
			this->tabControlEX1->Controls->Add(this->tabPageEX6);
			this->tabControlEX1->FlatBorderColor = System::Drawing::Color::Salmon;
			this->tabControlEX1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tabControlEX1->Location = System::Drawing::Point(20, 325);
			this->tabControlEX1->Name = L"tabControlEX1";
			this->tabControlEX1->SelectedIndex = 0;
			this->tabControlEX1->Size = System::Drawing::Size(396, 193);
			this->tabControlEX1->TabIndex = 34;
			this->tabControlEX1->UseVisualStyles = false;
			// 
			// tabPageEX1
			// 
			this->tabPageEX1->Controls->Add(this->fasTcheck);
			this->tabPageEX1->Controls->Add(this->checkUA);
			this->tabPageEX1->Controls->Add(this->checkTubi);
			this->tabPageEX1->Controls->Add(this->checkNokbme);
			this->tabPageEX1->Controls->Add(this->checkMobkb);
			this->tabPageEX1->Controls->Add(this->checkNBreath);
			this->tabPageEX1->Location = System::Drawing::Point(4, 22);
			this->tabPageEX1->Name = L"tabPageEX1";
			this->tabPageEX1->Size = System::Drawing::Size(388, 167);
			this->tabPageEX1->TabIndex = 0;
			this->tabPageEX1->Text = L"Common";
			// 
			// fasTcheck
			// 
			this->fasTcheck->AutoSize = true;
			this->fasTcheck->ForeColor = System::Drawing::Color::White;
			this->fasTcheck->Location = System::Drawing::Point(3, 118);
			this->fasTcheck->Name = L"fasTcheck";
			this->fasTcheck->Size = System::Drawing::Size(101, 17);
			this->fasTcheck->TabIndex = 5;
			this->fasTcheck->Text = L"Fast Teleport";
			this->fasTcheck->UseVisualStyleBackColor = true;
			this->fasTcheck->CheckedChanged += gcnew System::EventHandler(this, &CTMain::fasTcheck_CheckedChanged);
			// 
			// tabPageEX2
			// 
			this->tabPageEX2->Controls->Add(this->checkMGM);
			this->tabPageEX2->Controls->Add(this->blinkGod);
			this->tabPageEX2->Controls->Add(this->checkFGM);
			this->tabPageEX2->Location = System::Drawing::Point(4, 22);
			this->tabPageEX2->Name = L"tabPageEX2";
			this->tabPageEX2->Size = System::Drawing::Size(388, 167);
			this->tabPageEX2->TabIndex = 1;
			this->tabPageEX2->Text = L"Godmodes";
			// 
			// tabPageEX3
			// 
			this->tabPageEX3->Controls->Add(this->tabControlEX2);
			this->tabPageEX3->Location = System::Drawing::Point(4, 22);
			this->tabPageEX3->Name = L"tabPageEX3";
			this->tabPageEX3->Size = System::Drawing::Size(388, 167);
			this->tabPageEX3->TabIndex = 2;
			this->tabPageEX3->Text = L"Vacs";
			// 
			// tabControlEX2
			// 
			this->tabControlEX2->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControlEX2->Appearance = Dotnetrix::Controls::TabAppearanceEX::FlatTab;
			this->tabControlEX2->Controls->Add(this->tabPageEX7);
			this->tabControlEX2->Controls->Add(this->tabPageEX8);
			this->tabControlEX2->FlatBorderColor = System::Drawing::Color::HotPink;
			this->tabControlEX2->ForeColor = System::Drawing::Color::White;
			this->tabControlEX2->Location = System::Drawing::Point(0, 3);
			this->tabControlEX2->Name = L"tabControlEX2";
			this->tabControlEX2->SelectedIndex = 0;
			this->tabControlEX2->Size = System::Drawing::Size(388, 158);
			this->tabControlEX2->TabIndex = 7;
			this->tabControlEX2->UseVisualStyles = false;
			// 
			// tabPageEX7
			// 
			this->tabPageEX7->Controls->Add(this->lpVac);
			this->tabPageEX7->Controls->Add(this->rfVac);
			this->tabPageEX7->Controls->Add(this->lfMVac);
			this->tabPageEX7->Controls->Add(this->lfVac);
			this->tabPageEX7->Controls->Add(this->rpVac);
			this->tabPageEX7->Location = System::Drawing::Point(4, 4);
			this->tabPageEX7->Name = L"tabPageEX7";
			this->tabPageEX7->Size = System::Drawing::Size(380, 132);
			this->tabPageEX7->TabIndex = 0;
			this->tabPageEX7->Text = L"General";
			// 
			// tabPageEX8
			// 
			this->tabPageEX8->Controls->Add(this->label3);
			this->tabPageEX8->Controls->Add(this->groupBox2);
			this->tabPageEX8->Controls->Add(this->groupBox3);
			this->tabPageEX8->Location = System::Drawing::Point(4, 4);
			this->tabPageEX8->Name = L"tabPageEX8";
			this->tabPageEX8->Size = System::Drawing::Size(380, 132);
			this->tabPageEX8->TabIndex = 1;
			this->tabPageEX8->Text = L"IntelliVac™";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(43, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(295, 39);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Kami will never a/b!\r\nSet to intervals 10ms or less for a smooth continuous Kami " 
				L"or \r\nto once every minute or so if you want to just tele to mob.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPageEX5
			// 
			this->tabPageEX5->Controls->Add(this->checkpermS);
			this->tabPageEX5->Controls->Add(this->checkEF);
			this->tabPageEX5->Location = System::Drawing::Point(4, 22);
			this->tabPageEX5->Name = L"tabPageEX5";
			this->tabPageEX5->Size = System::Drawing::Size(388, 167);
			this->tabPageEX5->TabIndex = 3;
			this->tabPageEX5->Text = L"Skills";
			// 
			// checkpermS
			// 
			this->checkpermS->AutoSize = true;
			this->checkpermS->ForeColor = System::Drawing::Color::White;
			this->checkpermS->Location = System::Drawing::Point(3, 26);
			this->checkpermS->Name = L"checkpermS";
			this->checkpermS->Size = System::Drawing::Size(157, 17);
			this->checkpermS->TabIndex = 7;
			this->checkpermS->Text = L"Permanent Siege Mode";
			this->checkpermS->UseVisualStyleBackColor = true;
			// 
			// checkEF
			// 
			this->checkEF->AutoSize = true;
			this->checkEF->ForeColor = System::Drawing::Color::White;
			this->checkEF->Location = System::Drawing::Point(3, 3);
			this->checkEF->Name = L"checkEF";
			this->checkEF->Size = System::Drawing::Size(149, 17);
			this->checkEF->TabIndex = 6;
			this->checkEF->Text = L"Endless Flamethrower";
			this->checkEF->UseVisualStyleBackColor = true;
			// 
			// tabPageEX4
			// 
			this->tabPageEX4->Controls->Add(this->invMobs);
			this->tabPageEX4->Controls->Add(this->mobRain);
			this->tabPageEX4->Controls->Add(this->sitHack);
			this->tabPageEX4->Controls->Add(this->checkPIC);
			this->tabPageEX4->Controls->Add(this->mapSpeed);
			this->tabPageEX4->Controls->Add(this->csDark);
			this->tabPageEX4->Location = System::Drawing::Point(4, 22);
			this->tabPageEX4->Name = L"tabPageEX4";
			this->tabPageEX4->Size = System::Drawing::Size(388, 167);
			this->tabPageEX4->TabIndex = 3;
			this->tabPageEX4->Text = L"Misc";
			// 
			// invMobs
			// 
			this->invMobs->AutoSize = true;
			this->invMobs->ForeColor = System::Drawing::Color::White;
			this->invMobs->Location = System::Drawing::Point(3, 118);
			this->invMobs->Name = L"invMobs";
			this->invMobs->Size = System::Drawing::Size(107, 17);
			this->invMobs->TabIndex = 5;
			this->invMobs->Text = L"Invisible Mobs";
			this->invMobs->UseVisualStyleBackColor = true;
			this->invMobs->CheckedChanged += gcnew System::EventHandler(this, &CTMain::invMobs_CheckedChanged);
			// 
			// mobRain
			// 
			this->mobRain->AutoSize = true;
			this->mobRain->ForeColor = System::Drawing::Color::White;
			this->mobRain->Location = System::Drawing::Point(3, 95);
			this->mobRain->Name = L"mobRain";
			this->mobRain->Size = System::Drawing::Size(103, 17);
			this->mobRain->TabIndex = 4;
			this->mobRain->Text = L"Raining Mobs";
			this->mobRain->UseVisualStyleBackColor = true;
			this->mobRain->CheckedChanged += gcnew System::EventHandler(this, &CTMain::mobRain_CheckedChanged);
			// 
			// tabPageEX6
			// 
			this->tabPageEX6->Controls->Add(this->tabControlEX3);
			this->tabPageEX6->Location = System::Drawing::Point(4, 22);
			this->tabPageEX6->Name = L"tabPageEX6";
			this->tabPageEX6->Size = System::Drawing::Size(388, 167);
			this->tabPageEX6->TabIndex = 4;
			this->tabPageEX6->Text = L"Auto";
			// 
			// tabControlEX3
			// 
			this->tabControlEX3->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControlEX3->Appearance = Dotnetrix::Controls::TabAppearanceEX::FlatTab;
			this->tabControlEX3->Controls->Add(this->tabPageEX9);
			this->tabControlEX3->Controls->Add(this->tabPageEX10);
			this->tabControlEX3->FlatBorderColor = System::Drawing::Color::SteelBlue;
			this->tabControlEX3->ForeColor = System::Drawing::Color::White;
			this->tabControlEX3->Location = System::Drawing::Point(0, 3);
			this->tabControlEX3->Name = L"tabControlEX3";
			this->tabControlEX3->SelectedIndex = 0;
			this->tabControlEX3->Size = System::Drawing::Size(388, 158);
			this->tabControlEX3->TabIndex = 0;
			this->tabControlEX3->UseVisualStyles = false;
			// 
			// tabPageEX9
			// 
			this->tabPageEX9->Controls->Add(this->skillCombo);
			this->tabPageEX9->Controls->Add(this->label4);
			this->tabPageEX9->Controls->Add(this->skillDelay);
			this->tabPageEX9->Controls->Add(this->skillCheck);
			this->tabPageEX9->Controls->Add(this->potMbox);
			this->tabPageEX9->Controls->Add(this->potHbox);
			this->tabPageEX9->Controls->Add(this->lootBox);
			this->tabPageEX9->Controls->Add(this->atkCombo);
			this->tabPageEX9->Controls->Add(this->mpPotVal);
			this->tabPageEX9->Controls->Add(this->autoPot);
			this->tabPageEX9->Controls->Add(this->hpPotVal);
			this->tabPageEX9->Controls->Add(this->label8);
			this->tabPageEX9->Controls->Add(this->label13);
			this->tabPageEX9->Controls->Add(this->potHP);
			this->tabPageEX9->Controls->Add(this->label6);
			this->tabPageEX9->Controls->Add(this->label7);
			this->tabPageEX9->Controls->Add(this->lootMS);
			this->tabPageEX9->Controls->Add(this->potMP);
			this->tabPageEX9->Controls->Add(this->autoLoot);
			this->tabPageEX9->Controls->Add(this->atkMS);
			this->tabPageEX9->Controls->Add(this->autoATK);
			this->tabPageEX9->Location = System::Drawing::Point(4, 4);
			this->tabPageEX9->Name = L"tabPageEX9";
			this->tabPageEX9->Size = System::Drawing::Size(380, 132);
			this->tabPageEX9->TabIndex = 0;
			this->tabPageEX9->Text = L"Basic";
			// 
			// skillCombo
			// 
			this->skillCombo->BackColor = System::Drawing::Color::Gainsboro;
			this->skillCombo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->skillCombo->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->skillCombo->FormattingEnabled = true;
			this->skillCombo->Items->AddRange(gcnew cli::array< System::Object^  >(47) {L"Home", L"Delete", L"End", L"Page D", L"Page U", 
				L"Shift ", L"Alt", L"Ctrl ", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", L"F12", 
				L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", 
				L"V", L"W", L"X", L"Y", L"Z"});
			this->skillCombo->Location = System::Drawing::Point(316, 49);
			this->skillCombo->Name = L"skillCombo";
			this->skillCombo->Size = System::Drawing::Size(65, 19);
			this->skillCombo->TabIndex = 42;
			this->skillCombo->Text = L"Page U";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(136, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 41;
			this->label4->Text = L"Delay:";
			// 
			// skillDelay
			// 
			this->skillDelay->BackColor = System::Drawing::Color::Gainsboro;
			this->skillDelay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->skillDelay->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->skillDelay->ForeColor = System::Drawing::Color::Black;
			this->skillDelay->Location = System::Drawing::Point(185, 49);
			this->skillDelay->Name = L"skillDelay";
			this->skillDelay->Size = System::Drawing::Size(59, 18);
			this->skillDelay->TabIndex = 40;
			this->skillDelay->Text = L"100";
			// 
			// skillCheck
			// 
			this->skillCheck->AutoSize = true;
			this->skillCheck->BackColor = System::Drawing::Color::Transparent;
			this->skillCheck->ForeColor = System::Drawing::Color::White;
			this->skillCheck->Location = System::Drawing::Point(2, 50);
			this->skillCheck->Name = L"skillCheck";
			this->skillCheck->Size = System::Drawing::Size(80, 17);
			this->skillCheck->TabIndex = 39;
			this->skillCheck->Text = L"Auto Skill";
			this->skillCheck->UseVisualStyleBackColor = false;
			this->skillCheck->CheckedChanged += gcnew System::EventHandler(this, &CTMain::skillCheck_CheckedChanged);
			// 
			// potMbox
			// 
			this->potMbox->BackColor = System::Drawing::Color::Gainsboro;
			this->potMbox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->potMbox->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->potMbox->FormattingEnabled = true;
			this->potMbox->Items->AddRange(gcnew cli::array< System::Object^  >(47) {L"Home", L"Delete", L"End", L"Page D", L"Page U", 
				L"Shift ", L"Alt", L"Ctrl ", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", L"F12", 
				L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", 
				L"V", L"W", L"X", L"Y", L"Z"});
			this->potMbox->Location = System::Drawing::Point(316, 106);
			this->potMbox->Name = L"potMbox";
			this->potMbox->Size = System::Drawing::Size(65, 19);
			this->potMbox->TabIndex = 38;
			this->potMbox->Text = L"End";
			// 
			// potHbox
			// 
			this->potHbox->BackColor = System::Drawing::Color::Gainsboro;
			this->potHbox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->potHbox->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->potHbox->FormattingEnabled = true;
			this->potHbox->Items->AddRange(gcnew cli::array< System::Object^  >(47) {L"Home", L"Delete", L"End", L"Page D", L"Page U", 
				L"Shift ", L"Alt", L"Ctrl ", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", L"F12", 
				L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", 
				L"V", L"W", L"X", L"Y", L"Z"});
			this->potHbox->Location = System::Drawing::Point(316, 83);
			this->potHbox->Name = L"potHbox";
			this->potHbox->Size = System::Drawing::Size(65, 19);
			this->potHbox->TabIndex = 37;
			this->potHbox->Text = L"Home";
			// 
			// lootBox
			// 
			this->lootBox->BackColor = System::Drawing::Color::Gainsboro;
			this->lootBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lootBox->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->lootBox->FormattingEnabled = true;
			this->lootBox->Items->AddRange(gcnew cli::array< System::Object^  >(47) {L"Home", L"Delete", L"End", L"Page D", L"Page U", 
				L"Shift ", L"Alt", L"Ctrl ", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", L"F12", 
				L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", 
				L"V", L"W", L"X", L"Y", L"Z"});
			this->lootBox->Location = System::Drawing::Point(316, 26);
			this->lootBox->Name = L"lootBox";
			this->lootBox->Size = System::Drawing::Size(65, 19);
			this->lootBox->TabIndex = 36;
			this->lootBox->Text = L"Z";
			// 
			// atkCombo
			// 
			this->atkCombo->BackColor = System::Drawing::Color::Gainsboro;
			this->atkCombo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->atkCombo->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->atkCombo->FormattingEnabled = true;
			this->atkCombo->Items->AddRange(gcnew cli::array< System::Object^  >(47) {L"Home", L"Delete", L"End", L"Page D", L"Page U", 
				L"Shift ", L"Alt", L"Ctrl ", L"Space", L"F1", L"F2", L"F3", L"F4", L"F5", L"F6", L"F7", L"F8", L"F9", L"F10", L"F11", L"F12", 
				L"A", L"B", L"C", L"D", L"E", L"F", L"G", L"H", L"I", L"J", L"K", L"L", L"M", L"N", L"O", L"P", L"Q", L"R", L"S", L"T", L"U", 
				L"V", L"W", L"X", L"Y", L"Z"});
			this->atkCombo->Location = System::Drawing::Point(316, 3);
			this->atkCombo->Name = L"atkCombo";
			this->atkCombo->Size = System::Drawing::Size(65, 19);
			this->atkCombo->TabIndex = 35;
			this->atkCombo->Text = L"Ctrl";
			// 
			// mpPotVal
			// 
			this->mpPotVal->BackColor = System::Drawing::Color::Gainsboro;
			this->mpPotVal->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mpPotVal->ForeColor = System::Drawing::Color::Black;
			this->mpPotVal->Location = System::Drawing::Point(165, 107);
			this->mpPotVal->Name = L"mpPotVal";
			this->mpPotVal->Size = System::Drawing::Size(60, 18);
			this->mpPotVal->TabIndex = 31;
			this->mpPotVal->Text = L"100";
			// 
			// autoPot
			// 
			this->autoPot->AutoSize = true;
			this->autoPot->BackColor = System::Drawing::Color::Transparent;
			this->autoPot->ForeColor = System::Drawing::Color::White;
			this->autoPot->Location = System::Drawing::Point(2, 95);
			this->autoPot->Name = L"autoPot";
			this->autoPot->Size = System::Drawing::Size(75, 17);
			this->autoPot->TabIndex = 28;
			this->autoPot->Text = L"Auto Pot";
			this->autoPot->UseVisualStyleBackColor = false;
			// 
			// hpPotVal
			// 
			this->hpPotVal->BackColor = System::Drawing::Color::Gainsboro;
			this->hpPotVal->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->hpPotVal->ForeColor = System::Drawing::Color::Black;
			this->hpPotVal->Location = System::Drawing::Point(165, 83);
			this->hpPotVal->Name = L"hpPotVal";
			this->hpPotVal->Size = System::Drawing::Size(60, 18);
			this->hpPotVal->TabIndex = 29;
			this->hpPotVal->Text = L"100";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(128, 85);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 30;
			this->label8->Text = L"HP:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(128, 109);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 13);
			this->label13->TabIndex = 32;
			this->label13->Text = L"MP:";
			// 
			// potHP
			// 
			this->potHP->AutoSize = true;
			this->potHP->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->potHP->ForeColor = System::Drawing::Color::Red;
			this->potHP->Location = System::Drawing::Point(240, 86);
			this->potHP->Name = L"potHP";
			this->potHP->Size = System::Drawing::Size(12, 11);
			this->potHP->TabIndex = 33;
			this->potHP->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(136, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Delay:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(136, 6);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Delay:";
			// 
			// lootMS
			// 
			this->lootMS->BackColor = System::Drawing::Color::Gainsboro;
			this->lootMS->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lootMS->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lootMS->ForeColor = System::Drawing::Color::Black;
			this->lootMS->Location = System::Drawing::Point(185, 26);
			this->lootMS->Name = L"lootMS";
			this->lootMS->Size = System::Drawing::Size(59, 18);
			this->lootMS->TabIndex = 23;
			this->lootMS->Text = L"100";
			// 
			// potMP
			// 
			this->potMP->AutoSize = true;
			this->potMP->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8));
			this->potMP->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->potMP->Location = System::Drawing::Point(240, 110);
			this->potMP->Name = L"potMP";
			this->potMP->Size = System::Drawing::Size(12, 11);
			this->potMP->TabIndex = 34;
			this->potMP->Text = L"0";
			// 
			// autoLoot
			// 
			this->autoLoot->AutoSize = true;
			this->autoLoot->BackColor = System::Drawing::Color::Transparent;
			this->autoLoot->ForeColor = System::Drawing::Color::White;
			this->autoLoot->Location = System::Drawing::Point(2, 27);
			this->autoLoot->Name = L"autoLoot";
			this->autoLoot->Size = System::Drawing::Size(81, 17);
			this->autoLoot->TabIndex = 22;
			this->autoLoot->Text = L"Auto Loot";
			this->autoLoot->UseVisualStyleBackColor = false;
			// 
			// atkMS
			// 
			this->atkMS->BackColor = System::Drawing::Color::Gainsboro;
			this->atkMS->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->atkMS->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->atkMS->ForeColor = System::Drawing::Color::Black;
			this->atkMS->Location = System::Drawing::Point(185, 3);
			this->atkMS->Name = L"atkMS";
			this->atkMS->Size = System::Drawing::Size(59, 18);
			this->atkMS->TabIndex = 26;
			this->atkMS->Text = L"100";
			// 
			// autoATK
			// 
			this->autoATK->AutoSize = true;
			this->autoATK->BackColor = System::Drawing::Color::Transparent;
			this->autoATK->ForeColor = System::Drawing::Color::White;
			this->autoATK->Location = System::Drawing::Point(2, 4);
			this->autoATK->Name = L"autoATK";
			this->autoATK->Size = System::Drawing::Size(93, 17);
			this->autoATK->TabIndex = 25;
			this->autoATK->Text = L"Auto Attack";
			this->autoATK->UseVisualStyleBackColor = false;
			// 
			// tabPageEX10
			// 
			this->tabPageEX10->Controls->Add(this->label26);
			this->tabPageEX10->Controls->Add(this->delayJump);
			this->tabPageEX10->Controls->Add(this->walkJump);
			this->tabPageEX10->Controls->Add(this->label27);
			this->tabPageEX10->Controls->Add(this->label28);
			this->tabPageEX10->Controls->Add(this->delayRight);
			this->tabPageEX10->Controls->Add(this->walkRight);
			this->tabPageEX10->Controls->Add(this->delayLeft);
			this->tabPageEX10->Controls->Add(this->walkLeft);
			this->tabPageEX10->Enabled = false;
			this->tabPageEX10->Location = System::Drawing::Point(4, 4);
			this->tabPageEX10->Name = L"tabPageEX10";
			this->tabPageEX10->Size = System::Drawing::Size(380, 132);
			this->tabPageEX10->TabIndex = 1;
			this->tabPageEX10->Text = L"Legit";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(269, 54);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(43, 13);
			this->label26->TabIndex = 50;
			this->label26->Text = L"Delay:";
			// 
			// delayJump
			// 
			this->delayJump->BackColor = System::Drawing::Color::Gainsboro;
			this->delayJump->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->delayJump->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->delayJump->ForeColor = System::Drawing::Color::Black;
			this->delayJump->Location = System::Drawing::Point(318, 51);
			this->delayJump->Name = L"delayJump";
			this->delayJump->Size = System::Drawing::Size(59, 18);
			this->delayJump->TabIndex = 49;
			this->delayJump->Text = L"100";
			// 
			// walkJump
			// 
			this->walkJump->AutoSize = true;
			this->walkJump->BackColor = System::Drawing::Color::Transparent;
			this->walkJump->ForeColor = System::Drawing::Color::White;
			this->walkJump->Location = System::Drawing::Point(2, 52);
			this->walkJump->Name = L"walkJump";
			this->walkJump->Size = System::Drawing::Size(85, 17);
			this->walkJump->TabIndex = 48;
			this->walkJump->Text = L"Auto Jump";
			this->walkJump->UseVisualStyleBackColor = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(269, 31);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(43, 13);
			this->label27->TabIndex = 44;
			this->label27->Text = L"Delay:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->ForeColor = System::Drawing::Color::White;
			this->label28->Location = System::Drawing::Point(269, 8);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(43, 13);
			this->label28->TabIndex = 47;
			this->label28->Text = L"Delay:";
			// 
			// delayRight
			// 
			this->delayRight->BackColor = System::Drawing::Color::Gainsboro;
			this->delayRight->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->delayRight->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->delayRight->ForeColor = System::Drawing::Color::Black;
			this->delayRight->Location = System::Drawing::Point(318, 28);
			this->delayRight->Name = L"delayRight";
			this->delayRight->Size = System::Drawing::Size(59, 18);
			this->delayRight->TabIndex = 43;
			this->delayRight->Text = L"100";
			// 
			// walkRight
			// 
			this->walkRight->AutoSize = true;
			this->walkRight->BackColor = System::Drawing::Color::Transparent;
			this->walkRight->ForeColor = System::Drawing::Color::White;
			this->walkRight->Location = System::Drawing::Point(2, 29);
			this->walkRight->Name = L"walkRight";
			this->walkRight->Size = System::Drawing::Size(86, 17);
			this->walkRight->TabIndex = 42;
			this->walkRight->Text = L"Auto Right";
			this->walkRight->UseVisualStyleBackColor = false;
			// 
			// delayLeft
			// 
			this->delayLeft->BackColor = System::Drawing::Color::Gainsboro;
			this->delayLeft->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->delayLeft->Font = (gcnew System::Drawing::Font(L"Lucida Console", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->delayLeft->ForeColor = System::Drawing::Color::Black;
			this->delayLeft->Location = System::Drawing::Point(318, 5);
			this->delayLeft->Name = L"delayLeft";
			this->delayLeft->Size = System::Drawing::Size(59, 18);
			this->delayLeft->TabIndex = 46;
			this->delayLeft->Text = L"100";
			// 
			// walkLeft
			// 
			this->walkLeft->AutoSize = true;
			this->walkLeft->BackColor = System::Drawing::Color::Transparent;
			this->walkLeft->ForeColor = System::Drawing::Color::White;
			this->walkLeft->Location = System::Drawing::Point(2, 6);
			this->walkLeft->Name = L"walkLeft";
			this->walkLeft->Size = System::Drawing::Size(78, 17);
			this->walkLeft->TabIndex = 45;
			this->walkLeft->Text = L"Auto Left";
			this->walkLeft->UseVisualStyleBackColor = false;
			this->walkLeft->CheckedChanged += gcnew System::EventHandler(this, &CTMain::walkLeft_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Thistle;
			this->label1->Location = System::Drawing::Point(187, 261);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 35;
			this->label1->Text = L"by mach_kernel of:";
			// 
			// skillTimer
			// 
			this->skillTimer->Tick += gcnew System::EventHandler(this, &CTMain::skillTimer_Tick);
			// 
			// wlTime
			// 
			this->wlTime->Tick += gcnew System::EventHandler(this, &CTMain::wlTime_Tick);
			// 
			// CTMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(438, 548);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tabControlEX1);
			this->Controls->Add(this->textMobY);
			this->Controls->Add(this->killBT);
			this->Controls->Add(this->textmobX);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textCombo);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->textX);
			this->Controls->Add(this->textBreath);
			this->Controls->Add(this->textY);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textMapID);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->mpText);
			this->Controls->Add(this->textChannel);
			this->Controls->Add(this->hpText);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->npcText);
			this->Controls->Add(this->expText);
			this->Controls->Add(this->portalText);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->atkText);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->itemText);
			this->Controls->Add(this->mobText);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->HelpButton = true;
			this->MaximizeBox = false;
			this->Name = L"CTMain";
			this->Opacity = 0.92;
			this->ShowIcon = false;
			this->Text = L"Callisto Trainer for [GMS v95.3] by mach_kernel : SNS Gaming";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &CTMain::CTMain_Load);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabControlEX1->ResumeLayout(false);
			this->tabPageEX1->ResumeLayout(false);
			this->tabPageEX1->PerformLayout();
			this->tabPageEX2->ResumeLayout(false);
			this->tabPageEX2->PerformLayout();
			this->tabPageEX3->ResumeLayout(false);
			this->tabControlEX2->ResumeLayout(false);
			this->tabPageEX7->ResumeLayout(false);
			this->tabPageEX7->PerformLayout();
			this->tabPageEX8->ResumeLayout(false);
			this->tabPageEX8->PerformLayout();
			this->tabPageEX5->ResumeLayout(false);
			this->tabPageEX5->PerformLayout();
			this->tabPageEX4->ResumeLayout(false);
			this->tabPageEX4->PerformLayout();
			this->tabPageEX6->ResumeLayout(false);
			this->tabControlEX3->ResumeLayout(false);
			this->tabPageEX9->ResumeLayout(false);
			this->tabPageEX9->PerformLayout();
			this->tabPageEX10->ResumeLayout(false);
			this->tabPageEX10->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

HWND FindProcessWindow(__in DWORD dwProcessId, __in LPCTSTR lpcszClass)
{
	TCHAR szBuffer[200];
	DWORD dwTemp;

	for (HWND hWnd = GetTopWindow(NULL); hWnd != NULL; hWnd = GetNextWindow(hWnd, GW_HWNDNEXT))
	{
		if (GetClassName(hWnd, szBuffer, _countof(szBuffer)) == 0)
			continue;

		if (_tcsicmp(szBuffer, lpcszClass) != 0)
			continue;

		GetWindowThreadProcessId(hWnd, &dwTemp);

		if (dwTemp == dwProcessId)
			return hWnd;
	}

	return NULL;
}

void SendKey(HWND hWndTargetWindow, BYTE virtualKey)
{
	keybd_event(virtualKey, 0, 0, 0);
	keybd_event(virtualKey, 0, KEYEVENTF_KEYUP, 0);
}


void Memory(PVOID address, void* val, int bytes)
{
	DWORD d, ds;
	VirtualProtect(address, bytes, PAGE_EXECUTE_READWRITE, &d);
	memcpy(address, val, bytes);
	VirtualProtect(address,bytes,d,&ds);
}

unsigned long GetPointedAddress(unsigned long ulBase, int iOffset)
{
	__try { return *(unsigned long*)ulBase + iOffset; }
	__except (EXCEPTION_EXECUTE_HANDLER) { return 0; }
}

DWORD ReadPointer(CONST LPDWORD lpdwBase, CONST INT iOffset)
{
	__try { return *(LPDWORD)(*lpdwBase + iOffset); }
	__except (EXCEPTION_EXECUTE_HANDLER) { return NULL; }
}

bool WritePointer(unsigned long ulBase, int iOffset, int iValue)
{
	__try { *(int*)(*(unsigned long*)ulBase + iOffset) = iValue; return true; }
	__except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}

bool WriteValue(unsigned long ulBase, int iOffset, int iValue)
{
	__try { *(int*)(ulBase + iOffset) = iValue; return true; }
	__except (EXCEPTION_EXECUTE_HANDLER) { return false; }
}

double getEXP()
{
	__try{
		int dwRealPtr = *((int*)lpdwStatBase) + StatEXPOff;
		return *(double*)dwRealPtr;}
	__except (EXCEPTION_EXECUTE_HANDLER) {return NULL;}

}

double roundEXP(double x)
{
	double f, xi, xf;

	xf = modf(x,&xi);
	f = floor(xf*100+0.5)/100.0;
	return xi + f;
}

private: System::Void killBT_Click(System::Object^  sender, System::EventArgs^  e) {

			 System::Windows::Forms::DialogResult result;
			 result = MessageBox::Show(this, "Are you sure you want to kill MapleStory?", "You woke up the killswitch, man!", MessageBoxButtons::YesNo, MessageBoxIcon::Stop);

			 if ( result == ::DialogResult::Yes )
			 {
				 TerminateProcess(GetCurrentProcess(), 0);
			 }

		 }

private: System::Void CTMain_Load(System::Object^  sender, System::EventArgs^  e) {

			 
		 }

private: System::Void statsTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

			 // Character Constants
			 const LPDWORD CharConst = LPDWORD(CharBase);
			 int xLoc = ReadPointer(CharConst, OFS_X);
			 int yLoc = ReadPointer(CharConst, OFS_Y);
			 int atkCT = ReadPointer(CharConst, OFS_ATKCT);
			 int atkCB = ReadPointer(CharConst, OFS_ATKCB);
			 int cBrth = ReadPointer(CharConst, OFS_BRTH);

			 // GUI Constants
			 const LPDWORD GUIConst = LPDWORD(GUIBase);
			 int HP = ReadPointer(GUIConst, OFS_HP);
			 int MP = ReadPointer(GUIConst, OFS_MP);
			 double EXP = getEXP();

			 // Mob Constants
			 const LPDWORD MobConst = LPDWORD(MobBase);
			 int mobCT = ReadPointer(MobConst, OFS_MOBCT);
			 //int mobX = ReadPointer(MobConst, OFS_MOBX);
			 //int mobY = ReadPointer(MobConst, OFS_MOBY);

			 // Get Mob Struct
			 // Mob 1
			 unsigned long OriginalX = GetPointedAddress(MobBase, OFS_MO1);
			 unsigned long OX2 = GetPointedAddress(OriginalX, OFS_MO2);
			 unsigned long OX3 = GetPointedAddress(OX2, OFS_MO3);
			 unsigned long OX4 = GetPointedAddress(OX3, OFS_MO4);
			 unsigned long OX5 = GetPointedAddress(OX4, OFS_MO5);
			 unsigned long OX6 = GetPointedAddress(OX5, OFS_MO6);
			 unsigned long OX7 = GetPointedAddress(OX6, OFS_MO7);
			 int xM1F = ReadPointer(LPDWORD(OX7), OFS_MOX);
			 int yMIF = ReadPointer(LPDWORD(OX7), OFS_MOY);

			 //// Mob 2
			 //unsigned long Original2 = GetPointedAddress(MobBase, OFS_MO1);
			 //unsigned long AX21 = GetPointedAddress(Original2, OFS_MO21);
			 //unsigned long AX22 = GetPointedAddress(AX21, OFS_MO22);
			 //unsigned long AX3 = GetPointedAddress(AX22, OFS_MO3);
			 //unsigned long AX4 = GetPointedAddress(AX3, OFS_MO4);
			 //unsigned long AX5 = GetPointedAddress(AX4, OFS_MO5);
			 //unsigned long AX6 = GetPointedAddress(AX5, OFS_MO6);
			 //unsigned long AX7 = GetPointedAddress(AX6, OFS_MO7);
			 //int xM2F = ReadPointer(LPDWORD(AX7), OFS_MOX);
			 //int yM2F = ReadPointer(LPDWORD(AX7), OFS_MOY);


			 // Minimap Constants
			 const LPDWORD MapConst = LPDWORD(MiniMapBase);
			 int numNPC = ReadPointer(MapConst, OFS_NPCCT);
			 int mapID = ReadPointer(MapConst, OFS_MAPID);

			 // Item Base
			 const LPDWORD ItemConst = LPDWORD(ItemBase);
			 int itmCT = ReadPointer(ItemConst, OFS_ITMCT);

			 // Portal Base
			 const LPDWORD PortConst = LPDWORD(PortalBase);
			 int prtCT = ReadPointer(PortConst, OFS_PRTCT);

			 // Random Base
			 const LPDWORD RandConst = LPDWORD(RandBase);
			 int worldID = ReadPointer(RandConst, OFS_WORLD);
			 int noChan = ReadPointer(RandConst, OFS_CHAN) + 1;

			 //// World stuff

			 //if (worldID = 0)
			 //{
				// textWorld->Text = "Scania";
			 //}
			 //else if (worldID = 1)
			 //{
				// textWorld->Text = "Bera";
			 //}
			 //else if (worldID = 2)
			 //{
				// textWorld->Text = "Broa";
			 //}
			 //else if (worldID = 3)
			 //{
				// textWorld->Text = "Windia";
			 //}
			 //else if (worldID = 4)
			 //{
				// textWorld->Text = "Khaini";
			 //}
			 //else if (worldID = 5)
			 //{
				// textWorld->Text = "Bellocan";
			 //}
			 //else if (worldID = 11)
			 //{
				// textWorld->Text = "El Nido";
			 //}
			 //else if (worldID = 12)
			 //{
				// textWorld->Text = "Zenith";
			 //}
			 //else
			 //{
				// textWorld->Text = "n/a";
			 //}

			 // Update Fields
			 textX->Text = System::Convert::ToString(xLoc);
			 textY->Text = System::Convert::ToString(yLoc);
			 hpText->Text = System::Convert::ToString(HP);
			 mpText->Text = System::Convert::ToString(MP);
			 expText->Text = System::Convert::ToString(roundEXP(EXP)) + "%";
			 npcText->Text = System::Convert::ToString(numNPC);
			 itemText->Text = System::Convert::ToString(itmCT);
			 mobText->Text = System::Convert::ToString(mobCT);
			 portalText->Text = System::Convert::ToString(prtCT);
			 atkText->Text = System::Convert::ToString(atkCT);
			 textMapID->Text = System::Convert::ToString(mapID);
			 textBreath->Text = System::Convert::ToString(cBrth);
			 textCombo->Text = System::Convert::ToString(atkCB);
			 textChannel->Text = System::Convert::ToString(noChan);
			 textmobX->Text = System::Convert::ToString(xM1F);
			 textMobY->Text = System::Convert::ToString(yMIF);
			 //textmob2x->Text = System::Convert::ToString(xM2F);
			 //textmob2x->Text = System::Convert::ToString(yM2F);

			 // Auto pot (bahaha, pot)

			 // Set HP/MP alerts to 20!
			 WritePointer(AlrtBase, OFS_HPA, 20);
			 WritePointer(AlrtBase, OFS_MPA, 20);

			 potHP->Text = System::Convert::ToString(HP);
			 potMP->Text = System::Convert::ToString(MP);

	  }

private: System::Void blinkGod_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 	 static BYTE bgmona1[] = {0x83, 0xC7};
				 static BYTE bgmona2[] = {0xEB, 0x09};
				 static BYTE bgmoffa1[] = {0x83, 0xEF};
				 static BYTE bgmoffa2[] = {0x7E, 0x21};
				 static DWORD BgmAddy1 = 0x008FE262;
				 static DWORD BgmAddy2 = 0x008FE257;

				 if (blinkGod->CheckState == CheckState::Checked)
				 {
					 Memory((LPVOID)BgmAddy1, bgmona1, 2);
					 Memory((LPVOID)BgmAddy2, bgmona2, 2);
				 }
				 else
				 {
					 Memory((LPVOID)BgmAddy1, bgmoffa1, 2);
					 Memory((LPVOID)BgmAddy2, bgmoffa2, 2);
				 }
		 }

private: System::Void sitHack_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE siton[] = {0x75};
			 static BYTE sitoff[] = {0x74};
			 static DWORD SitAddy = 0x009084F7;

			 if (sitHack->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)SitAddy, siton, 1);
			 }
			 else
			 {
				 Memory((LPVOID)SitAddy, sitoff, 1);
			 }

		 }
private: System::Void checkTubi_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE tubinop1[] = {0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90};
			 static BYTE tubinop2[] = {0x90, 0x90, 0x90, 0x90, 0x90, 0x90};
			 static BYTE origopcode1[] = {0xC7, 0x86, 0xB8, 0x20, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00};
			 static BYTE origopcode2[] = {0x89, 0xB7, 0xB8, 0x20, 0x00, 0x00};
			 // Long NOP
			 static DWORD TubiAddy1 = 0x0052F12C;
			 static DWORD TubiAddy2 = 0x0093ED70;
			 // Short Nop
			 static DWORD TubiAddy3 = 0x009D9FFB;
			 static DWORD TubiAddy4 = 0x009F6A14;

			 if (checkTubi->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)TubiAddy1, tubinop1, 10);
				 Memory((LPVOID)TubiAddy2, tubinop1, 10);
				 Memory((LPVOID)TubiAddy3, tubinop2, 6);
				 Memory((LPVOID)TubiAddy4, tubinop2, 6);
			 }
			 else
			 {
				 Memory((LPVOID)TubiAddy1, origopcode1, 10);
				 Memory((LPVOID)TubiAddy2, origopcode1, 10);
				 Memory((LPVOID)TubiAddy3, origopcode2, 6);
				 Memory((LPVOID)TubiAddy4, origopcode2, 6);
			 }

		 }
private: System::Void checkNokbme_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE nokbmeon[] = {0x00};
			 static BYTE nokbmeoff[] = {0x01};
			 static DWORD nokbmeaddy = 0x0074901B;

			 if(checkNokbme->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)nokbmeaddy, nokbmeon, 1);
			 }
			 else
			 {
				 Memory((LPVOID)nokbmeaddy, nokbmeoff, 1);
			 }
		 }
private: System::Void checkMobkb_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE mobkbon[] = {0x75};
			 static BYTE mobkboff[] = {0x74};
			 static DWORD mobkbaddy = 0x0655722;

			 if(checkMobkb->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)mobkbaddy, mobkbon, 1);
			 }
			 else
			 {
				 Memory((LPVOID)mobkbaddy, mobkboff, 1);
			 }
		 }
private: System::Void checkNBreath_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE breathON[] = {0x7C};
			 static BYTE breathOFF[] = {0x7D};
			 static DWORD nobreathaddy = 0x0046C102;

			 if(checkNBreath->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)nobreathaddy, breathON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)nobreathaddy, breathOFF, 1);
			 }


		 }
private: System::Void checkUA_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE uaON[] = {0xEB};
			 static BYTE uaOFF[] = {0x7E};
			 static DWORD uaAddy = 0x00903510;

			 if(checkUA->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)uaAddy, uaON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)uaAddy, uaOFF, 1);
			 }
		 }

private: System::Void checkFGM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE fgmON[] = {0x0F, 0x84};
			 static BYTE fgmOFF[] = {0x0F, 0x85};
			 static DWORD fgmAddy = 0x009343FC;

			 if (checkFGM->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)fgmAddy, fgmON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)fgmAddy, fgmOFF, 2);
			 }


		 }
private: System::Void checkMGM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE mgmON[] = {0x0F, 0x85};
			 static BYTE mgmOFF[] = {0x0F, 0x84};
			 static DWORD mgmAddy = 0x00934615;

			 if (checkMGM->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)mgmAddy, mgmON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)mgmAddy, mgmOFF, 2);
			 }
		 }
private: System::Void lpVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE lpON[] = {0x00};
			 static BYTE lpOFF[] = {0x01};
			 static DWORD lpAddy = 0x00992673;

			 if(lpVac->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)lpAddy, lpON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)lpAddy, lpOFF, 1);
			 }
		 }
private: System::Void rpVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE rpON[] = {0x01};
			 static BYTE rpOFF[] = {0x00};
			 static DWORD rpAddy = 0x009926CD;

			 if(rpVac->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)rpAddy, rpON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)rpAddy, rpOFF, 1);
			 }
		 }
private: System::Void lfVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE lfON[] = {0x0F, 0x84};
			 static BYTE lfOFF[] = {0x0F, 0x85};
			 static DWORD lfAddy = 0x0099113F;

			 if (lfVac->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)lfAddy, lfON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)lfAddy, lfOFF, 2);
			 }
		 }
private: System::Void lfMVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE lfmON[] = {0x90, 0x90};
			 static BYTE lfmOFF[] = {0x7A, 0x4D};
			 static DWORD lfmAddy = 0x00992665;

			 if (lfMVac->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)lfmAddy, lfmON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)lfmAddy, lfmOFF, 2);
			 }
		 }
private: System::Void rfVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE rfON[] = {0x0C};
			 static BYTE rfOFF[] = {0x2C};
			 static DWORD rfAddy = 0x009911E7;

			 if(rfVac->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)rfAddy, rfON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)rfAddy, rfOFF, 1);
			 }
		 }


private: System::Void checkPIC_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE picON[] = {0x0F, 0x85};
			 static BYTE picOFF[] = {0x0F, 0x84};
			 static DWORD picAddy = 0x004E3FCF;

			 if (checkPIC->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)picAddy, picON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)picAddy, picOFF, 2);
			 }

	  }

private: System::Void autoLoot_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 int lootDelay = System::Convert::ToInt16(lootMS->Text);
			 lootTimer->Interval = lootDelay;

			 if (autoLoot->CheckState == CheckState::Checked)
			 {
				 lootTimer->Enabled = true;
			 }
			 else
			 {
				 lootTimer->Enabled = false;
			 }



		 }

private: System::Void lootTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

			 HWND maplehwnd = FindProcessWindow(GetCurrentProcessId(), "MaplestoryClass");

			 if(autoLoot->CheckState == CheckState::Checked)
			 {
				 if(lootBox->Text == "Home")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x24, (MapVirtualKey(0x24, 0) << 16) );
				 }
				 if(lootBox->Text == "End")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x23, (MapVirtualKey(0x23, 0) << 16) );
				 }
				 if(lootBox->Text == "Page D")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x22, (MapVirtualKey(0x22, 0) << 16) );
				 }
				 if(lootBox->Text == "Page U")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x21, (MapVirtualKey(0x21, 0) << 16) );
				 }
				 if(lootBox->Text == "Shift")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0xA1, (MapVirtualKey(0xA1, 0) << 16) );
				 }
				 if(lootBox->Text == "Alt")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x12, (MapVirtualKey(0x12, 0) << 16) );
				 }
				 if(lootBox->Text == "Ctrl")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x11, (MapVirtualKey(0x11, 0) << 16) );
				 }
				 if(lootBox->Text == "Space")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x20, (MapVirtualKey(0x20, 0) << 16) );
				 }
				 if(lootBox->Text == "F1")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x70, (MapVirtualKey(0x70, 0) << 16) );
				 }
				 if(lootBox->Text == "F2")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x71, (MapVirtualKey(0x71, 0) << 16) );
				 }
				 if(lootBox->Text == "F3")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x72, (MapVirtualKey(0x72, 0) << 16) );
				 }
				 if(lootBox->Text == "F4")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x73, (MapVirtualKey(0x73, 0) << 16) );
				 }
				 if(lootBox->Text == "F5")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x74, (MapVirtualKey(0x74, 0) << 16) );
				 }
				 if(lootBox->Text == "F6")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x75, (MapVirtualKey(0x75, 0) << 16) );
				 }
				 if(lootBox->Text == "F7")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x76, (MapVirtualKey(0x76, 0) << 16) );
				 }
				 if(lootBox->Text == "F8")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x77, (MapVirtualKey(0x77, 0) << 16) );
				 }
				 if(lootBox->Text == "F9")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x78, (MapVirtualKey(0x78, 0) << 16) );
				 }
				 if(lootBox->Text == "F10")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x79, (MapVirtualKey(0x79, 0) << 16) );
				 }
				 if(lootBox->Text == "F11")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x7A, (MapVirtualKey(0x7A, 0) << 16) );
				 }
				 if(lootBox->Text == "F12")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x7B, (MapVirtualKey(0x7B, 0) << 16) );
				 }
				 if(lootBox->Text == "A")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x41, (MapVirtualKey(0x41, 0) << 16) );
				 }
				 if(lootBox->Text == "B")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x42, (MapVirtualKey(0x42, 0) << 16) );
				 }
				 if(lootBox->Text == "C")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x43, (MapVirtualKey(0x43, 0) << 16) );
				 }
				 if(lootBox->Text == "D")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x44, (MapVirtualKey(0x44, 0) << 16) );
				 }
				 if(lootBox->Text == "E")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x45, (MapVirtualKey(0x45, 0) << 16) );
				 }
				 if(lootBox->Text == "F")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x46, (MapVirtualKey(0x46, 0) << 16) );
				 }
				 if(lootBox->Text == "G")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x47, (MapVirtualKey(0x47, 0) << 16) );
				 }
				 if(lootBox->Text == "H")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x48, (MapVirtualKey(0x48, 0) << 16) );
				 }
				 if(lootBox->Text == "I")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x49, (MapVirtualKey(0x49, 0) << 16) );
				 }
				 if(lootBox->Text == "J")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4A, (MapVirtualKey(0x4A, 0) << 16) );
				 }
				 if(lootBox->Text == "K")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4B, (MapVirtualKey(0x4B, 0) << 16) );
				 }
				 if(lootBox->Text == "L")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4C, (MapVirtualKey(0x4C, 0) << 16) );
				 }
				 if(lootBox->Text == "M")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4D, (MapVirtualKey(0x4D, 0) << 16) );
				 }
				 if(lootBox->Text == "N")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4E, (MapVirtualKey(0x4E, 0) << 16) );
				 }
				 if(lootBox->Text == "O")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4F, (MapVirtualKey(0x4F, 0) << 16) );
				 }
				 if(lootBox->Text == "P")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x50, (MapVirtualKey(0x50, 0) << 16) );
				 }
				 if(lootBox->Text == "Q")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x51, (MapVirtualKey(0x51, 0) << 16) );
				 }
				 if(lootBox->Text == "R")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x52, (MapVirtualKey(0x52, 0) << 16) );
				 }
				 if(lootBox->Text == "S")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x53, (MapVirtualKey(0x53, 0) << 16) );
				 }
				 if(lootBox->Text == "T")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x54, (MapVirtualKey(0x54, 0) << 16) );
				 }
				 if(lootBox->Text == "U")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x55, (MapVirtualKey(0x55, 0) << 16) );
				 }
				 if(lootBox->Text == "V")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x56, (MapVirtualKey(0x56, 0) << 16) );
				 }
				 if(lootBox->Text == "W")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x57, (MapVirtualKey(0x57, 0) << 16) );
				 }
				 if(lootBox->Text == "X")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x58, (MapVirtualKey(0x58, 0) << 16) );
				 }
				 if(lootBox->Text == "Y")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x59, (MapVirtualKey(0x59, 0) << 16) );
				 }
				 if(lootBox->Text == "Z")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x5A, (MapVirtualKey(0x5A, 0) << 16) );
				 }
			 }

		 }
 private: System::Void autoATK_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			  int attackDelay = System::Convert::ToInt16(atkMS->Text);
			  attackTimer->Interval = attackDelay;

			  if (autoATK->CheckState == CheckState::Checked)
			  {
				  attackTimer->Enabled = true;
			  }
			  else
			  {
				  attackTimer->Enabled = false;
			  }

		  }
private: System::Void attackTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

			 HWND maplehwnd = FindProcessWindow(GetCurrentProcessId(), "MaplestoryClass");

			 if(autoATK->CheckState == CheckState::Checked)
			 {
				 if(atkCombo->Text == "Home")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x24, (MapVirtualKey(0x24, 0) << 16) );
				 }
				 if(atkCombo->Text == "End")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x23, (MapVirtualKey(0x23, 0) << 16) );
				 }
				 if(atkCombo->Text == "Page D")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x22, (MapVirtualKey(0x22, 0) << 16) );
				 }
				 if(atkCombo->Text == "Page U")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x21, (MapVirtualKey(0x21, 0) << 16) );
				 }
				 if(atkCombo->Text == "Shift")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0xA1, (MapVirtualKey(0xA1, 0) << 16) );
				 }
				 if(atkCombo->Text == "Alt")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x12, (MapVirtualKey(0x12, 0) << 16) );
				 }
				 if(atkCombo->Text == "Ctrl")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x11, (MapVirtualKey(0x11, 0) << 16) );
				 }
				 if(atkCombo->Text == "Space")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x20, (MapVirtualKey(0x20, 0) << 16) );
				 }
				 if(atkCombo->Text == "F1")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x70, (MapVirtualKey(0x70, 0) << 16) );
				 }
				 if(atkCombo->Text == "F2")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x71, (MapVirtualKey(0x71, 0) << 16) );
				 }
				 if(atkCombo->Text == "F3")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x72, (MapVirtualKey(0x72, 0) << 16) );
				 }
				 if(atkCombo->Text == "F4")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x73, (MapVirtualKey(0x73, 0) << 16) );
				 }
				 if(atkCombo->Text == "F5")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x74, (MapVirtualKey(0x74, 0) << 16) );
				 }
				 if(atkCombo->Text == "F6")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x75, (MapVirtualKey(0x75, 0) << 16) );
				 }
				 if(atkCombo->Text == "F7")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x76, (MapVirtualKey(0x76, 0) << 16) );
				 }
				 if(atkCombo->Text == "F8")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x77, (MapVirtualKey(0x77, 0) << 16) );
				 }
				 if(atkCombo->Text == "F9")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x78, (MapVirtualKey(0x78, 0) << 16) );
				 }
				 if(atkCombo->Text == "F10")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x79, (MapVirtualKey(0x79, 0) << 16) );
				 }
				 if(atkCombo->Text == "F11")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x7A, (MapVirtualKey(0x7A, 0) << 16) );
				 }
				 if(atkCombo->Text == "F12")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x7B, (MapVirtualKey(0x7B, 0) << 16) );
				 }
				 if(atkCombo->Text == "A")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x41, (MapVirtualKey(0x41, 0) << 16) );
				 }
				 if(atkCombo->Text == "B")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x42, (MapVirtualKey(0x42, 0) << 16) );
				 }
				 if(atkCombo->Text == "C")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x43, (MapVirtualKey(0x43, 0) << 16) );
				 }
				 if(atkCombo->Text == "D")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x44, (MapVirtualKey(0x44, 0) << 16) );
				 }
				 if(atkCombo->Text == "E")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x45, (MapVirtualKey(0x45, 0) << 16) );
				 }
				 if(atkCombo->Text == "F")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x46, (MapVirtualKey(0x46, 0) << 16) );
				 }
				 if(atkCombo->Text == "G")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x47, (MapVirtualKey(0x47, 0) << 16) );
				 }
				 if(atkCombo->Text == "H")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x48, (MapVirtualKey(0x48, 0) << 16) );
				 }
				 if(atkCombo->Text == "I")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x49, (MapVirtualKey(0x49, 0) << 16) );
				 }
				 if(atkCombo->Text == "J")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4A, (MapVirtualKey(0x4A, 0) << 16) );
				 }
				 if(atkCombo->Text == "K")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4B, (MapVirtualKey(0x4B, 0) << 16) );
				 }
				 if(atkCombo->Text == "L")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4C, (MapVirtualKey(0x4C, 0) << 16) );
				 }
				 if(atkCombo->Text == "M")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4D, (MapVirtualKey(0x4D, 0) << 16) );
				 }
				 if(atkCombo->Text == "N")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4E, (MapVirtualKey(0x4E, 0) << 16) );
				 }
				 if(atkCombo->Text == "O")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4F, (MapVirtualKey(0x4F, 0) << 16) );
				 }
				 if(atkCombo->Text == "P")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x50, (MapVirtualKey(0x50, 0) << 16) );
				 }
				 if(atkCombo->Text == "Q")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x51, (MapVirtualKey(0x51, 0) << 16) );
				 }
				 if(atkCombo->Text == "R")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x52, (MapVirtualKey(0x52, 0) << 16) );
				 }
				 if(atkCombo->Text == "S")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x53, (MapVirtualKey(0x53, 0) << 16) );
				 }
				 if(atkCombo->Text == "T")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x54, (MapVirtualKey(0x54, 0) << 16) );
				 }
				 if(atkCombo->Text == "U")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x55, (MapVirtualKey(0x55, 0) << 16) );
				 }
				 if(atkCombo->Text == "V")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x56, (MapVirtualKey(0x56, 0) << 16) );
				 }
				 if(atkCombo->Text == "W")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x57, (MapVirtualKey(0x57, 0) << 16) );
				 }
				 if(atkCombo->Text == "X")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x58, (MapVirtualKey(0x58, 0) << 16) );
				 }
				 if(atkCombo->Text == "Y")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x59, (MapVirtualKey(0x59, 0) << 16) );
				 }
				 if(atkCombo->Text == "Z")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x5A, (MapVirtualKey(0x5A, 0) << 16) );
				 }


			 }

		 }

private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 ShellExecute(NULL, "open", "http://snsgaming.com",
				 NULL, NULL, SW_SHOWNORMAL);
		 }
private: System::Void checkMoon_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE moonON[] = {0x74};
			 static BYTE moonOFF[] = {0x75};
			 static DWORD moonAddy = 0x0099102D;

			 if (checkPIC->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)moonAddy, moonON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)moonAddy, moonOFF, 1);
			 }
		 }
private: System::Void checkFloor_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE fallON[] = {0x00};
			 static BYTE fallOFF[] = {0x02};
			 static DWORD fallAddy = 0x009948DB;

			 if (checkPIC->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)fallAddy, fallON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)fallAddy, fallOFF, 1);
			 }
		 }
private: System::Void autoPot_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 if (autoPot->CheckState == CheckState::Checked)
			 {
				 if (hpPotVal->Text == "" && mpPotVal->Text == "")
				 {
					 MessageBox::Show(this, "You can't leave these blank, nor can you use any letters or you'll get a nasty exception later on. (How'd you think time was measured in letters, anyway?)", "Values?", MessageBoxButtons::OK, MessageBoxIcon::Stop);
					 autoPot->CheckState = CheckState::Unchecked;
				 }
				 else
				 {
					 potTimer->Enabled = true;
				 }

			 }
			 else
			 {
				 potTimer->Enabled = false;
			 }

		 }
private: System::Void potTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

			 HWND maplehwnd = FindProcessWindow(GetCurrentProcessId(), "MaplestoryClass");

			 const LPDWORD GUIConst = LPDWORD(GUIBase);
			 int HP = ReadPointer(GUIConst, OFS_HP);
			 int MP = ReadPointer(GUIConst, OFS_MP);
			 int hpVal = System::Convert::ToInt32(hpPotVal->Text);
			 int mpVal = System::Convert::ToInt32(mpPotVal->Text);


			 

			 if (autoPot->CheckState == CheckState::Checked)
			 {
				 if (hpVal > HP)
				 {
					 if(potHbox->Text == "Home")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x24, (MapVirtualKey(0x24, 0) << 16) );
					 }
					 if(potHbox->Text == "End")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x23, (MapVirtualKey(0x23, 0) << 16) );
					 }
					 if(potHbox->Text == "Page D")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x22, (MapVirtualKey(0x22, 0) << 16) );
					 }
					 if(potHbox->Text == "Page U")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x21, (MapVirtualKey(0x21, 0) << 16) );
					 }
					 if(potHbox->Text == "Shift")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0xA1, (MapVirtualKey(0xA1, 0) << 16) );
					 }
					 if(potHbox->Text == "Alt")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x12, (MapVirtualKey(0x12, 0) << 16) );
					 }
					 if(potHbox->Text == "Ctrl")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x11, (MapVirtualKey(0x11, 0) << 16) );
					 }
					 if(potHbox->Text == "Space")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x20, (MapVirtualKey(0x20, 0) << 16) );
					 }
					 if(potHbox->Text == "F1")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x70, (MapVirtualKey(0x70, 0) << 16) );
					 }
					 if(potHbox->Text == "F2")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x71, (MapVirtualKey(0x71, 0) << 16) );
					 }
					 if(potHbox->Text == "F3")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x72, (MapVirtualKey(0x72, 0) << 16) );
					 }
					 if(potHbox->Text == "F4")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x73, (MapVirtualKey(0x73, 0) << 16) );
					 }
					 if(potHbox->Text == "F5")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x74, (MapVirtualKey(0x74, 0) << 16) );
					 }
					 if(potHbox->Text == "F6")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x75, (MapVirtualKey(0x75, 0) << 16) );
					 }
					 if(potHbox->Text == "F7")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x76, (MapVirtualKey(0x76, 0) << 16) );
					 }
					 if(potHbox->Text == "F8")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x77, (MapVirtualKey(0x77, 0) << 16) );
					 }
					 if(potHbox->Text == "F9")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x78, (MapVirtualKey(0x78, 0) << 16) );
					 }
					 if(potHbox->Text == "F10")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x79, (MapVirtualKey(0x79, 0) << 16) );
					 }
					 if(potHbox->Text == "F11")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x7A, (MapVirtualKey(0x7A, 0) << 16) );
					 }
					 if(potHbox->Text == "F12")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x7B, (MapVirtualKey(0x7B, 0) << 16) );
					 }
					 if(potHbox->Text == "A")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x41, (MapVirtualKey(0x41, 0) << 16) );
					 }
					 if(potHbox->Text == "B")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x42, (MapVirtualKey(0x42, 0) << 16) );
					 }
					 if(potHbox->Text == "C")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x43, (MapVirtualKey(0x43, 0) << 16) );
					 }
					 if(potHbox->Text == "D")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x44, (MapVirtualKey(0x44, 0) << 16) );
					 }
					 if(potHbox->Text == "E")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x45, (MapVirtualKey(0x45, 0) << 16) );
					 }
					 if(potHbox->Text == "F")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x46, (MapVirtualKey(0x46, 0) << 16) );
					 }
					 if(potHbox->Text == "G")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x47, (MapVirtualKey(0x47, 0) << 16) );
					 }
					 if(potHbox->Text == "H")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x48, (MapVirtualKey(0x48, 0) << 16) );
					 }
					 if(potHbox->Text == "I")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x49, (MapVirtualKey(0x49, 0) << 16) );
					 }
					 if(potHbox->Text == "J")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4A, (MapVirtualKey(0x4A, 0) << 16) );
					 }
					 if(potHbox->Text == "K")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4B, (MapVirtualKey(0x4B, 0) << 16) );
					 }
					 if(potHbox->Text == "L")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4C, (MapVirtualKey(0x4C, 0) << 16) );
					 }
					 if(potHbox->Text == "M")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4D, (MapVirtualKey(0x4D, 0) << 16) );
					 }
					 if(potHbox->Text == "N")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4E, (MapVirtualKey(0x4E, 0) << 16) );
					 }
					 if(potHbox->Text == "O")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4F, (MapVirtualKey(0x4F, 0) << 16) );
					 }
					 if(potHbox->Text == "P")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x50, (MapVirtualKey(0x50, 0) << 16) );
					 }
					 if(potHbox->Text == "Q")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x51, (MapVirtualKey(0x51, 0) << 16) );
					 }
					 if(potHbox->Text == "R")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x52, (MapVirtualKey(0x52, 0) << 16) );
					 }
					 if(potHbox->Text == "S")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x53, (MapVirtualKey(0x53, 0) << 16) );
					 }
					 if(potHbox->Text == "T")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x54, (MapVirtualKey(0x54, 0) << 16) );
					 }
					 if(potHbox->Text == "U")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x55, (MapVirtualKey(0x55, 0) << 16) );
					 }
					 if(potHbox->Text == "V")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x56, (MapVirtualKey(0x56, 0) << 16) );
					 }
					 if(potHbox->Text == "W")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x57, (MapVirtualKey(0x57, 0) << 16) );
					 }
					 if(potHbox->Text == "X")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x58, (MapVirtualKey(0x58, 0) << 16) );
					 }
					 if(potHbox->Text == "Y")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x59, (MapVirtualKey(0x59, 0) << 16) );
					 }
					 if(potHbox->Text == "Z")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x5A, (MapVirtualKey(0x5A, 0) << 16) );
					 }
					 
				 }
				 else if (mpVal > MP)
				 {
					 if(potMbox->Text == "Home")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x24, (MapVirtualKey(0x24, 0) << 16) );
					 }
					 if(potMbox->Text == "End")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x23, (MapVirtualKey(0x23, 0) << 16) );
					 }
					 if(potMbox->Text == "Page D")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x22, (MapVirtualKey(0x22, 0) << 16) );
					 }
					 if(potMbox->Text == "Page U")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x21, (MapVirtualKey(0x21, 0) << 16) );
					 }
					 if(potMbox->Text == "Shift")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0xA1, (MapVirtualKey(0xA1, 0) << 16) );
					 }
					 if(potMbox->Text == "Alt")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x12, (MapVirtualKey(0x12, 0) << 16) );
					 }
					 if(potMbox->Text == "Ctrl")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x11, (MapVirtualKey(0x11, 0) << 16) );
					 }
					 if(potMbox->Text == "Space")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x20, (MapVirtualKey(0x20, 0) << 16) );
					 }
					 if(potMbox->Text == "F1")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x70, (MapVirtualKey(0x70, 0) << 16) );
					 }
					 if(potMbox->Text == "F2")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x71, (MapVirtualKey(0x71, 0) << 16) );
					 }
					 if(potMbox->Text == "F3")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x72, (MapVirtualKey(0x72, 0) << 16) );
					 }
					 if(potMbox->Text == "F4")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x73, (MapVirtualKey(0x73, 0) << 16) );
					 }
					 if(potMbox->Text == "F5")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x74, (MapVirtualKey(0x74, 0) << 16) );
					 }
					 if(potMbox->Text == "F6")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x75, (MapVirtualKey(0x75, 0) << 16) );
					 }
					 if(potMbox->Text == "F7")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x76, (MapVirtualKey(0x76, 0) << 16) );
					 }
					 if(potMbox->Text == "F8")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x77, (MapVirtualKey(0x77, 0) << 16) );
					 }
					 if(potMbox->Text == "F9")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x78, (MapVirtualKey(0x78, 0) << 16) );
					 }
					 if(potMbox->Text == "F10")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x79, (MapVirtualKey(0x79, 0) << 16) );
					 }
					 if(potMbox->Text == "F11")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x7A, (MapVirtualKey(0x7A, 0) << 16) );
					 }
					 if(potMbox->Text == "F12")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x7B, (MapVirtualKey(0x7B, 0) << 16) );
					 }
					 if(potMbox->Text == "A")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x41, (MapVirtualKey(0x41, 0) << 16) );
					 }
					 if(potMbox->Text == "B")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x42, (MapVirtualKey(0x42, 0) << 16) );
					 }
					 if(potMbox->Text == "C")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x43, (MapVirtualKey(0x43, 0) << 16) );
					 }
					 if(potMbox->Text == "D")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x44, (MapVirtualKey(0x44, 0) << 16) );
					 }
					 if(potMbox->Text == "E")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x45, (MapVirtualKey(0x45, 0) << 16) );
					 }
					 if(potMbox->Text == "F")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x46, (MapVirtualKey(0x46, 0) << 16) );
					 }
					 if(potMbox->Text == "G")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x47, (MapVirtualKey(0x47, 0) << 16) );
					 }
					 if(potMbox->Text == "H")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x48, (MapVirtualKey(0x48, 0) << 16) );
					 }
					 if(potMbox->Text == "I")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x49, (MapVirtualKey(0x49, 0) << 16) );
					 }
					 if(potMbox->Text == "J")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4A, (MapVirtualKey(0x4A, 0) << 16) );
					 }
					 if(potMbox->Text == "K")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4B, (MapVirtualKey(0x4B, 0) << 16) );
					 }
					 if(potMbox->Text == "L")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4C, (MapVirtualKey(0x4C, 0) << 16) );
					 }
					 if(potMbox->Text == "M")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4D, (MapVirtualKey(0x4D, 0) << 16) );
					 }
					 if(potMbox->Text == "N")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4E, (MapVirtualKey(0x4E, 0) << 16) );
					 }
					 if(potMbox->Text == "O")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x4F, (MapVirtualKey(0x4F, 0) << 16) );
					 }
					 if(potMbox->Text == "P")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x50, (MapVirtualKey(0x50, 0) << 16) );
					 }
					 if(potMbox->Text == "Q")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x51, (MapVirtualKey(0x51, 0) << 16) );
					 }
					 if(potMbox->Text == "R")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x52, (MapVirtualKey(0x52, 0) << 16) );
					 }
					 if(potMbox->Text == "S")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x53, (MapVirtualKey(0x53, 0) << 16) );
					 }
					 if(potMbox->Text == "T")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x54, (MapVirtualKey(0x54, 0) << 16) );
					 }
					 if(potMbox->Text == "U")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x55, (MapVirtualKey(0x55, 0) << 16) );
					 }
					 if(potMbox->Text == "V")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x56, (MapVirtualKey(0x56, 0) << 16) );
					 }
					 if(potMbox->Text == "W")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x57, (MapVirtualKey(0x57, 0) << 16) );
					 }
					 if(potMbox->Text == "X")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x58, (MapVirtualKey(0x58, 0) << 16) );
					 }
					 if(potMbox->Text == "Y")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x59, (MapVirtualKey(0x59, 0) << 16) );
					 }
					 if(potMbox->Text == "Z")
					 {
						 PostMessage(maplehwnd, WM_KEYDOWN, 0x5A, (MapVirtualKey(0x5A, 0) << 16) );
					 }
				 }
			 }
		 }
private: System::Void mapSpeed_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE fastON[] = {0x58};
			 static BYTE fastOFF[] = {0x08};
			 static DWORD fastAddy = 0x00992E8D;

			 if(mapSpeed->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)fastAddy, fastON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)fastAddy, fastOFF, 1);
			 }
		 }
private: System::Void csDark_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE darkON[] = {0x74};
			 static BYTE darkOFF[] = {0x75};
			 static DWORD darkAddy = 0x008FE2FA;

			 if(csDark->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)darkAddy, darkON, 1);
			 }
			 else
			 {
				 Memory((LPVOID)darkAddy, darkOFF, 1);
			 }
		 }
private: System::Void checkpermS_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE permsON[] = {0xBA, 0x84, 0x13, 0x00, 0x00, 0x90};
			 static BYTE permsOFF[] = {0x2B, 0x96, 0xE8, 0x3A, 0x00, 0x00};
			 static DWORD permsAddy = 0x0093D584;

			 if(checkEF->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)permsAddy, permsON, 6);
			 }
			 else
			 {
				 Memory((LPVOID)permsAddy, permsOFF, 4);
			 }

	  }
private: System::Void checkEF_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 
				 static BYTE flameON[] = {0x89, 0x86, 0xD8};
				 static BYTE flameOFF[] = {0x89, 0x86, 0xDC};
				 static DWORD flameAddy = 0x00944491;

				 if(checkEF->CheckState == CheckState::Checked)
				 {
					 Memory((LPVOID)flameAddy, flameON, 3);
				 }
				 else
				 {
					 Memory((LPVOID)flameAddy, flameOFF, 3);
				 }
		 }

private: System::Void checkiKam_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE teleOFF[] = {0x0F, 0x84};
			 static BYTE teleON[] = {0x0F, 0x85};
			 static DWORD teleAddy = 0x00932BD6;

			 if (checkiKam->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)teleAddy, teleON, 2);
				 intelliKami->Interval = System::Convert::ToInt16(kamiDel->Text);
				 intelliKami->Enabled = true;
			 }
			 else
			 {
				 Memory((LPVOID)teleAddy, teleOFF, 2);
			 }
		 }

private: System::Void intelliKami_Tick(System::Object^  sender, System::EventArgs^  e) {

			 if (checkiKam->CheckState == CheckState::Checked)
			 {
				 unsigned long OriginalX = GetPointedAddress(MobBase, OFS_MO1);
				 unsigned long OX2 = GetPointedAddress(OriginalX, OFS_MO2);
				 unsigned long OX3 = GetPointedAddress(OX2, OFS_MO3);
				 unsigned long OX4 = GetPointedAddress(OX3, OFS_MO4);
				 unsigned long OX5 = GetPointedAddress(OX4, OFS_MO5);
				 unsigned long OX6 = GetPointedAddress(OX5, OFS_MO6);
				 unsigned long OX7 = GetPointedAddress(OX6, OFS_MO7);
				 int xM1F = ReadPointer(LPDWORD(OX7), OFS_MOX);
				 int yMIF = ReadPointer(LPDWORD(OX7), OFS_MOY);

				 //WritePointer(CharBase, OFS_TTOG, 1); // THIS IS NOT NEEDED, I NULL THE JE WITH A JNE
				 WritePointer(CharBase, OFS_TX, xM1F);
				 WritePointer(CharBase, OFS_TY, yMIF);

				 // Dunno what the fuck I was thinking here =S
				 //WritePointer(CharBase, OFS_X, xM1F);
				 //WritePointer(CharBase, OFS_X, yMIF);
			 }

		 }
private: System::Void checkiForce_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE lfON[] = {0x0F, 0x84};
			 static BYTE lfOFF[] = {0x0F, 0x85};
			 static DWORD lfAddy = 0x0099113F;

			 if (checkiForce->CheckState == CheckState::Checked)
			 {
				 intelliKami->Interval = System::Convert::ToInt16(forceDelay->Text);
				 intelliKami->Enabled = true;
			 }
			 else
			 {
				 Memory((LPVOID)lfAddy, lfOFF, 2);
				 intelliForce->Enabled = false;
			 }
		 }

private: System::Void intelliForce_Tick(System::Object^  sender, System::EventArgs^  e) {

			 if (checkiForce->CheckState == CheckState::Checked)
			 {
				 static BYTE lfON[] = {0x0F, 0x84};
				 static BYTE lfOFF[] = {0x0F, 0x85};
				 static DWORD lfAddy = 0x0099113F;

				 if (checkiForce->CheckState == CheckState::Checked)
				 {
					 Memory((LPVOID)lfAddy, lfON, 2);
				 }
			 }

		 }
private: System::Void skillCheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 int skillDel = System::Convert::ToInt16(skillDelay->Text);
			 skillTimer->Interval = skillDel;

			 if (skillCheck->CheckState == CheckState::Checked)
			 {
				 skillTimer->Enabled = true;
			 }
			 else
			 {
				 skillTimer->Enabled = false;
			 }

		 }

private: System::Void skillTimer_Tick(System::Object^  sender, System::EventArgs^  e) {

			 HWND maplehwnd = FindProcessWindow(GetCurrentProcessId(), "MaplestoryClass");

			 if(skillCheck->CheckState == CheckState::Checked)
			 {
				 if(skillCombo->Text == "Home")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x24, (MapVirtualKey(0x24, 0) << 16) );
				 }
				 if(skillCombo->Text == "End")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x23, (MapVirtualKey(0x23, 0) << 16) );
				 }
				 if(skillCombo->Text == "Page D")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x22, (MapVirtualKey(0x22, 0) << 16) );
				 }
				 if(skillCombo->Text == "Page U")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x21, (MapVirtualKey(0x21, 0) << 16) );
				 }
				 if(skillCombo->Text == "Shift")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0xA1, (MapVirtualKey(0xA1, 0) << 16) );
				 }
				 if(skillCombo->Text == "Alt")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x12, (MapVirtualKey(0x12, 0) << 16) );
				 }
				 if(skillCombo->Text == "Ctrl")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x11, (MapVirtualKey(0x11, 0) << 16) );
				 }
				 if(skillCombo->Text == "Space")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x20, (MapVirtualKey(0x20, 0) << 16) );
				 }
				 if(skillCombo->Text == "F1")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x70, (MapVirtualKey(0x70, 0) << 16) );
				 }
				 if(skillCombo->Text == "F2")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x71, (MapVirtualKey(0x71, 0) << 16) );
				 }
				 if(skillCombo->Text == "F3")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x72, (MapVirtualKey(0x72, 0) << 16) );
				 }
				 if(skillCombo->Text == "F4")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x73, (MapVirtualKey(0x73, 0) << 16) );
				 }
				 if(skillCombo->Text == "F5")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x74, (MapVirtualKey(0x74, 0) << 16) );
				 }
				 if(skillCombo->Text == "F6")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x75, (MapVirtualKey(0x75, 0) << 16) );
				 }
				 if(skillCombo->Text == "F7")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x76, (MapVirtualKey(0x76, 0) << 16) );
				 }
				 if(skillCombo->Text == "F8")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x77, (MapVirtualKey(0x77, 0) << 16) );
				 }
				 if(skillCombo->Text == "F9")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x78, (MapVirtualKey(0x78, 0) << 16) );
				 }
				 if(skillCombo->Text == "F10")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x79, (MapVirtualKey(0x79, 0) << 16) );
				 }
				 if(skillCombo->Text == "F11")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x7A, (MapVirtualKey(0x7A, 0) << 16) );
				 }
				 if(skillCombo->Text == "F12")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x7B, (MapVirtualKey(0x7B, 0) << 16) );
				 }
				 if(skillCombo->Text == "A")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x41, (MapVirtualKey(0x41, 0) << 16) );
				 }
				 if(skillCombo->Text == "B")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x42, (MapVirtualKey(0x42, 0) << 16) );
				 }
				 if(skillCombo->Text == "C")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x43, (MapVirtualKey(0x43, 0) << 16) );
				 }
				 if(skillCombo->Text == "D")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x44, (MapVirtualKey(0x44, 0) << 16) );
				 }
				 if(skillCombo->Text == "E")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x45, (MapVirtualKey(0x45, 0) << 16) );
				 }
				 if(skillCombo->Text == "F")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x46, (MapVirtualKey(0x46, 0) << 16) );
				 }
				 if(skillCombo->Text == "G")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x47, (MapVirtualKey(0x47, 0) << 16) );
				 }
				 if(skillCombo->Text == "H")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x48, (MapVirtualKey(0x48, 0) << 16) );
				 }
				 if(skillCombo->Text == "I")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x49, (MapVirtualKey(0x49, 0) << 16) );
				 }
				 if(skillCombo->Text == "J")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4A, (MapVirtualKey(0x4A, 0) << 16) );
				 }
				 if(skillCombo->Text == "K")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4B, (MapVirtualKey(0x4B, 0) << 16) );
				 }
				 if(skillCombo->Text == "L")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4C, (MapVirtualKey(0x4C, 0) << 16) );
				 }
				 if(skillCombo->Text == "M")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4D, (MapVirtualKey(0x4D, 0) << 16) );
				 }
				 if(skillCombo->Text == "N")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4E, (MapVirtualKey(0x4E, 0) << 16) );
				 }
				 if(skillCombo->Text == "O")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x4F, (MapVirtualKey(0x4F, 0) << 16) );
				 }
				 if(skillCombo->Text == "P")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x50, (MapVirtualKey(0x50, 0) << 16) );
				 }
				 if(skillCombo->Text == "Q")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x51, (MapVirtualKey(0x51, 0) << 16) );
				 }
				 if(skillCombo->Text == "R")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x52, (MapVirtualKey(0x52, 0) << 16) );
				 }
				 if(skillCombo->Text == "S")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x53, (MapVirtualKey(0x53, 0) << 16) );
				 }
				 if(skillCombo->Text == "T")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x54, (MapVirtualKey(0x54, 0) << 16) );
				 }
				 if(skillCombo->Text == "U")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x55, (MapVirtualKey(0x55, 0) << 16) );
				 }
				 if(skillCombo->Text == "V")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x56, (MapVirtualKey(0x56, 0) << 16) );
				 }
				 if(skillCombo->Text == "W")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x57, (MapVirtualKey(0x57, 0) << 16) );
				 }
				 if(skillCombo->Text == "X")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x58, (MapVirtualKey(0x58, 0) << 16) );
				 }
				 if(skillCombo->Text == "Y")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x59, (MapVirtualKey(0x59, 0) << 16) );
				 }
				 if(skillCombo->Text == "Z")
				 {
					 PostMessage(maplehwnd, WM_KEYDOWN, 0x5A, (MapVirtualKey(0x5A, 0) << 16) );
				 }


			 }

		 }
private: System::Void fasTcheck_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE ftON[] = {0x90, 0x90, 0x90, 0x90, 0x90};
			 static BYTE ftOFF[] = {0x05, 0x58, 0x02, 0x00, 0x00};
			 static DWORD ftAddy = 0x00932C7F;

			 if (fasTcheck->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)ftAddy, ftON, 5);
			 }
			 else
			 {
				 Memory((LPVOID)ftAddy, ftOFF, 5);
			 }

		 }
private: System::Void walkLeft_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 int leftdelay = System::Convert::ToInt16(delayLeft->Text);
			 wlTime->Interval = leftdelay;

			 if (walkLeft->CheckState == CheckState::Checked)
			 {
				 wlTime->Enabled = true;
			 }
			 else
			 {
				 wlTime->Enabled = false;
			 }

		 }
private: System::Void wlTime_Tick(System::Object^  sender, System::EventArgs^  e) {

 			 HWND maplehwnd = FindProcessWindow(GetCurrentProcessId(), "MaplestoryClass");

			 PostMessage(maplehwnd, WM_KEYDOWN, 0x25, (MapVirtualKey(0x25, 0) << 16) );

		 }
private: System::Void mobRain_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE mrainON[] = {0xD9, 0xC1};
			 static BYTE mrainOFF[] = {0xD9, 0xC0};
			 static DWORD mrainAddy = 0x00666416;

			 if (mobRain->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)mrainAddy, mrainON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)mrainAddy, mrainOFF, 2);
			 }

		 }
private: System::Void invMobs_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

			 static BYTE invmON[] = {0x0F, 0x85};
			 static BYTE invmOFF[] = {0x0F, 0x84};
			 static DWORD invmAddy = 0x0064A152;

			 if (invMobs->CheckState == CheckState::Checked)
			 {
				 Memory((LPVOID)invmAddy, invmON, 2);
			 }
			 else
			 {
				 Memory((LPVOID)invmAddy, invmOFF, 2);
			 }

		 }
};
}
