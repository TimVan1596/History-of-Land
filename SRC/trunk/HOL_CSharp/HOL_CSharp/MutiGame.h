#pragma once
#include "Legend.h"
#include "GameRecord.h"
//#include "SmoothProgressbar.dll"
#include <time.h>
#include <stdlib.h>
#include<cliext/vector>
#include "User.h"


#define  BOW_ATK 1
#define  BUBIN_ATK 2
#define  QIBIN_ATK 3
#define  DDAY_ATK 4
#define  WATERLOO_ATK 5
#define  CAOCHUAN_ATK 6
#define  POFU_ATK 7
#define  SUMHPBARWIDTH 600  //总领土面积
#define  PERMPWIDTH 200 //每60民心对应200宽度
#define  DDAY_MP 15
#define  WATERLOO_MP 15
#define  CAOCHUAN_MP 15
#define  POFU_MP 15

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;
	using namespace System::Timers;
	using namespace System::Threading;



	/// <summary>
	/// MutiGame 摘要
	/// </summary>
	public ref class MutiGame : public System::Windows::Forms::Form {
	public:
		MutiGame(void) {
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			Labelfuck = gcnew Thread(gcnew ThreadStart(this, &MutiGame::fuckLabel));
			//Labelfuck->Start();

			AtkPBTimer = gcnew System::Timers::Timer(1000);

			AtkPBTimer->Elapsed += gcnew System::Timers::ElapsedEventHandler(this, &MutiGame::OnTimedEvent);
			//aTimer->Interval = 1000;
			AtkPBTimer->AutoReset = true;
			AtkPBTimer->Enabled = true;
			//
		}


		Thread ^Labelfuck;

		void InitializeWindows(Legend ^my, Legend ^enemy) {
			//InitializeComponent();
			round_count = 0;
			this->my = my;
			this->enemy = enemy;


			myNameLB->Text = my->name;
			enemyNameLB->Text = enemy->name;

			//血条、蓝条

			startMyHP = my->HP;
			startHP = my->HP + enemy->HP;
			MyHPproBar->Width = SUMHPBARWIDTH*((my->HP)*1.0 / (startHP)*1.0);
			EnemyHPproBar->Width = SUMHPBARWIDTH - MyHPproBar->Width;

			myMPProBar->Width = ((my->MP)*1.0 / (60.00))*(PERMPWIDTH)*1.0;
			myMPProBar->Text = (my->MP).ToString();

			enemyMPProBar->Width = ((my->MP)*1.0 / (60.00))*(PERMPWIDTH)*1.0;
			enemyMPProBar->Text = (my->MP).ToString();

			MyHPproBar->Text = (my->HP).ToString();
			EnemyHPproBar->Text = (enemy->HP).ToString();

			myWinLB->Visible = false;
			enemyWinLB->Visible = false;

			isMyRound = true;

			UpdateListView();

			this->ShowDialog();
		}



	private: void fuckLabel() {

				 while (true)
				 {
					 TipsLB->Visible = true;
					 // Labelfuck->Resume();


					 MyHPproBar->Text = (my->HP).ToString();
					 EnemyHPproBar->Text = (enemy->HP).ToString();
					 myMPProBar->Width = ((my->MP)*1.0 / (60.00))*(PERMPWIDTH)*1.0;
					 myMPProBar->Text = (my->MP).ToString();
					 enemyMPProBar->Width = ((my->MP)*1.0 / (60.00))*(PERMPWIDTH)*1.0;
					 enemyMPProBar->Text = (my->MP).ToString();

					 myATKtipsLB->Text = "攻击力：" + (my->ATK).ToString();
					 enemyATKtipsLB->Text = "攻击力：" + (enemy->ATK).ToString();

					 if (isMyRound)
					 {
						 mePicBox->BackColor = Color::IndianRed;
						 myNameLB->BackColor = Color::IndianRed;

						 enemyATKPanel->Visible = false;

						 TipsLB->Text = "轮到我方攻击";

					 }
					 else
					 {
						 enemyATKPanel->Visible = true;

						 mePicBox->BackColor = Color::Transparent;
						 myNameLB->BackColor = Color::Transparent;

						 pictureBox1->BackColor = Color::IndianRed;
						 enemyNameLB->BackColor = Color::IndianRed;

						 TipsLB->Text = "轮到对方攻击";
					 }
				 }
				
				 // Thread::Sleep(10);
	}
	private: void UpdateListView() {
				 //对己方进行listview更新
				 TipsLB->Visible = true;
				 // Labelfuck->Resume();


				 MyHPproBar->Text = (my->HP).ToString();
				 EnemyHPproBar->Text = (enemy->HP).ToString();
				 myMPProBar->Width = ((my->MP)*1.0 / (60.00))*(PERMPWIDTH)*1.0;
				 myMPProBar->Text = (my->MP).ToString();
				 enemyMPProBar->Width = ((my->MP)*1.0 / (60.00))*(PERMPWIDTH)*1.0;
				 enemyMPProBar->Text = (my->MP).ToString();

				 myATKtipsLB->Text = "攻击力：" + (my->ATK).ToString();
				 enemyATKtipsLB->Text = "攻击力：" + (enemy->ATK).ToString();

				 if (isMyRound)
				 {
					 mePicBox->BackColor = Color::IndianRed;
					 myNameLB->BackColor = Color::IndianRed;

					 pictureBox1->BackColor = Color::Transparent;
					 enemyNameLB->BackColor = Color::Transparent;

					 TipsLB->Text = "轮到我方攻击";
				 }
				 else
				 {
					 mePicBox->BackColor = Color::Transparent;
					 myNameLB->BackColor = Color::Transparent;

					 pictureBox1->BackColor = Color::IndianRed;
					 enemyNameLB->BackColor = Color::IndianRed;

					 TipsLB->Text = "轮到对方攻击";
				 }
	}


	public: void OnTimedEvent(System::Object^  sender, System::Timers::ElapsedEventArgs^  e) {
		//	Labelfuck->Resume();
			//	TipsLB->Text = "FUCK";
				//MessageBox::Show("123");
				//Labelfuck->Start();

	}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MutiGame() {
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  菜单MToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  记录LToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  游戏WToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  菜单ToolStripMenuItem;
	private: System::Windows::Forms::Panel^  enemyATKPanel;
	private: System::Windows::Forms::PictureBox^  enemyATKPB;

	private: System::Windows::Forms::Label^  enemyATKTips;




	private: System::Windows::Forms::Label^  enemyATKtipsLB;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  myMPProBar;
	private: System::Windows::Forms::PictureBox^  myHPBlock;
	private: System::Windows::Forms::Label^  enemyWinLB;

	private: System::Windows::Forms::Label^  myATKtipsLB;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  enemyNameLB;
	private: System::Windows::Forms::Label^  myNameLB;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  myWinLB;


	private: System::Windows::Forms::PictureBox^  pictureBox1;




	private: System::Windows::Forms::PictureBox^  mePicBox;




	private: System::Windows::Forms::Panel^  TipsPanel;
	private: System::Windows::Forms::Label^  TipsLB;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  RoundLB;
	private: System::Windows::Forms::PictureBox^  pictureBox2;







	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;
		static Random^ rnd = gcnew Random();
		int round_count; //总回合数
		int sumHurt; // 保存承受敌方的总攻击力
		int sumATK; // 保存对敌方造成的总攻击力
		int startMyHP; //己方初始血量
		int startEnemyHP; //敌方初始血量
		int startHP; //全局初始血量
		int startProBarWidth;
		int secondsOfAtkPBTimer = 0; //动画计时器的秒钟
		bool isLeftOrRight = true;  //动画计时器的加还是减;
	public: User^ userAccount;   //用户登录的账号信息
	private:  System::Timers::Timer ^AtkPBTimer;
			  Legend^ my;
			  Legend^ enemy;
			  int isSTART = false;
			  bool isMyRound; //是否轮到我的回合
			  int Origin_MYHP;//保存开战前的原领土面积


	private:vector<int> arrRand;
	private: System::Windows::Forms::PictureBox^  myATKPB;
	private: System::Windows::Forms::Label^  myATKTips;
	private: System::Windows::Forms::Panel^  myATKPanel;
	private: System::Windows::Forms::Label^  MyHPproBar;
	private: System::Windows::Forms::Label^  EnemyHPproBar;
	private: System::Windows::Forms::Label^  enemyMPProBar;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  QiBinBTN;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  BuBinBTN;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  bowBox;
	private: System::Windows::Forms::Button^  BowBTN;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  myKeZhiLB;
	private: System::Windows::Forms::Label^  enemyKeZhiLB;


	private:vector<int> arr;

#pragma region Windows Form Designer generated code
			/// <summary>
			/// 设计器支持所需的方法 - 不要
			/// 使用代码编辑器修改此方法的内容。
			/// </summary>
			void InitializeComponent(void) {
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MutiGame::typeid));
				this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				this->菜单MToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->记录LToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->游戏WToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->菜单ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->enemyATKPanel = (gcnew System::Windows::Forms::Panel());
				this->myKeZhiLB = (gcnew System::Windows::Forms::Label());
				this->enemyATKPB = (gcnew System::Windows::Forms::PictureBox());
				this->enemyATKTips = (gcnew System::Windows::Forms::Label());
				this->enemyATKtipsLB = (gcnew System::Windows::Forms::Label());
				this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
				this->myMPProBar = (gcnew System::Windows::Forms::Label());
				this->myHPBlock = (gcnew System::Windows::Forms::PictureBox());
				this->enemyWinLB = (gcnew System::Windows::Forms::Label());
				this->myATKtipsLB = (gcnew System::Windows::Forms::Label());
				this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				this->enemyNameLB = (gcnew System::Windows::Forms::Label());
				this->myNameLB = (gcnew System::Windows::Forms::Label());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->myWinLB = (gcnew System::Windows::Forms::Label());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->mePicBox = (gcnew System::Windows::Forms::PictureBox());
				this->TipsPanel = (gcnew System::Windows::Forms::Panel());
				this->TipsLB = (gcnew System::Windows::Forms::Label());
				this->panel1 = (gcnew System::Windows::Forms::Panel());
				this->RoundLB = (gcnew System::Windows::Forms::Label());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->myATKPB = (gcnew System::Windows::Forms::PictureBox());
				this->myATKTips = (gcnew System::Windows::Forms::Label());
				this->myATKPanel = (gcnew System::Windows::Forms::Panel());
				this->enemyKeZhiLB = (gcnew System::Windows::Forms::Label());
				this->MyHPproBar = (gcnew System::Windows::Forms::Label());
				this->EnemyHPproBar = (gcnew System::Windows::Forms::Label());
				this->enemyMPProBar = (gcnew System::Windows::Forms::Label());
				this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
				this->QiBinBTN = (gcnew System::Windows::Forms::Button());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				this->BuBinBTN = (gcnew System::Windows::Forms::Button());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->bowBox = (gcnew System::Windows::Forms::GroupBox());
				this->BowBTN = (gcnew System::Windows::Forms::Button());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->menuStrip1->SuspendLayout();
				this->enemyATKPanel->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyATKPB))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myHPBlock))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mePicBox))->BeginInit();
				this->TipsPanel->SuspendLayout();
				this->panel1->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myATKPB))->BeginInit();
				this->myATKPanel->SuspendLayout();
				this->groupBox2->SuspendLayout();
				this->groupBox1->SuspendLayout();
				this->bowBox->SuspendLayout();
				this->SuspendLayout();
				// 
				// menuStrip1
				// 
				this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					this->菜单MToolStripMenuItem,
						this->记录LToolStripMenuItem, this->游戏WToolStripMenuItem, this->菜单ToolStripMenuItem
				});
				this->menuStrip1->Location = System::Drawing::Point(0, 0);
				this->menuStrip1->Name = L"menuStrip1";
				this->menuStrip1->Size = System::Drawing::Size(1255, 25);
				this->menuStrip1->TabIndex = 9;
				this->menuStrip1->Text = L"menuStrip1";
				// 
				// 菜单MToolStripMenuItem
				// 
				this->菜单MToolStripMenuItem->Name = L"菜单MToolStripMenuItem";
				this->菜单MToolStripMenuItem->Size = System::Drawing::Size(64, 21);
				this->菜单MToolStripMenuItem->Text = L"菜单(&M)";
				// 
				// 记录LToolStripMenuItem
				// 
				this->记录LToolStripMenuItem->Name = L"记录LToolStripMenuItem";
				this->记录LToolStripMenuItem->Size = System::Drawing::Size(58, 21);
				this->记录LToolStripMenuItem->Text = L"记录(&L)";
				// 
				// 游戏WToolStripMenuItem
				// 
				this->游戏WToolStripMenuItem->Name = L"游戏WToolStripMenuItem";
				this->游戏WToolStripMenuItem->Size = System::Drawing::Size(64, 21);
				this->游戏WToolStripMenuItem->Text = L"游戏(&W)";
				// 
				// 菜单ToolStripMenuItem
				// 
				this->菜单ToolStripMenuItem->Name = L"菜单ToolStripMenuItem";
				this->菜单ToolStripMenuItem->Size = System::Drawing::Size(85, 21);
				this->菜单ToolStripMenuItem->Text = L"帮助信息(&H)";
				// 
				// enemyATKPanel
				// 
				this->enemyATKPanel->BackColor = System::Drawing::Color::Transparent;
				this->enemyATKPanel->Controls->Add(this->myKeZhiLB);
				this->enemyATKPanel->Controls->Add(this->enemyATKPB);
				this->enemyATKPanel->Controls->Add(this->enemyATKTips);
				this->enemyATKPanel->Location = System::Drawing::Point(781, 190);
				this->enemyATKPanel->Name = L"enemyATKPanel";
				this->enemyATKPanel->Size = System::Drawing::Size(189, 188);
				this->enemyATKPanel->TabIndex = 65;
				// 
				// myKeZhiLB
				// 
				this->myKeZhiLB->AutoSize = true;
				this->myKeZhiLB->BackColor = System::Drawing::Color::DarkGray;
				this->myKeZhiLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
				this->myKeZhiLB->ForeColor = System::Drawing::Color::DarkRed;
				this->myKeZhiLB->Location = System::Drawing::Point(19, 49);
				this->myKeZhiLB->Name = L"myKeZhiLB";
				this->myKeZhiLB->Size = System::Drawing::Size(46, 78);
				this->myKeZhiLB->TabIndex = 75;
				this->myKeZhiLB->Text = L"克\r\n制";
				this->myKeZhiLB->Visible = false;
				// 
				// enemyATKPB
				// 
				this->enemyATKPB->BackColor = System::Drawing::Color::Transparent;
				this->enemyATKPB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->enemyATKPB->Location = System::Drawing::Point(85, 37);
				this->enemyATKPB->Name = L"enemyATKPB";
				this->enemyATKPB->Size = System::Drawing::Size(120, 120);
				this->enemyATKPB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->enemyATKPB->TabIndex = 14;
				this->enemyATKPB->TabStop = false;
				// 
				// enemyATKTips
				// 
				this->enemyATKTips->AutoSize = true;
				this->enemyATKTips->Font = (gcnew System::Drawing::Font(L"微软雅黑", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->enemyATKTips->ForeColor = System::Drawing::Color::MediumBlue;
				this->enemyATKTips->Location = System::Drawing::Point(138, 3);
				this->enemyATKTips->Name = L"enemyATKTips";
				this->enemyATKTips->Size = System::Drawing::Size(36, 31);
				this->enemyATKTips->TabIndex = 23;
				this->enemyATKTips->Text = L" 9";
				this->enemyATKTips->Visible = false;
				// 
				// enemyATKtipsLB
				// 
				this->enemyATKtipsLB->AutoSize = true;
				this->enemyATKtipsLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->enemyATKtipsLB->ForeColor = System::Drawing::Color::Red;
				this->enemyATKtipsLB->Location = System::Drawing::Point(1100, 661);
				this->enemyATKtipsLB->Name = L"enemyATKtipsLB";
				this->enemyATKtipsLB->Size = System::Drawing::Size(122, 28);
				this->enemyATKtipsLB->TabIndex = 63;
				this->enemyATKtipsLB->Text = L"攻击力：35";
				// 
				// pictureBox5
				// 
				this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
				this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
				this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox5->Location = System::Drawing::Point(1026, 625);
				this->pictureBox5->Name = L"pictureBox5";
				this->pictureBox5->Size = System::Drawing::Size(68, 65);
				this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox5->TabIndex = 62;
				this->pictureBox5->TabStop = false;
				// 
				// myMPProBar
				// 
				this->myMPProBar->BackColor = System::Drawing::Color::DodgerBlue;
				this->myMPProBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->myMPProBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->myMPProBar->ForeColor = System::Drawing::SystemColors::ButtonFace;
				this->myMPProBar->Location = System::Drawing::Point(26, 706);
				this->myMPProBar->Name = L"myMPProBar";
				this->myMPProBar->Size = System::Drawing::Size(220, 27);
				this->myMPProBar->TabIndex = 56;
				this->myMPProBar->Text = L"  300";
				this->myMPProBar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				// 
				// myHPBlock
				// 
				this->myHPBlock->BackColor = System::Drawing::Color::Transparent;
				this->myHPBlock->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->myHPBlock->Location = System::Drawing::Point(24, 736);
				this->myHPBlock->Name = L"myHPBlock";
				this->myHPBlock->Size = System::Drawing::Size(600, 40);
				this->myHPBlock->TabIndex = 54;
				this->myHPBlock->TabStop = false;
				// 
				// enemyWinLB
				// 
				this->enemyWinLB->BackColor = System::Drawing::Color::Transparent;
				this->enemyWinLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->enemyWinLB->ForeColor = System::Drawing::Color::Red;
				this->enemyWinLB->Location = System::Drawing::Point(1033, 55);
				this->enemyWinLB->Name = L"enemyWinLB";
				this->enemyWinLB->Size = System::Drawing::Size(159, 73);
				this->enemyWinLB->TabIndex = 53;
				this->enemyWinLB->Text = L" +16";
				// 
				// myATKtipsLB
				// 
				this->myATKtipsLB->AutoSize = true;
				this->myATKtipsLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->myATKtipsLB->ForeColor = System::Drawing::Color::Red;
				this->myATKtipsLB->Location = System::Drawing::Point(106, 662);
				this->myATKtipsLB->Name = L"myATKtipsLB";
				this->myATKtipsLB->Size = System::Drawing::Size(122, 28);
				this->myATKtipsLB->TabIndex = 61;
				this->myATKtipsLB->Text = L"攻击力：35";
				// 
				// pictureBox4
				// 
				this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
				this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
				this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox4->Location = System::Drawing::Point(32, 624);
				this->pictureBox4->Name = L"pictureBox4";
				this->pictureBox4->Size = System::Drawing::Size(68, 65);
				this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox4->TabIndex = 60;
				this->pictureBox4->TabStop = false;
				// 
				// enemyNameLB
				// 
				this->enemyNameLB->BackColor = System::Drawing::Color::Transparent;
				this->enemyNameLB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->enemyNameLB->Font = (gcnew System::Drawing::Font(L"华文行楷", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->enemyNameLB->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->enemyNameLB->Location = System::Drawing::Point(972, 433);
				this->enemyNameLB->Name = L"enemyNameLB";
				this->enemyNameLB->Size = System::Drawing::Size(264, 47);
				this->enemyNameLB->TabIndex = 58;
				this->enemyNameLB->Text = L"罗马帝国";
				this->enemyNameLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// myNameLB
				// 
				this->myNameLB->BackColor = System::Drawing::Color::IndianRed;
				this->myNameLB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->myNameLB->Font = (gcnew System::Drawing::Font(L"华文行楷", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->myNameLB->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->myNameLB->Location = System::Drawing::Point(24, 432);
				this->myNameLB->Name = L"myNameLB";
				this->myNameLB->Size = System::Drawing::Size(252, 47);
				this->myNameLB->TabIndex = 57;
				this->myNameLB->Text = L"大汉帝国";
				this->myNameLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// pictureBox3
				// 
				this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
				this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->pictureBox3->Location = System::Drawing::Point(648, 736);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(600, 40);
				this->pictureBox3->TabIndex = 55;
				this->pictureBox3->TabStop = false;
				// 
				// myWinLB
				// 
				this->myWinLB->BackColor = System::Drawing::Color::Transparent;
				this->myWinLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->myWinLB->ForeColor = System::Drawing::Color::Red;
				this->myWinLB->Location = System::Drawing::Point(54, 63);
				this->myWinLB->Name = L"myWinLB";
				this->myWinLB->Size = System::Drawing::Size(141, 62);
				this->myWinLB->TabIndex = 52;
				this->myWinLB->Text = L"+56";
				this->myWinLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
				this->pictureBox1->Location = System::Drawing::Point(976, 128);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(260, 302);
				this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox1->TabIndex = 43;
				this->pictureBox1->TabStop = false;
				// 
				// mePicBox
				// 
				this->mePicBox->BackColor = System::Drawing::Color::IndianRed;
				this->mePicBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mePicBox.BackgroundImage")));
				this->mePicBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->mePicBox->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mePicBox.InitialImage")));
				this->mePicBox->Location = System::Drawing::Point(26, 128);
				this->mePicBox->Name = L"mePicBox";
				this->mePicBox->Size = System::Drawing::Size(220, 302);
				this->mePicBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->mePicBox->TabIndex = 47;
				this->mePicBox->TabStop = false;
				// 
				// TipsPanel
				// 
				this->TipsPanel->AutoSize = true;
				this->TipsPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->TipsPanel->Controls->Add(this->TipsLB);
				this->TipsPanel->Location = System::Drawing::Point(275, 581);
				this->TipsPanel->Name = L"TipsPanel";
				this->TipsPanel->Size = System::Drawing::Size(695, 35);
				this->TipsPanel->TabIndex = 66;
				// 
				// TipsLB
				// 
				this->TipsLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->TipsLB->ForeColor = System::Drawing::Color::OrangeRed;
				this->TipsLB->Location = System::Drawing::Point(20, 4);
				this->TipsLB->Name = L"TipsLB";
				this->TipsLB->Size = System::Drawing::Size(657, 27);
				this->TipsLB->TabIndex = 33;
				this->TipsLB->Text = L"轮到我方";
				this->TipsLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// panel1
				// 
				this->panel1->BackColor = System::Drawing::Color::Transparent;
				this->panel1->Controls->Add(this->RoundLB);
				this->panel1->Controls->Add(this->pictureBox2);
				this->panel1->Location = System::Drawing::Point(494, 0);
				this->panel1->Name = L"panel1";
				this->panel1->Size = System::Drawing::Size(332, 64);
				this->panel1->TabIndex = 67;
				// 
				// RoundLB
				// 
				this->RoundLB->AutoSize = true;
				this->RoundLB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(91)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
																			static_cast<System::Int32>(static_cast<System::Byte>(213)));
				this->RoundLB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->RoundLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->RoundLB->ForeColor = System::Drawing::Color::Transparent;
				this->RoundLB->Location = System::Drawing::Point(141, 15);
				this->RoundLB->Name = L"RoundLB";
				this->RoundLB->Size = System::Drawing::Size(35, 39);
				this->RoundLB->TabIndex = 2;
				this->RoundLB->Text = L"1";
				// 
				// pictureBox2
				// 
				this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
				this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
				this->pictureBox2->Location = System::Drawing::Point(0, 4);
				this->pictureBox2->Name = L"pictureBox2";
				this->pictureBox2->Size = System::Drawing::Size(332, 60);
				this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox2->TabIndex = 0;
				this->pictureBox2->TabStop = false;
				// 
				// myATKPB
				// 
				this->myATKPB->BackColor = System::Drawing::Color::Transparent;
				this->myATKPB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->myATKPB->Location = System::Drawing::Point(13, 49);
				this->myATKPB->Name = L"myATKPB";
				this->myATKPB->Size = System::Drawing::Size(120, 120);
				this->myATKPB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->myATKPB->TabIndex = 13;
				this->myATKPB->TabStop = false;
				// 
				// myATKTips
				// 
				this->myATKTips->AutoSize = true;
				this->myATKTips->Font = (gcnew System::Drawing::Font(L"微软雅黑", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->myATKTips->ForeColor = System::Drawing::Color::MediumBlue;
				this->myATKTips->Location = System::Drawing::Point(39, 15);
				this->myATKTips->Name = L"myATKTips";
				this->myATKTips->Size = System::Drawing::Size(44, 31);
				this->myATKTips->TabIndex = 22;
				this->myATKTips->Text = L"15";
				this->myATKTips->Visible = false;
				// 
				// myATKPanel
				// 
				this->myATKPanel->BackColor = System::Drawing::Color::Transparent;
				this->myATKPanel->Controls->Add(this->enemyKeZhiLB);
				this->myATKPanel->Controls->Add(this->myATKTips);
				this->myATKPanel->Controls->Add(this->myATKPB);
				this->myATKPanel->Location = System::Drawing::Point(363, 190);
				this->myATKPanel->Name = L"myATKPanel";
				this->myATKPanel->Size = System::Drawing::Size(195, 188);
				this->myATKPanel->TabIndex = 64;
				// 
				// enemyKeZhiLB
				// 
				this->enemyKeZhiLB->AutoSize = true;
				this->enemyKeZhiLB->BackColor = System::Drawing::Color::DarkGray;
				this->enemyKeZhiLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->enemyKeZhiLB->ForeColor = System::Drawing::Color::DarkRed;
				this->enemyKeZhiLB->Location = System::Drawing::Point(139, 49);
				this->enemyKeZhiLB->Name = L"enemyKeZhiLB";
				this->enemyKeZhiLB->Size = System::Drawing::Size(46, 78);
				this->enemyKeZhiLB->TabIndex = 76;
				this->enemyKeZhiLB->Text = L"克\r\n制";
				this->enemyKeZhiLB->Visible = false;
				// 
				// MyHPproBar
				// 
				this->MyHPproBar->BackColor = System::Drawing::Color::Red;
				this->MyHPproBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->MyHPproBar->ForeColor = System::Drawing::SystemColors::ButtonFace;
				this->MyHPproBar->Location = System::Drawing::Point(19, 739);
				this->MyHPproBar->Name = L"MyHPproBar";
				this->MyHPproBar->Size = System::Drawing::Size(300, 37);
				this->MyHPproBar->TabIndex = 69;
				this->MyHPproBar->Text = L"  300";
				this->MyHPproBar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				// 
				// EnemyHPproBar
				// 
				this->EnemyHPproBar->BackColor = System::Drawing::Color::Red;
				this->EnemyHPproBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->EnemyHPproBar->ForeColor = System::Drawing::SystemColors::ButtonFace;
				this->EnemyHPproBar->Location = System::Drawing::Point(643, 736);
				this->EnemyHPproBar->Name = L"EnemyHPproBar";
				this->EnemyHPproBar->Size = System::Drawing::Size(300, 37);
				this->EnemyHPproBar->TabIndex = 70;
				this->EnemyHPproBar->Text = L"  300";
				this->EnemyHPproBar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				// 
				// enemyMPProBar
				// 
				this->enemyMPProBar->BackColor = System::Drawing::Color::DodgerBlue;
				this->enemyMPProBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->enemyMPProBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->enemyMPProBar->ForeColor = System::Drawing::SystemColors::ButtonFace;
				this->enemyMPProBar->Location = System::Drawing::Point(1022, 706);
				this->enemyMPProBar->Name = L"enemyMPProBar";
				this->enemyMPProBar->Size = System::Drawing::Size(220, 27);
				this->enemyMPProBar->TabIndex = 71;
				this->enemyMPProBar->Text = L"  300";
				this->enemyMPProBar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				// 
				// groupBox2
				// 
				this->groupBox2->BackColor = System::Drawing::Color::Transparent;
				this->groupBox2->Controls->Add(this->QiBinBTN);
				this->groupBox2->Controls->Add(this->label6);
				this->groupBox2->Location = System::Drawing::Point(763, 453);
				this->groupBox2->Name = L"groupBox2";
				this->groupBox2->Size = System::Drawing::Size(93, 120);
				this->groupBox2->TabIndex = 74;
				this->groupBox2->TabStop = false;
				this->groupBox2->Text = L" ";
				// 
				// QiBinBTN
				// 
				this->QiBinBTN->BackColor = System::Drawing::Color::BurlyWood;
				this->QiBinBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QiBinBTN.BackgroundImage")));
				this->QiBinBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->QiBinBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->QiBinBTN->Location = System::Drawing::Point(3, 34);
				this->QiBinBTN->Margin = System::Windows::Forms::Padding(0);
				this->QiBinBTN->Name = L"QiBinBTN";
				this->QiBinBTN->Size = System::Drawing::Size(80, 80);
				this->QiBinBTN->TabIndex = 14;
				this->QiBinBTN->Text = L" ";
				this->QiBinBTN->UseVisualStyleBackColor = false;
				this->QiBinBTN->Click += gcnew System::EventHandler(this, &MutiGame::QiBinBTN_Click);
				// 
				// label6
				// 
				this->label6->AutoSize = true;
				this->label6->BackColor = System::Drawing::Color::DarkGray;
				this->label6->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->label6->ForeColor = System::Drawing::Color::OrangeRed;
				this->label6->Location = System::Drawing::Point(17, 0);
				this->label6->Name = L"label6";
				this->label6->Size = System::Drawing::Size(50, 26);
				this->label6->TabIndex = 6;
				this->label6->Text = L"骑兵";
				// 
				// groupBox1
				// 
				this->groupBox1->BackColor = System::Drawing::Color::Transparent;
				this->groupBox1->Controls->Add(this->BuBinBTN);
				this->groupBox1->Controls->Add(this->label4);
				this->groupBox1->Location = System::Drawing::Point(594, 391);
				this->groupBox1->Name = L"groupBox1";
				this->groupBox1->Size = System::Drawing::Size(106, 137);
				this->groupBox1->TabIndex = 73;
				this->groupBox1->TabStop = false;
				this->groupBox1->Text = L" ";
				// 
				// BuBinBTN
				// 
				this->BuBinBTN->BackColor = System::Drawing::Color::BurlyWood;
				this->BuBinBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BuBinBTN.BackgroundImage")));
				this->BuBinBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->BuBinBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->BuBinBTN->Location = System::Drawing::Point(3, 34);
				this->BuBinBTN->Margin = System::Windows::Forms::Padding(0);
				this->BuBinBTN->Name = L"BuBinBTN";
				this->BuBinBTN->Size = System::Drawing::Size(100, 87);
				this->BuBinBTN->TabIndex = 13;
				this->BuBinBTN->Text = L" ";
				this->BuBinBTN->UseVisualStyleBackColor = false;
				this->BuBinBTN->Click += gcnew System::EventHandler(this, &MutiGame::BuBinBTN_Click);
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->BackColor = System::Drawing::Color::DarkGray;
				this->label4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->label4->ForeColor = System::Drawing::Color::OrangeRed;
				this->label4->Location = System::Drawing::Point(23, 0);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(50, 26);
				this->label4->TabIndex = 6;
				this->label4->Text = L"步兵";
				// 
				// bowBox
				// 
				this->bowBox->BackColor = System::Drawing::Color::Transparent;
				this->bowBox->Controls->Add(this->BowBTN);
				this->bowBox->Controls->Add(this->label1);
				this->bowBox->Location = System::Drawing::Point(417, 453);
				this->bowBox->Name = L"bowBox";
				this->bowBox->Size = System::Drawing::Size(93, 123);
				this->bowBox->TabIndex = 72;
				this->bowBox->TabStop = false;
				this->bowBox->Text = L" ";
				// 
				// BowBTN
				// 
				this->BowBTN->BackColor = System::Drawing::Color::BurlyWood;
				this->BowBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BowBTN.BackgroundImage")));
				this->BowBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->BowBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->BowBTN->Location = System::Drawing::Point(3, 34);
				this->BowBTN->Margin = System::Windows::Forms::Padding(0);
				this->BowBTN->Name = L"BowBTN";
				this->BowBTN->Size = System::Drawing::Size(80, 80);
				this->BowBTN->TabIndex = 14;
				this->BowBTN->Text = L" ";
				this->BowBTN->UseVisualStyleBackColor = false;
				this->BowBTN->Click += gcnew System::EventHandler(this, &MutiGame::BowBTN_Click);
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->BackColor = System::Drawing::Color::DarkGray;
				this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->label1->ForeColor = System::Drawing::Color::OrangeRed;
				this->label1->Location = System::Drawing::Point(6, 0);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(69, 26);
				this->label1->TabIndex = 6;
				this->label1->Text = L"弓箭手";
				// 
				// MutiGame
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->ClientSize = System::Drawing::Size(1255, 796);
				this->Controls->Add(this->groupBox2);
				this->Controls->Add(this->groupBox1);
				this->Controls->Add(this->bowBox);
				this->Controls->Add(this->enemyMPProBar);
				this->Controls->Add(this->EnemyHPproBar);
				this->Controls->Add(this->MyHPproBar);
				this->Controls->Add(this->panel1);
				this->Controls->Add(this->TipsPanel);
				this->Controls->Add(this->enemyATKPanel);
				this->Controls->Add(this->myATKPanel);
				this->Controls->Add(this->enemyATKtipsLB);
				this->Controls->Add(this->pictureBox5);
				this->Controls->Add(this->myMPProBar);
				this->Controls->Add(this->myHPBlock);
				this->Controls->Add(this->enemyWinLB);
				this->Controls->Add(this->myATKtipsLB);
				this->Controls->Add(this->pictureBox4);
				this->Controls->Add(this->enemyNameLB);
				this->Controls->Add(this->myNameLB);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->myWinLB);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->mePicBox);
				this->Controls->Add(this->menuStrip1);
				this->Name = L"MutiGame";
				this->Text = L"MutiGame";
				this->menuStrip1->ResumeLayout(false);
				this->menuStrip1->PerformLayout();
				this->enemyATKPanel->ResumeLayout(false);
				this->enemyATKPanel->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyATKPB))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myHPBlock))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mePicBox))->EndInit();
				this->TipsPanel->ResumeLayout(false);
				this->panel1->ResumeLayout(false);
				this->panel1->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myATKPB))->EndInit();
				this->myATKPanel->ResumeLayout(false);
				this->myATKPanel->PerformLayout();
				this->groupBox2->ResumeLayout(false);
				this->groupBox2->PerformLayout();
				this->groupBox1->ResumeLayout(false);
				this->groupBox1->PerformLayout();
				this->bowBox->ResumeLayout(false);
				this->bowBox->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
	private: System::Void BuBinBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 //步兵攻击方式
				 playClick(BUBIN_ATK);

	}

			 void playClick(int ATKTYPE) {
				 //步兵攻击方式
				 if (isMyRound)
				 {
					 Origin_MYHP = my->HP;//保存开战前的原领土面积
					 tipsBeforeGame();
					 my->arrRand = rnd->Next(0, 7);
					 my->AtkType = ATKTYPE;
					 isMyRound = !isMyRound;

					 UpdateListView();

				 }
				 else{
					 enemy->AtkType = ATKTYPE;
					 enemy->arrRand = rnd->Next(0, 7);

					 my->attack(*enemy);
					 enemy->attack(*my);
					 isMyRound = !isMyRound;
					 endBattle(Origin_MYHP);

				 }


			 }


	private: void MilitaryCourt(Legend %winner, Legend %loser)
		//军事法庭，用于处理每回合双方交战之后的结果，对两方属性进行划分
	{


				 winner.ATK += 3;
				 loser.ATK += 1;

				 winner.DFS += 2;
				 loser.DFS -= 1;

				 winner.MP += 2;
				 loser.MP -= 1;

				 if (loser.HP< 0)  loser.HP = 0;

				 if (winner.ATK - 10 > winner.HP)  winner.ATK = winner.HP;
				 if (loser.ATK - 10 > loser.HP)  loser.ATK = loser.HP;
	}

	private: void endBattle(int Origin_MYHP)
		//交战之后的处理阶段函数
	{
				 // UpdateListView();
				 updateATKpicBox();

				 if (Origin_MYHP > my->HP)
				 {
					 enemyWinLB->Visible = false;
					 myWinLB->Visible = true;
					 // ui->History->insertPlainText(QString("我军大胜！共占领地方%1座城池\n").arg(my.HP - Origin_MYHP));
					 this->enemyWinLB->Text = "+" + (Origin_MYHP - my->HP).ToString();
					 MilitaryCourt(*enemy, *my);
				 }
				 else if (Origin_MYHP < my->HP)
				 {
					 enemyWinLB->Visible = true;
					 myWinLB->Visible = false;
					 // this->myWinLB->Text = "+" + (my->HP - Origin_MYHP).ToString();
					 this->myWinLB->Text = "+" + (my->HP - Origin_MYHP).ToString();

					 // ui->History->insertPlainText(QString("天不助我！我方城池失陷%1座\n").arg(Origin_MYHP - my.HP));
					 MilitaryCourt(*enemy, *my);
				 }
				 else
				 {
					 enemyWinLB->Visible = true;
					 myWinLB->Visible = true;
					 this->myWinLB->Text = "平";
					 this->enemyWinLB->Text = "平";

					 // ui->History->insertPlainText(QString("贼军和我军不相上下\n"));
				 }





				 my->isHardWin = false;
				 enemy->isHardWin = false;




				 if (my->isAlive == false){
					 MessageBox::Show("您被对方击败！");
					 Close();
				 }
				 else if (enemy->isAlive == false)
				 {
					 MessageBox::Show("您战胜了对方！");
					 Close();
				 }

				 UpdateListView();


	}

	private:void updateATKpicBox() {
				String ^BOWLOCATION = "YBow.png";
				String ^BUBINLOCATION = "YBuBing.png";
				String ^QIBINLOCATION = "YQiBin.png";  //保存三张图的信息
				String ^DDAYLOCATION = "DDAY2.png";
				String ^WATERLOOLOCATION = "waterloo.png";
				String ^CAOCHUANLOCATION = "CaoChuan.png";  //保存三张图的信息
				String ^POFULOCATION = "PoFu.png";  //保存三张图的信息


				if (my->isHardWin)
				{
					myKeZhiLB->Visible = true;
					enemyKeZhiLB->Visible = false;
				}
				else if (enemy->isHardWin)
				{
					myKeZhiLB->Visible = false;
					enemyKeZhiLB->Visible = true;
				}
				else
				{
					myKeZhiLB->Visible = false;
					enemyKeZhiLB->Visible = false;
				}


				if (my->AtkType == BOW_ATK)
				{
					this->myATKPB->ImageLocation = BOWLOCATION;

				}
				else if (my->AtkType == BUBIN_ATK){

					this->myATKPB->ImageLocation = BUBINLOCATION;

				}
				else if (my->AtkType == DDAY_ATK){

					this->myATKPB->ImageLocation = DDAYLOCATION;

				}
				else if (my->AtkType == CAOCHUAN_ATK){

					this->myATKPB->ImageLocation = CAOCHUANLOCATION;

				}
				else if (my->AtkType == POFU_ATK){

					this->myATKPB->ImageLocation = POFULOCATION;

				}
				else if (my->AtkType == WATERLOO_ATK){

					this->myATKPB->ImageLocation = WATERLOOLOCATION;

				}

				else if (my->AtkType == QIBIN_ATK)
				{
					this->myATKPB->ImageLocation = QIBINLOCATION;
				}



				if (enemy->AtkType == BOW_ATK)
				{
					this->enemyATKPB->ImageLocation = BOWLOCATION;

				}
				else if (enemy->AtkType == BUBIN_ATK){

					this->enemyATKPB->ImageLocation = BUBINLOCATION;

				}
				else if (enemy->AtkType == DDAY_ATK){

					this->enemyATKPB->ImageLocation = DDAYLOCATION;

				}
				else if (enemy->AtkType == CAOCHUAN_ATK){

					this->enemyATKPB->ImageLocation = CAOCHUANLOCATION;

				}
				else if (enemy->AtkType == POFU_ATK){

					this->enemyATKPB->ImageLocation = POFULOCATION;

				}
				else if (enemy->AtkType == WATERLOO_ATK){

					this->enemyATKPB->ImageLocation = WATERLOOLOCATION;

				}

				else if (enemy->AtkType == QIBIN_ATK)
				{
					this->enemyATKPB->ImageLocation = QIBINLOCATION;
				}



				//		MessageBox::Show((arr.at(round_count)).ToString());




				MyHPproBar->Width = SUMHPBARWIDTH*((my->HP)*1.0 / (startHP)*1.0);
				EnemyHPproBar->Width = SUMHPBARWIDTH - MyHPproBar->Width;

				//MyHPproBar->Text = (MyHPproBar->Width).ToString();
				//enemyHPProBar->Text = (enemyHPProBar->Width).ToString();


				//this->enemyATKPB->ImageLocation = "Y.png";

				/*myATKPB->Width = 80;
				myATKPB->Height = 80;*/


				//this->enemyATKPB->Image = ATKImageList->Images[enemy->AtkType];

	}

	private:  void tipsBeforeGame()
		//游戏开始前的提示语句
	{
				  myKeZhiLB->BringToFront();
				  enemyKeZhiLB->BringToFront();
				  myATKtipsLB->Visible = true;
				  enemyATKtipsLB->Visible = true;


				  if (round_count == 0)
				  {
					  myATKPanel->Visible = true;
					  enemyATKPanel->Visible = true;

					  myATKTips->Visible = true;
					  enemyATKTips->Visible = true;
				  }


				  /* QString c = QString::number(++round_count, 10);
				  QString cache = QString("\n\n第 %1 轮\n").arg(c);
				  ui->History->insertPlainText(cache);*/
				  this->RoundLB->Text = (++round_count + 1).ToString();
				  /*
				  textBox.ScrollToCaret();

				  this.textBox.Focus();//获取焦点
				  this.textBox.Select(this.textBox.TextLength, 0);//光标定位到文本最后
				  this.textBox.ScrollToCaret();//滚动到光标处
				  */
	}

	private: System::Void BowBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 playClick(BOW_ATK);

	}
	private: System::Void QiBinBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 playClick(QIBIN_ATK);
	}
	};
}
