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
	/// Game 摘要
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form {
	public:
		Game(void) {
			InitializeComponent();
			enemyHPProBar->BringToFront();
			this->HistoryTextBox->BringToFront();

			//
			//TODO:  在此处添加构造函数代码
			//
		}

		void InitializeWindows(Legend ^my, Legend ^enemy) {
			//InitializeComponent();
			arr = gcnew vector<int>(100);
			arrRand = gcnew vector<int>(100);
			enemyRand();
			round_count = 0;
			this->my = my;
			this->enemy = enemy;


			//血条、蓝条

			startMyHP = my->HP;
			startHP = my->HP + enemy->HP;
			MyHPproBar->Width = SUMHPBARWIDTH*((my->HP)*1.0 / (startHP)*1.0);
			enemyHPProBar->Width = SUMHPBARWIDTH - MyHPproBar->Width;
			myMPProBar->Width = ((my->MP)*1.0 / (60.00))*(PERMPWIDTH)*1.0;
			myMPProBar->Text = (my->MP).ToString();

			MyHPproBar->Text = (my->HP).ToString();
			enemyHPProBar->Text = (enemy->HP).ToString();

			myWinLB->Visible = false;
			enemyWinLB->Visible = false;

			//名字
			myNameLB->Text = my->name;
			enemyNameLB->Text = enemy->name;


			//enemy属性增强

			enemy->HP *= 1.05;
			enemy->ATK *= 1.05;

			UpdateListView();


			ATKPanelPaint = gcnew Thread(gcnew ThreadStart(this, &Game::Thead_ATKPanelPaint));
			//ATKPanelPaint->Start();

			AtkPBTimer = gcnew System::Timers::Timer(100);
			AtkPBTimer->Elapsed += gcnew System::Timers::ElapsedEventHandler(this, &Game::OnTimedEvent);
			//aTimer->Interval = 1000;
			AtkPBTimer->AutoReset = true;
		//	AtkPBTimer->Enabled = true;


			this->ShowDialog();
		}


	private: void Thead_ATKPanelPaint() {
				 while (true)
				 {
					 if (isLeftOrRight)
					 {
						 myATKPanel->Left += 15;
						 enemyATKPanel->Left -= 15;
					 }
					 else
					 {
						 myATKPanel->Left -= 15;
						 enemyATKPanel->Left += 15;
					 }


					 if (++secondsOfAtkPBTimer > 10)
					 {
						 secondsOfAtkPBTimer = 0;
						 isLeftOrRight = !isLeftOrRight;
					 }
				 }

	}

	private: void UpdateListView() {
				 //对己方进行listview更新

				 MyHPproBar->Text = (my->HP).ToString();
				 enemyHPProBar->Text = (enemy->HP).ToString();
				 myMPProBar->Width = ((my->MP)*1.0 / (60.00))*(PERMPWIDTH)*1.0;
				 myMPProBar->Text = (my->MP).ToString();

				 myATKtipsLB->Text = "攻击力：" + (my->ATK).ToString();
				 enemyATKtipsLB->Text = "攻击力：" + (enemy->ATK).ToString();


				 /*	 myLV->Items->Clear();
					  this->myLV->BeginUpdate();
					  String ^myHP = (my->HP).ToString();
					  String ^myATK = (my->ATK).ToString();
					  String ^myDFS = (my->DFS).ToString();
					  String ^myMP = (my->MP).ToString();

					  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) { L"帝国 :", my->name },
					  -1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 14, System::Drawing::FontStyle::Bold,
					  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));

					  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) { L"领土面积 :", myHP },
					  -1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 14, System::Drawing::FontStyle::Bold,
					  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));

					  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) { L"军事 :", myATK },
					  -1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 14, System::Drawing::FontStyle::Bold,
					  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));

					  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) { L"守备 :", myDFS },
					  -1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 14, System::Drawing::FontStyle::Bold,
					  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));

					  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) { L"民心 :", myMP },
					  -1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 14, System::Drawing::FontStyle::Bold,
					  System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));

					  this->myLV->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(5) {
					  listViewItem1, listViewItem2, listViewItem3, listViewItem4, listViewItem5
					  });

					  this->myLV->EndUpdate();
					  */

				 //				 EnemyLV->Items->Clear();

				 /*
				 this->EnemyLV->BeginUpdate();
				 String ^enemyHP = (enemy->HP).ToString();
				 String ^enemyATK = (enemy->ATK).ToString();
				 String ^enemyDFS = (enemy->DFS).ToString();
				 String ^enemyMP = (enemy->MP).ToString();

				 listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) { L"帝国 :", enemy->name },
				 -1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 14, System::Drawing::FontStyle::Bold,
				 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));

				 listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) { L"领土面积 :", enemyHP },
				 -1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 14, System::Drawing::FontStyle::Bold,
				 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));

				 listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) { L"军事 :", enemyATK },
				 -1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 14, System::Drawing::FontStyle::Bold,
				 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));

				 listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) { L"守备 :", enemyDFS },
				 -1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 14, System::Drawing::FontStyle::Bold,
				 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));

				 listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(2) { L"民心 :", enemyMP },
				 -1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 14, System::Drawing::FontStyle::Bold,
				 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));


				 this->EnemyLV->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(5) {
				 listViewItem6, listViewItem7, listViewItem8, listViewItem9, listViewItem10
				 });
				 this->EnemyLV->EndUpdate();
				 */

	}



	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Game() {
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  myLV;
	protected:
	private: System::Windows::Forms::ColumnHeader^  header;
	private: System::Windows::Forms::ColumnHeader^  Value;
	private: System::Windows::Forms::ImageList^  imageList4Listview;
	private: System::Windows::Forms::TextBox^  HistoryTextBox;




	private: System::Windows::Forms::PictureBox^  pictureBox1;



	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  菜单ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  bowBox;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Label^  label6;


	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// 必需的设计器变量。
		Legend^ my;
		Legend^ enemy;
		System::Windows::Forms::ListViewItem^  listViewItem1;
		System::Windows::Forms::ListViewItem^  listViewItem2;
		System::Windows::Forms::ListViewItem^  listViewItem3;
		System::Windows::Forms::ListViewItem^  listViewItem4;
		System::Windows::Forms::ListViewItem^  listViewItem5;
		System::Windows::Forms::ListViewItem^  listViewItem6;
		System::Windows::Forms::ListViewItem^  listViewItem7;
		System::Windows::Forms::ListViewItem^  listViewItem8;
		System::Windows::Forms::ListViewItem^  listViewItem9;
	private: System::Windows::Forms::ToolStripMenuItem^  菜单MToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  记录LToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  游戏WToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  mePicBox;
			 System::Windows::Forms::ListViewItem^  listViewItem10;
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
			  static Random^ rnd = gcnew Random(); // 随机数
			  Thread ^ATKPanelPaint; //攻击图标运动进程


	private:vector<int> arr;



	private: System::Windows::Forms::Button^  BuBinBTN;
	private: System::Windows::Forms::Button^  QiBinBTN;
	private: System::Windows::Forms::Button^  BowBTN;
	private: System::Windows::Forms::ImageList^  ATKImageList;
	private: System::Windows::Forms::PictureBox^  myATKPB;
	private: System::Windows::Forms::PictureBox^  enemyATKPB;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  RoundLB;

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  DDayBTN;



	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  breakFuBTN;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  WaterlooBTN;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  BorrowBTN;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  myWinLB;
	private: System::Windows::Forms::Label^  enemyWinLB;
	private: System::Windows::Forms::Label^  myATKTips;
	private: System::Windows::Forms::Label^  enemyATKTips;
	private: System::Windows::Forms::Label^  myKeZhiLB;
	private: System::Windows::Forms::Label^  enemyKeZhiLB;
	private: System::Windows::Forms::PictureBox^  myHPBlock;

	private: System::Windows::Forms::Label^  MyHPproBar;
	private: System::Windows::Forms::Label^  enemyHPProBar;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  myMPProBar;
	private: System::Windows::Forms::Label^  myNameLB;
	private: System::Windows::Forms::Label^  enemyNameLB;
	private: System::Windows::Forms::Label^  TipsLB;
	private: System::Windows::Forms::Panel^  TipsPanel;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  myATKtipsLB;
	private: System::Windows::Forms::Label^  enemyATKtipsLB;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::Panel^  myATKPanel;
private: System::Windows::Forms::Panel^  enemyATKPanel;

		 int isSTART = false;


	private:vector<int> arrRand;


			/// </summary>


#pragma region Windows Form Designer generated code
			/// <summary>
			/// 设计器支持所需的方法 - 不要
			/// 使用代码编辑器修改此方法的内容。
			/// </summary>
			void InitializeComponent(void) {
				this->components = (gcnew System::ComponentModel::Container());
				System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
				this->myLV = (gcnew System::Windows::Forms::ListView());
				this->header = (gcnew System::Windows::Forms::ColumnHeader());
				this->Value = (gcnew System::Windows::Forms::ColumnHeader());
				this->imageList4Listview = (gcnew System::Windows::Forms::ImageList(this->components));
				this->HistoryTextBox = (gcnew System::Windows::Forms::TextBox());
				this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				this->菜单MToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->记录LToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->游戏WToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->菜单ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
				this->bowBox = (gcnew System::Windows::Forms::GroupBox());
				this->BowBTN = (gcnew System::Windows::Forms::Button());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
				this->BuBinBTN = (gcnew System::Windows::Forms::Button());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
				this->QiBinBTN = (gcnew System::Windows::Forms::Button());
				this->label6 = (gcnew System::Windows::Forms::Label());
				this->mePicBox = (gcnew System::Windows::Forms::PictureBox());
				this->ATKImageList = (gcnew System::Windows::Forms::ImageList(this->components));
				this->myATKPB = (gcnew System::Windows::Forms::PictureBox());
				this->enemyATKPB = (gcnew System::Windows::Forms::PictureBox());
				this->panel1 = (gcnew System::Windows::Forms::Panel());
				this->RoundLB = (gcnew System::Windows::Forms::Label());
				this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
				this->DDayBTN = (gcnew System::Windows::Forms::Button());
				this->label8 = (gcnew System::Windows::Forms::Label());
				this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
				this->breakFuBTN = (gcnew System::Windows::Forms::Button());
				this->label7 = (gcnew System::Windows::Forms::Label());
				this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
				this->WaterlooBTN = (gcnew System::Windows::Forms::Button());
				this->label9 = (gcnew System::Windows::Forms::Label());
				this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
				this->BorrowBTN = (gcnew System::Windows::Forms::Button());
				this->label10 = (gcnew System::Windows::Forms::Label());
				this->myWinLB = (gcnew System::Windows::Forms::Label());
				this->enemyWinLB = (gcnew System::Windows::Forms::Label());
				this->myATKTips = (gcnew System::Windows::Forms::Label());
				this->enemyATKTips = (gcnew System::Windows::Forms::Label());
				this->myKeZhiLB = (gcnew System::Windows::Forms::Label());
				this->enemyKeZhiLB = (gcnew System::Windows::Forms::Label());
				this->myHPBlock = (gcnew System::Windows::Forms::PictureBox());
				this->MyHPproBar = (gcnew System::Windows::Forms::Label());
				this->enemyHPProBar = (gcnew System::Windows::Forms::Label());
				this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				this->myMPProBar = (gcnew System::Windows::Forms::Label());
				this->myNameLB = (gcnew System::Windows::Forms::Label());
				this->enemyNameLB = (gcnew System::Windows::Forms::Label());
				this->TipsLB = (gcnew System::Windows::Forms::Label());
				this->TipsPanel = (gcnew System::Windows::Forms::Panel());
				this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
				this->myATKtipsLB = (gcnew System::Windows::Forms::Label());
				this->enemyATKtipsLB = (gcnew System::Windows::Forms::Label());
				this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
				this->myATKPanel = (gcnew System::Windows::Forms::Panel());
				this->enemyATKPanel = (gcnew System::Windows::Forms::Panel());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				this->menuStrip1->SuspendLayout();
				this->bowBox->SuspendLayout();
				this->groupBox1->SuspendLayout();
				this->groupBox2->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mePicBox))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myATKPB))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyATKPB))->BeginInit();
				this->panel1->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				this->groupBox3->SuspendLayout();
				this->groupBox4->SuspendLayout();
				this->groupBox5->SuspendLayout();
				this->groupBox6->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myHPBlock))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				this->TipsPanel->SuspendLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
				this->myATKPanel->SuspendLayout();
				this->enemyATKPanel->SuspendLayout();
				this->SuspendLayout();
				// 
				// myLV
				// 
				this->myLV->BackColor = System::Drawing::SystemColors::Info;
				this->myLV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->header, this->Value });
				this->myLV->Location = System::Drawing::Point(1211, 28);
				this->myLV->Name = L"myLV";
				this->myLV->Scrollable = false;
				this->myLV->Size = System::Drawing::Size(11, 15);
				this->myLV->SmallImageList = this->imageList4Listview;
				this->myLV->TabIndex = 0;
				this->myLV->UseCompatibleStateImageBehavior = false;
				this->myLV->View = System::Windows::Forms::View::Details;
				this->myLV->Visible = false;
				// 
				// header
				// 
				this->header->Text = L" ";
				this->header->Width = 100;
				// 
				// Value
				// 
				this->Value->Text = L" ";
				this->Value->Width = 120;
				// 
				// imageList4Listview
				// 
				this->imageList4Listview->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
				this->imageList4Listview->ImageSize = System::Drawing::Size(1, 45);
				this->imageList4Listview->TransparentColor = System::Drawing::Color::Transparent;
				// 
				// HistoryTextBox
				// 
				this->HistoryTextBox->BackColor = System::Drawing::SystemColors::Info;
				this->HistoryTextBox->Location = System::Drawing::Point(76, 28);
				this->HistoryTextBox->Multiline = true;
				this->HistoryTextBox->Name = L"HistoryTextBox";
				this->HistoryTextBox->ReadOnly = true;
				this->HistoryTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
				this->HistoryTextBox->Size = System::Drawing::Size(254, 237);
				this->HistoryTextBox->TabIndex = 1;
				this->HistoryTextBox->Visible = false;
				// 
				// pictureBox1
				// 
				this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
				this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
				this->pictureBox1->Location = System::Drawing::Point(962, 101);
				this->pictureBox1->Name = L"pictureBox1";
				this->pictureBox1->Size = System::Drawing::Size(260, 302);
				this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox1->TabIndex = 4;
				this->pictureBox1->TabStop = false;
				// 
				// menuStrip1
				// 
				this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
					this->菜单MToolStripMenuItem,
						this->记录LToolStripMenuItem, this->游戏WToolStripMenuItem, this->菜单ToolStripMenuItem
				});
				this->menuStrip1->Location = System::Drawing::Point(0, 0);
				this->menuStrip1->Name = L"menuStrip1";
				this->menuStrip1->Size = System::Drawing::Size(1234, 25);
				this->menuStrip1->TabIndex = 8;
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
				this->记录LToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::RecordClick);
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
				// bowBox
				// 
				this->bowBox->BackColor = System::Drawing::Color::Transparent;
				this->bowBox->Controls->Add(this->BowBTN);
				this->bowBox->Controls->Add(this->label1);
				this->bowBox->Location = System::Drawing::Point(399, 433);
				this->bowBox->Name = L"bowBox";
				this->bowBox->Size = System::Drawing::Size(93, 123);
				this->bowBox->TabIndex = 9;
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
				this->BowBTN->Click += gcnew System::EventHandler(this, &Game::BowBTN_Click);
				this->BowBTN->MouseEnter += gcnew System::EventHandler(this, &Game::BowBTN_MouseEnter);
				this->BowBTN->MouseLeave += gcnew System::EventHandler(this, &Game::BowBTN_MouseLeave);
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
				// groupBox1
				// 
				this->groupBox1->BackColor = System::Drawing::Color::Transparent;
				this->groupBox1->Controls->Add(this->BuBinBTN);
				this->groupBox1->Controls->Add(this->label4);
				this->groupBox1->Location = System::Drawing::Point(576, 371);
				this->groupBox1->Name = L"groupBox1";
				this->groupBox1->Size = System::Drawing::Size(106, 137);
				this->groupBox1->TabIndex = 10;
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
				this->BuBinBTN->Click += gcnew System::EventHandler(this, &Game::BuBinBTN_Click);
				this->BuBinBTN->MouseEnter += gcnew System::EventHandler(this, &Game::BuBinBTN_MouseEnter);
				this->BuBinBTN->MouseLeave += gcnew System::EventHandler(this, &Game::BuBinBTN_MouseLeave);
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
				// groupBox2
				// 
				this->groupBox2->BackColor = System::Drawing::Color::Transparent;
				this->groupBox2->Controls->Add(this->QiBinBTN);
				this->groupBox2->Controls->Add(this->label6);
				this->groupBox2->Location = System::Drawing::Point(745, 433);
				this->groupBox2->Name = L"groupBox2";
				this->groupBox2->Size = System::Drawing::Size(93, 120);
				this->groupBox2->TabIndex = 11;
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
				this->QiBinBTN->Click += gcnew System::EventHandler(this, &Game::QiBinBTN_Click);
				this->QiBinBTN->MouseEnter += gcnew System::EventHandler(this, &Game::QiBinBTN_MouseEnter);
				this->QiBinBTN->MouseLeave += gcnew System::EventHandler(this, &Game::QiBinBTN_MouseLeave);
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
				// mePicBox
				// 
				this->mePicBox->BackColor = System::Drawing::Color::Transparent;
				this->mePicBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mePicBox.BackgroundImage")));
				this->mePicBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->mePicBox->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mePicBox.InitialImage")));
				this->mePicBox->Location = System::Drawing::Point(12, 101);
				this->mePicBox->Name = L"mePicBox";
				this->mePicBox->Size = System::Drawing::Size(220, 302);
				this->mePicBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->mePicBox->TabIndex = 12;
				this->mePicBox->TabStop = false;
				// 
				// ATKImageList
				// 
				this->ATKImageList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ATKImageList.ImageStream")));
				this->ATKImageList->TransparentColor = System::Drawing::Color::Transparent;
				this->ATKImageList->Images->SetKeyName(0, L"YBow.png");
				this->ATKImageList->Images->SetKeyName(1, L"YBuBing.png");
				this->ATKImageList->Images->SetKeyName(2, L"YQiBin.png");
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
				// panel1
				// 
				this->panel1->BackColor = System::Drawing::Color::Transparent;
				this->panel1->Controls->Add(this->RoundLB);
				this->panel1->Controls->Add(this->pictureBox2);
				this->panel1->Location = System::Drawing::Point(470, 0);
				this->panel1->Name = L"panel1";
				this->panel1->Size = System::Drawing::Size(332, 64);
				this->panel1->TabIndex = 15;
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
				// groupBox3
				// 
				this->groupBox3->BackColor = System::Drawing::Color::Transparent;
				this->groupBox3->Controls->Add(this->DDayBTN);
				this->groupBox3->Controls->Add(this->label8);
				this->groupBox3->Location = System::Drawing::Point(26, 467);
				this->groupBox3->Name = L"groupBox3";
				this->groupBox3->Size = System::Drawing::Size(99, 126);
				this->groupBox3->TabIndex = 16;
				this->groupBox3->TabStop = false;
				this->groupBox3->Text = L" ";
				// 
				// DDayBTN
				// 
				this->DDayBTN->BackColor = System::Drawing::Color::BurlyWood;
				this->DDayBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DDayBTN.BackgroundImage")));
				this->DDayBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->DDayBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->DDayBTN->Location = System::Drawing::Point(12, 34);
				this->DDayBTN->Margin = System::Windows::Forms::Padding(0);
				this->DDayBTN->Name = L"DDayBTN";
				this->DDayBTN->Size = System::Drawing::Size(80, 80);
				this->DDayBTN->TabIndex = 14;
				this->DDayBTN->Text = L" ";
				this->DDayBTN->UseVisualStyleBackColor = false;
				this->DDayBTN->Click += gcnew System::EventHandler(this, &Game::DDayBTN_Click);
				this->DDayBTN->MouseEnter += gcnew System::EventHandler(this, &Game::DDayBTN_MouseEnter);
				this->DDayBTN->MouseLeave += gcnew System::EventHandler(this, &Game::DDayBTN_MouseLeave);
				this->DDayBTN->MouseHover += gcnew System::EventHandler(this, &Game::DDayBTN_MouseHover);
				// 
				// label8
				// 
				this->label8->AutoSize = true;
				this->label8->BackColor = System::Drawing::Color::DarkGray;
				this->label8->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->label8->ForeColor = System::Drawing::Color::Navy;
				this->label8->Location = System::Drawing::Point(0, 0);
				this->label8->Name = L"label8";
				this->label8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->label8->Size = System::Drawing::Size(107, 26);
				this->label8->TabIndex = 6;
				this->label8->Text = L"诺曼底登陆";
				this->label8->Click += gcnew System::EventHandler(this, &Game::label8_Click);
				// 
				// groupBox4
				// 
				this->groupBox4->BackColor = System::Drawing::Color::Transparent;
				this->groupBox4->Controls->Add(this->breakFuBTN);
				this->groupBox4->Controls->Add(this->label7);
				this->groupBox4->Location = System::Drawing::Point(1123, 467);
				this->groupBox4->Name = L"groupBox4";
				this->groupBox4->Size = System::Drawing::Size(99, 126);
				this->groupBox4->TabIndex = 17;
				this->groupBox4->TabStop = false;
				this->groupBox4->Text = L" ";
				// 
				// breakFuBTN
				// 
				this->breakFuBTN->BackColor = System::Drawing::Color::BurlyWood;
				this->breakFuBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"breakFuBTN.BackgroundImage")));
				this->breakFuBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->breakFuBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->breakFuBTN->Location = System::Drawing::Point(12, 34);
				this->breakFuBTN->Margin = System::Windows::Forms::Padding(0);
				this->breakFuBTN->Name = L"breakFuBTN";
				this->breakFuBTN->Size = System::Drawing::Size(80, 80);
				this->breakFuBTN->TabIndex = 14;
				this->breakFuBTN->Text = L" ";
				this->breakFuBTN->UseVisualStyleBackColor = false;
				this->breakFuBTN->Click += gcnew System::EventHandler(this, &Game::breakFuBTN_Click);
				this->breakFuBTN->MouseEnter += gcnew System::EventHandler(this, &Game::breakFuBTN_MouseEnter);
				this->breakFuBTN->MouseLeave += gcnew System::EventHandler(this, &Game::breakFuBTN_MouseLeave);
				// 
				// label7
				// 
				this->label7->AutoSize = true;
				this->label7->BackColor = System::Drawing::Color::DarkGray;
				this->label7->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->label7->ForeColor = System::Drawing::Color::Navy;
				this->label7->Location = System::Drawing::Point(6, 0);
				this->label7->Name = L"label7";
				this->label7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->label7->Size = System::Drawing::Size(88, 26);
				this->label7->TabIndex = 6;
				this->label7->Text = L"破釜沉舟";
				// 
				// groupBox5
				// 
				this->groupBox5->BackColor = System::Drawing::Color::Transparent;
				this->groupBox5->Controls->Add(this->WaterlooBTN);
				this->groupBox5->Controls->Add(this->label9);
				this->groupBox5->Location = System::Drawing::Point(148, 467);
				this->groupBox5->Name = L"groupBox5";
				this->groupBox5->Size = System::Drawing::Size(99, 126);
				this->groupBox5->TabIndex = 18;
				this->groupBox5->TabStop = false;
				this->groupBox5->Text = L" ";
				// 
				// WaterlooBTN
				// 
				this->WaterlooBTN->BackColor = System::Drawing::Color::BurlyWood;
				this->WaterlooBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"WaterlooBTN.BackgroundImage")));
				this->WaterlooBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->WaterlooBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->WaterlooBTN->Location = System::Drawing::Point(12, 34);
				this->WaterlooBTN->Margin = System::Windows::Forms::Padding(0);
				this->WaterlooBTN->Name = L"WaterlooBTN";
				this->WaterlooBTN->Size = System::Drawing::Size(80, 80);
				this->WaterlooBTN->TabIndex = 14;
				this->WaterlooBTN->Text = L" ";
				this->WaterlooBTN->UseVisualStyleBackColor = false;
				this->WaterlooBTN->Click += gcnew System::EventHandler(this, &Game::WaterlooBTN_Click);
				this->WaterlooBTN->MouseEnter += gcnew System::EventHandler(this, &Game::WaterlooBTN_MouseEnter);
				this->WaterlooBTN->MouseLeave += gcnew System::EventHandler(this, &Game::WaterlooBTN_MouseLeave);
				// 
				// label9
				// 
				this->label9->AutoSize = true;
				this->label9->BackColor = System::Drawing::Color::DarkGray;
				this->label9->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->label9->ForeColor = System::Drawing::Color::Navy;
				this->label9->Location = System::Drawing::Point(0, 0);
				this->label9->Name = L"label9";
				this->label9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->label9->Size = System::Drawing::Size(107, 26);
				this->label9->TabIndex = 6;
				this->label9->Text = L"反攻滑铁卢";
				// 
				// groupBox6
				// 
				this->groupBox6->BackColor = System::Drawing::Color::Transparent;
				this->groupBox6->Controls->Add(this->BorrowBTN);
				this->groupBox6->Controls->Add(this->label10);
				this->groupBox6->Location = System::Drawing::Point(996, 467);
				this->groupBox6->Name = L"groupBox6";
				this->groupBox6->Size = System::Drawing::Size(99, 126);
				this->groupBox6->TabIndex = 19;
				this->groupBox6->TabStop = false;
				this->groupBox6->Text = L" ";
				// 
				// BorrowBTN
				// 
				this->BorrowBTN->BackColor = System::Drawing::Color::BurlyWood;
				this->BorrowBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BorrowBTN.BackgroundImage")));
				this->BorrowBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
				this->BorrowBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->BorrowBTN->Location = System::Drawing::Point(12, 34);
				this->BorrowBTN->Margin = System::Windows::Forms::Padding(0);
				this->BorrowBTN->Name = L"BorrowBTN";
				this->BorrowBTN->Size = System::Drawing::Size(80, 80);
				this->BorrowBTN->TabIndex = 14;
				this->BorrowBTN->Text = L" ";
				this->BorrowBTN->UseVisualStyleBackColor = false;
				this->BorrowBTN->Click += gcnew System::EventHandler(this, &Game::BorrowBTN_Click);
				this->BorrowBTN->MouseEnter += gcnew System::EventHandler(this, &Game::BorrowBTN_MouseEnter);
				this->BorrowBTN->MouseLeave += gcnew System::EventHandler(this, &Game::BorrowBTN_MouseLeave);
				// 
				// label10
				// 
				this->label10->AutoSize = true;
				this->label10->BackColor = System::Drawing::Color::DarkGray;
				this->label10->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->label10->ForeColor = System::Drawing::Color::Navy;
				this->label10->Location = System::Drawing::Point(12, 0);
				this->label10->Name = L"label10";
				this->label10->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->label10->Size = System::Drawing::Size(88, 26);
				this->label10->TabIndex = 6;
				this->label10->Text = L"草船借箭";
				// 
				// myWinLB
				// 
				this->myWinLB->BackColor = System::Drawing::Color::Transparent;
				this->myWinLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->myWinLB->ForeColor = System::Drawing::Color::Red;
				this->myWinLB->Location = System::Drawing::Point(40, 36);
				this->myWinLB->Name = L"myWinLB";
				this->myWinLB->Size = System::Drawing::Size(141, 62);
				this->myWinLB->TabIndex = 20;
				this->myWinLB->Text = L"+56";
				this->myWinLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->myWinLB->Click += gcnew System::EventHandler(this, &Game::myWinLB_Click);
				// 
				// enemyWinLB
				// 
				this->enemyWinLB->BackColor = System::Drawing::Color::Transparent;
				this->enemyWinLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->enemyWinLB->ForeColor = System::Drawing::Color::Red;
				this->enemyWinLB->Location = System::Drawing::Point(1019, 28);
				this->enemyWinLB->Name = L"enemyWinLB";
				this->enemyWinLB->Size = System::Drawing::Size(159, 73);
				this->enemyWinLB->TabIndex = 21;
				this->enemyWinLB->Text = L" +16";
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
				// myKeZhiLB
				// 
				this->myKeZhiLB->AutoSize = true;
				this->myKeZhiLB->BackColor = System::Drawing::Color::DarkGray;
				this->myKeZhiLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
				this->myKeZhiLB->ForeColor = System::Drawing::Color::DarkRed;
				this->myKeZhiLB->Location = System::Drawing::Point(139, 61);
				this->myKeZhiLB->Name = L"myKeZhiLB";
				this->myKeZhiLB->Size = System::Drawing::Size(46, 78);
				this->myKeZhiLB->TabIndex = 24;
				this->myKeZhiLB->Text = L"克\r\n制";
				this->myKeZhiLB->Visible = false;
				// 
				// enemyKeZhiLB
				// 
				this->enemyKeZhiLB->AutoSize = true;
				this->enemyKeZhiLB->BackColor = System::Drawing::Color::DarkGray;
				this->enemyKeZhiLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->enemyKeZhiLB->ForeColor = System::Drawing::Color::DarkRed;
				this->enemyKeZhiLB->Location = System::Drawing::Point(34, 61);
				this->enemyKeZhiLB->Name = L"enemyKeZhiLB";
				this->enemyKeZhiLB->Size = System::Drawing::Size(46, 78);
				this->enemyKeZhiLB->TabIndex = 25;
				this->enemyKeZhiLB->Text = L"克\r\n制";
				this->enemyKeZhiLB->Visible = false;
				// 
				// myHPBlock
				// 
				this->myHPBlock->BackColor = System::Drawing::Color::Transparent;
				this->myHPBlock->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->myHPBlock->Location = System::Drawing::Point(10, 709);
				this->myHPBlock->Name = L"myHPBlock";
				this->myHPBlock->Size = System::Drawing::Size(600, 40);
				this->myHPBlock->TabIndex = 26;
				this->myHPBlock->TabStop = false;
				this->myHPBlock->Click += gcnew System::EventHandler(this, &Game::pictureBox3_Click);
				// 
				// MyHPproBar
				// 
				this->MyHPproBar->BackColor = System::Drawing::Color::Red;
				this->MyHPproBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->MyHPproBar->ForeColor = System::Drawing::SystemColors::ButtonFace;
				this->MyHPproBar->Location = System::Drawing::Point(12, 709);
				this->MyHPproBar->Name = L"MyHPproBar";
				this->MyHPproBar->Size = System::Drawing::Size(300, 37);
				this->MyHPproBar->TabIndex = 27;
				this->MyHPproBar->Text = L"  300";
				this->MyHPproBar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				// 
				// enemyHPProBar
				// 
				this->enemyHPProBar->AllowDrop = true;
				this->enemyHPProBar->BackColor = System::Drawing::Color::DimGray;
				this->enemyHPProBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold));
				this->enemyHPProBar->Location = System::Drawing::Point(634, 709);
				this->enemyHPProBar->Name = L"enemyHPProBar";
				this->enemyHPProBar->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
				this->enemyHPProBar->Size = System::Drawing::Size(300, 37);
				this->enemyHPProBar->TabIndex = 28;
				this->enemyHPProBar->Text = L"   300";
				this->enemyHPProBar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				// 
				// pictureBox3
				// 
				this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
				this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->pictureBox3->Location = System::Drawing::Point(634, 709);
				this->pictureBox3->Name = L"pictureBox3";
				this->pictureBox3->Size = System::Drawing::Size(600, 40);
				this->pictureBox3->TabIndex = 29;
				this->pictureBox3->TabStop = false;
				this->pictureBox3->Click += gcnew System::EventHandler(this, &Game::pictureBox3_Click_1);
				// 
				// myMPProBar
				// 
				this->myMPProBar->BackColor = System::Drawing::Color::DodgerBlue;
				this->myMPProBar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->myMPProBar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->myMPProBar->ForeColor = System::Drawing::SystemColors::ButtonFace;
				this->myMPProBar->Location = System::Drawing::Point(12, 679);
				this->myMPProBar->Name = L"myMPProBar";
				this->myMPProBar->Size = System::Drawing::Size(220, 27);
				this->myMPProBar->TabIndex = 30;
				this->myMPProBar->Text = L"  300";
				this->myMPProBar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				// 
				// myNameLB
				// 
				this->myNameLB->BackColor = System::Drawing::Color::Coral;
				this->myNameLB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->myNameLB->Font = (gcnew System::Drawing::Font(L"华文行楷", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->myNameLB->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->myNameLB->Location = System::Drawing::Point(10, 405);
				this->myNameLB->Name = L"myNameLB";
				this->myNameLB->Size = System::Drawing::Size(252, 47);
				this->myNameLB->TabIndex = 31;
				this->myNameLB->Text = L"大汉帝国";
				this->myNameLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				// 
				// enemyNameLB
				// 
				this->enemyNameLB->BackColor = System::Drawing::Color::Coral;
				this->enemyNameLB->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				this->enemyNameLB->Font = (gcnew System::Drawing::Font(L"华文行楷", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->enemyNameLB->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
				this->enemyNameLB->Location = System::Drawing::Point(958, 406);
				this->enemyNameLB->Name = L"enemyNameLB";
				this->enemyNameLB->Size = System::Drawing::Size(264, 47);
				this->enemyNameLB->TabIndex = 32;
				this->enemyNameLB->Text = L"罗马帝国";
				this->enemyNameLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
				this->TipsLB->Text = L"会被 弓箭手 克制";
				this->TipsLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				this->TipsLB->Visible = false;
				// 
				// TipsPanel
				// 
				this->TipsPanel->AutoSize = true;
				this->TipsPanel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				this->TipsPanel->Controls->Add(this->TipsLB);
				this->TipsPanel->Location = System::Drawing::Point(277, 635);
				this->TipsPanel->Name = L"TipsPanel";
				this->TipsPanel->Size = System::Drawing::Size(695, 35);
				this->TipsPanel->TabIndex = 34;
				this->TipsPanel->Visible = false;
				// 
				// pictureBox4
				// 
				this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
				this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
				this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox4->Location = System::Drawing::Point(18, 597);
				this->pictureBox4->Name = L"pictureBox4";
				this->pictureBox4->Size = System::Drawing::Size(68, 65);
				this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox4->TabIndex = 35;
				this->pictureBox4->TabStop = false;
				// 
				// myATKtipsLB
				// 
				this->myATKtipsLB->AutoSize = true;
				this->myATKtipsLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->myATKtipsLB->ForeColor = System::Drawing::Color::Red;
				this->myATKtipsLB->Location = System::Drawing::Point(92, 635);
				this->myATKtipsLB->Name = L"myATKtipsLB";
				this->myATKtipsLB->Size = System::Drawing::Size(122, 28);
				this->myATKtipsLB->TabIndex = 36;
				this->myATKtipsLB->Text = L"攻击力：35";
				// 
				// enemyATKtipsLB
				// 
				this->enemyATKtipsLB->AutoSize = true;
				this->enemyATKtipsLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->enemyATKtipsLB->ForeColor = System::Drawing::Color::Red;
				this->enemyATKtipsLB->Location = System::Drawing::Point(1100, 659);
				this->enemyATKtipsLB->Name = L"enemyATKtipsLB";
				this->enemyATKtipsLB->Size = System::Drawing::Size(122, 28);
				this->enemyATKtipsLB->TabIndex = 38;
				this->enemyATKtipsLB->Text = L"攻击力：35";
				// 
				// pictureBox5
				// 
				this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
				this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
				this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				this->pictureBox5->Location = System::Drawing::Point(1020, 622);
				this->pictureBox5->Name = L"pictureBox5";
				this->pictureBox5->Size = System::Drawing::Size(68, 65);
				this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
				this->pictureBox5->TabIndex = 37;
				this->pictureBox5->TabStop = false;
				// 
				// myATKPanel
				// 
				this->myATKPanel->BackColor = System::Drawing::Color::Transparent;
				this->myATKPanel->Controls->Add(this->myATKTips);
				this->myATKPanel->Controls->Add(this->myATKPB);
				this->myATKPanel->Controls->Add(this->myKeZhiLB);
				this->myATKPanel->Location = System::Drawing::Point(349, 163);
				this->myATKPanel->Name = L"myATKPanel";
				this->myATKPanel->Size = System::Drawing::Size(195, 188);
				this->myATKPanel->TabIndex = 39;
				this->myATKPanel->Visible = false;
				// 
				// enemyATKPanel
				// 
				this->enemyATKPanel->BackColor = System::Drawing::Color::Transparent;
				this->enemyATKPanel->Controls->Add(this->enemyATKPB);
				this->enemyATKPanel->Controls->Add(this->enemyKeZhiLB);
				this->enemyATKPanel->Controls->Add(this->enemyATKTips);
				this->enemyATKPanel->Location = System::Drawing::Point(767, 163);
				this->enemyATKPanel->Name = L"enemyATKPanel";
				this->enemyATKPanel->Size = System::Drawing::Size(189, 188);
				this->enemyATKPanel->TabIndex = 40;
				this->enemyATKPanel->Visible = false;
				// 
				// Game
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::SystemColors::Info;
				this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				this->ClientSize = System::Drawing::Size(1234, 761);
				this->Controls->Add(this->enemyATKPanel);
				this->Controls->Add(this->myATKPanel);
				this->Controls->Add(this->enemyATKtipsLB);
				this->Controls->Add(this->pictureBox5);
				this->Controls->Add(this->myATKtipsLB);
				this->Controls->Add(this->pictureBox4);
				this->Controls->Add(this->TipsPanel);
				this->Controls->Add(this->enemyNameLB);
				this->Controls->Add(this->myNameLB);
				this->Controls->Add(this->myMPProBar);
				this->Controls->Add(this->pictureBox3);
				this->Controls->Add(this->enemyHPProBar);
				this->Controls->Add(this->MyHPproBar);
				this->Controls->Add(this->myHPBlock);
				this->Controls->Add(this->enemyWinLB);
				this->Controls->Add(this->myWinLB);
				this->Controls->Add(this->groupBox6);
				this->Controls->Add(this->groupBox5);
				this->Controls->Add(this->groupBox4);
				this->Controls->Add(this->groupBox3);
				this->Controls->Add(this->panel1);
				this->Controls->Add(this->mePicBox);
				this->Controls->Add(this->groupBox2);
				this->Controls->Add(this->groupBox1);
				this->Controls->Add(this->bowBox);
				this->Controls->Add(this->pictureBox1);
				this->Controls->Add(this->HistoryTextBox);
				this->Controls->Add(this->myLV);
				this->Controls->Add(this->menuStrip1);
				this->DoubleBuffered = true;
				this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
				this->MainMenuStrip = this->menuStrip1;
				this->MaximizeBox = false;
				this->Name = L"Game";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"Game";
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				this->menuStrip1->ResumeLayout(false);
				this->menuStrip1->PerformLayout();
				this->bowBox->ResumeLayout(false);
				this->bowBox->PerformLayout();
				this->groupBox1->ResumeLayout(false);
				this->groupBox1->PerformLayout();
				this->groupBox2->ResumeLayout(false);
				this->groupBox2->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mePicBox))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myATKPB))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->enemyATKPB))->EndInit();
				this->panel1->ResumeLayout(false);
				this->panel1->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				this->groupBox3->ResumeLayout(false);
				this->groupBox3->PerformLayout();
				this->groupBox4->ResumeLayout(false);
				this->groupBox4->PerformLayout();
				this->groupBox5->ResumeLayout(false);
				this->groupBox5->PerformLayout();
				this->groupBox6->ResumeLayout(false);
				this->groupBox6->PerformLayout();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->myHPBlock))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				this->TipsPanel->ResumeLayout(false);
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
				this->myATKPanel->ResumeLayout(false);
				this->myATKPanel->PerformLayout();
				this->enemyATKPanel->ResumeLayout(false);
				this->enemyATKPanel->PerformLayout();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
	private: System::Void BowPB_Click(System::Object^  sender, System::EventArgs^  e) {


	}
	private:  void Game::tipsBeforeGame()
		//游戏开始前的提示语句
	{
				  myKeZhiLB->BringToFront();
				  enemyKeZhiLB->BringToFront();
				  myATKtipsLB->Visible = true;
				  enemyATKtipsLB->Visible = true;
				 
				  
				  if (round_count == 0 )
				  {
					  myATKPanel->Visible = true;
					  enemyATKPanel->Visible = true;

					  myATKTips->Visible = true;
					  enemyATKTips->Visible = true;
				  }


				  /* QString c = QString::number(++round_count, 10);
				   QString cache = QString("\n\n第 %1 轮\n").arg(c);
				   ui->History->insertPlainText(cache);*/
				  this->RoundLB->Text = (round_count + 1).ToString();
				  HistoryTextBox->AppendText("\r\n\n\r\n\n第 " + (++round_count).ToString() + " 轮\r\n");
				  /*
				  textBox.ScrollToCaret();

				  this.textBox.Focus();//获取焦点
				  this.textBox.Select(this.textBox.TextLength, 0);//光标定位到文本最后
				  this.textBox.ScrollToCaret();//滚动到光标处
				  */
	}

	private: void enemyRand() {
				 /*
				 srand((unsigned)time(NULL));
				 enemy->AtkType = (rand() % 3) + 1;
				 MessageBox::Show((enemy->AtkType).ToString());
				 */

				 srand((unsigned)time(NULL));
				 for (int i = 0; i < 100; i++){
					 int i_arr = (rand() % 3) + 1;
					 int i_arrRand = (rand() % 4) - 2;

					 //	 MessageBox::Show("i_arr =" + (i_arr).ToString());
					 //	 MessageBox::Show("i_arrRand =" + (i_arrRand).ToString());



					 // arr.push_back(i_arr);
					 arr.at(i) = i_arr;
					 arrRand.at(i) = i_arrRand;

					 //arr[i] = i_arr;
					 // arrRand.push_back(i_arrRand);

					 //	 MessageBox::Show(k.ToString());
				 }
				 /*
				 for (int i = 0; i < 10; ++i)
				 {
				 MessageBox::Show("arr.at(0) " + (arr.at(i)).ToString());
				 // arr[i]
				 }
				 */
				 //	 printf("%d\n",);
	}

	private: void Game::endBattle(int Origin_MYHP)
		//交战之后的处理阶段函数
	{
				 // UpdateListView();

				 updateATKpicBox();
				 this->enemyATKTips->Text = (enemy->round_hurt).ToString();
				 this->myATKTips->Text = (my->round_hurt).ToString();


				 //				 ui->History->insertPlainText(QString("本回合 , "));

				 HistoryTextBox->AppendText("本回合 ,");

				 if (my->HP - Origin_MYHP > 0){
					 enemyWinLB->Visible = false;
					 myWinLB->Visible = true;
					 // ui->History->insertPlainText(QString("我军大胜！共占领地方%1座城池\n").arg(my.HP - Origin_MYHP));
					 HistoryTextBox->AppendText("我军大胜！共占领地方 " + (my->HP - Origin_MYHP).ToString() + " 座城池\r\n");
					 this->myWinLB->Text = "+" + (my->HP - Origin_MYHP).ToString();
					 MilitaryCourt(*my, *enemy);
				 }
				 else if (my->HP - Origin_MYHP == 0){
					 enemyWinLB->Visible = true;
					 myWinLB->Visible = true;
					 this->myWinLB->Text = "平";
					 this->enemyWinLB->Text = "平";

					 // ui->History->insertPlainText(QString("贼军和我军不相上下\n"));
					 HistoryTextBox->AppendText("贼军和我军不相上下\r\n");

				 }
				 else{
					 enemyWinLB->Visible = true;
					 myWinLB->Visible = false;
					 // this->myWinLB->Text = "+" + (my->HP - Origin_MYHP).ToString();
					 this->enemyWinLB->Text = "+" + (Origin_MYHP - my->HP).ToString();

					 // ui->History->insertPlainText(QString("天不助我！我方城池失陷%1座\n").arg(Origin_MYHP - my.HP));
					 HistoryTextBox->AppendText("天不助我...我方城池失陷 " + (Origin_MYHP - my->HP).ToString() + " 座\r\n");
					 MilitaryCourt(*enemy, *my);
				 }
				 UpdateListView();

				 my->isHardWin = false;
				 enemy->isHardWin = false;

				 HistoryTextBox->ScrollToCaret();

				 this->HistoryTextBox->Focus();//获取焦点
				 this->HistoryTextBox->Select(this->HistoryTextBox->TextLength, 0);//光标定位到文本最后
				 this->HistoryTextBox->ScrollToCaret();//滚动到光标处


				 /*
				 QScrollBar *scrollbar = ui->History->verticalScrollBar();
				 if (scrollbar)     {
				 scrollbar->setSliderPosition(scrollbar->maximum());
				 }

				 */
				 if (my->isAlive == false || enemy->isAlive == false){
					 endGame();
				 }


	}

	private: void Game::endGame()
		//结束游戏之后的记录
	{

				 GameRecord ^record = gcnew GameRecord;
				 // MessageBox::Show("sumHurt = " + (sumHurt).ToString());
				 record->userAccount = this->userAccount;
				 record->initiate(my->isAlive, round_count, sumATK, sumHurt);
				 record->ShowDialog();
				 //record->initiate(my->isAlive, round_count, sumATK, sumHurt);
				 /*
				 bool isWin; //是否胜利
				 int SumRound; //总回合数
				 int SumATK;    //总造成伤害
				 int SumHurt;    //总承受伤害
				 */
				 // record->show();

				 Close();
	}

	private: void Game::MilitaryCourt(Legend %winner, Legend %loser)
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

	private: System::Void BuBinBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 //步兵攻击方式
				 int Origin_MYHP = my->HP;//保存开战前的原领土面积
				 tipsBeforeGame();
				 enemy->AtkType = arr.at(round_count);
				 my->AtkType = BUBIN_ATK;
				 my->arrRand = arrRand.at(round_count);
				 // Legend %fuck = enemy;
				 HistoryTextBox->AppendText("我方派出步兵\r\n");
				 if (my->attack(*enemy)){
					 // ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt, 10)));
					 HistoryTextBox->Text += ("攻下敌军" + (my->round_hurt).ToString() + " 座城池！\r\n");
				 }
				 else {
					 // ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
					 HistoryTextBox->Text += ("敌军的城墙久攻不下，暂时退军\r\n");
				 }
				 sumATK += my->round_hurt;
				 if (enemy->attack(*my)){
					 //ui->History->insertPlainText(QString("敌军夺取我方 %1 座城池！\n").arg(QString::number(enemy.round_hurt, 10)));
					 HistoryTextBox->Text += ("敌军夺取我方" + (enemy->round_hurt).ToString() + " 座城池！\r\n");
				 }
				 else {
					 // ui->History->insertPlainText("吾军城池坚不可摧，敌军已闻风丧胆而去\n");
					 HistoryTextBox->Text += ("吾军城池坚不可摧，敌军已闻风丧胆而去\r\n");
				 }
				 sumHurt += enemy->round_hurt;
				 endBattle(Origin_MYHP);
	}
	private: System::Void BowBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 //弓箭手攻击方式

				 int Origin_MYHP = my->HP;//保存开战前的原领土面积
				 tipsBeforeGame();
				 enemy->AtkType = arr.at(round_count);
				 my->AtkType = BOW_ATK;
				 my->arrRand = arrRand.at(round_count);
				 // Legend %fuck = enemy;
				 HistoryTextBox->AppendText("我方派出弓箭手\r\n");
				 if (my->attack(*enemy)){
					 // ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt, 10)));
					 HistoryTextBox->Text += ("攻下敌军" + (my->round_hurt).ToString() + " 座城池！\r\n");
				 }
				 else {
					 // ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
					 HistoryTextBox->Text += ("敌军的城墙久攻不下，暂时退军\r\n");
				 }
				 sumATK += my->round_hurt;
				 if (enemy->attack(*my)){
					 //ui->History->insertPlainText(QString("敌军夺取我方 %1 座城池！\n").arg(QString::number(enemy.round_hurt, 10)));
					 HistoryTextBox->Text += ("敌军夺取我方" + (enemy->round_hurt).ToString() + " 座城池！\r\n");
				 }
				 else {
					 // ui->History->insertPlainText("吾军城池坚不可摧，敌军已闻风丧胆而去\n");
					 HistoryTextBox->Text += ("吾军城池坚不可摧，敌军已闻风丧胆而去\r\n");
				 }
				 sumHurt += enemy->round_hurt;
				 endBattle(Origin_MYHP);
	}

	private: System::Void QiBinBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 //骑兵攻击方式
				 int Origin_MYHP = my->HP;//保存开战前的原领土面积
				 tipsBeforeGame();
				 enemy->AtkType = arr.at(round_count);
				 my->AtkType = QIBIN_ATK;
				 my->arrRand = arrRand.at(round_count);
				 // Legend %fuck = enemy;
				 HistoryTextBox->AppendText("我方派出骑兵\r\n");
				 if (my->attack(*enemy)){
					 // ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt, 10)));
					 HistoryTextBox->Text += ("攻下敌军" + (my->round_hurt).ToString() + " 座城池！\r\n");
				 }
				 else {
					 // ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
					 HistoryTextBox->Text += ("敌军的城墙久攻不下，暂时退军\r\n");
				 }
				 sumATK += my->round_hurt;
				 if (enemy->attack(*my)){
					 //ui->History->insertPlainText(QString("敌军夺取我方 %1 座城池！\n").arg(QString::number(enemy.round_hurt, 10)));
					 HistoryTextBox->Text += ("敌军夺取我方" + (enemy->round_hurt).ToString() + " 座城池！\r\n");
				 }
				 else {
					 // ui->History->insertPlainText("吾军城池坚不可摧，敌军已闻风丧胆而去\n");
					 HistoryTextBox->Text += ("吾军城池坚不可摧，敌军已闻风丧胆而去\r\n");
				 }
				 sumHurt += enemy->round_hurt;
				 endBattle(Origin_MYHP);
	}
			 public:
				 void OnTimedEvent(System::Object^  sender, System::Timers::ElapsedEventArgs^  e) {
	


					 if (isLeftOrRight)
					 {
						 myATKPanel->Left += 15;
						 enemyATKPanel->Left -= 15;
					 }
					 else
					 {
						 myATKPanel->Left -= 15;
						 enemyATKPanel->Left += 15;
					 }


					 if (++secondsOfAtkPBTimer > 10)
					 {
						 secondsOfAtkPBTimer = 0;
						 isLeftOrRight = !isLeftOrRight;
					 }

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


				//		MessageBox::Show((arr.at(round_count)).ToString());


				if (arr.at(round_count) == BOW_ATK)
				{
					this->enemyATKPB->ImageLocation = BOWLOCATION;

				}
				else if (arr.at(round_count) == BUBIN_ATK){

					this->enemyATKPB->ImageLocation = BUBINLOCATION;

				}
				else if (arr.at(round_count) == QIBIN_ATK)
				{
					this->enemyATKPB->ImageLocation = QIBINLOCATION;
				}
				else
				{
					MessageBox::Show("WTF");
				}

				MyHPproBar->Width = SUMHPBARWIDTH*((my->HP)*1.0 / (startHP)*1.0);
				enemyHPProBar->Width = SUMHPBARWIDTH - MyHPproBar->Width;

				//MyHPproBar->Text = (MyHPproBar->Width).ToString();
				//enemyHPProBar->Text = (enemyHPProBar->Width).ToString();


				//this->enemyATKPB->ImageLocation = "Y.png";

				/*myATKPB->Width = 80;
				myATKPB->Height = 80;*/


				//this->enemyATKPB->Image = ATKImageList->Images[enemy->AtkType];

	}
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void RecordClick(System::Object^  sender, System::EventArgs^  e) {
				 this->HistoryTextBox->Visible = !(this->HistoryTextBox->Visible);
	}
	private: System::Void DDayBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 const int THINREDMP = 15;//消耗的民心值
				 const int THINREDHP = 30;//增长的领土面积

				 if (my->MP < THINREDMP)
				 {
					 HistoryTextBox->AppendText("我们的民心小于"
												+ (THINREDMP).ToString()
												+ "，请重新选择\r\n");
					 return;
				 }

				 my->MP -= THINREDMP;
				 my->HP -= 8;
				 enemy->HP += 8;


				 int Origin_MYHP = my->HP;//保存开战前的原领土面积
				 tipsBeforeGame();
				 enemy->AtkType = arr.at(round_count);
				 my->AtkType = DDAY_ATK;
				 my->arrRand = arrRand.at(round_count);
				 // Legend %fuck = enemy;
				 HistoryTextBox->AppendText("我方使用了“诺曼底登陆”，消耗了"
											+ (THINREDMP).ToString()
											+ "点民心和8座城池\r\n");
				 
				 my->ATK += enemy->DFS;
				 if (my->attack(*enemy)){
					 // ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt, 10)));
					 HistoryTextBox->Text += ("攻下敌军" + (my->round_hurt).ToString() + " 座城池！\r\n");
				 }
				 else {
					 // ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
					 HistoryTextBox->Text += ("敌军的城墙久攻不下，暂时退军\r\n");
				 }
				 my->ATK -= enemy->DFS;
				 sumATK += my->round_hurt;

				 if (enemy->attack(*my)){
					 //ui->History->insertPlainText(QString("敌军夺取我方 %1 座城池！\n").arg(QString::number(enemy.round_hurt, 10)));
					 HistoryTextBox->Text += ("敌军夺取我方" + (enemy->round_hurt).ToString() + " 座城池！\r\n");
				 }
				 else {
					 // ui->History->insertPlainText("吾军城池坚不可摧，敌军已闻风丧胆而去\n");
					 HistoryTextBox->Text += ("吾军城池坚不可摧，敌军已闻风丧胆而去\r\n");
				 }
				 sumHurt += enemy->round_hurt;
				 endBattle(Origin_MYHP);
	}
	private: System::Void pictureBox3_Click_1(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void BowBTN_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 TipsLB->Text = "被 骑兵 克制";
				 TipsLB->ForeColor = Color::OrangeRed;
				 TipsLB->Visible = true;
				 TipsPanel->Visible = true;

	}
	private: System::Void BowBTN_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 TipsLB->Visible = false;
				 TipsPanel->Visible = false;
	}
	private: System::Void BuBinBTN_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 TipsLB->Text = "被 弓箭手 克制";
				 TipsLB->ForeColor = Color::OrangeRed;
				 TipsLB->Visible = true;
				 TipsPanel->Visible = true;
	}

	private: System::Void BuBinBTN_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 TipsLB->Visible = false;
				 TipsPanel->Visible = false;
	}


	private: System::Void QiBinBTN_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 TipsLB->Text = "被 步兵 克制";
				 TipsLB->ForeColor = Color::OrangeRed;
				 TipsLB->Visible = true;
				 TipsPanel->Visible = true;
	}
	private: System::Void QiBinBTN_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 TipsLB->Visible = false;
				 TipsPanel->Visible = false;
	}
	private: System::Void DDayBTN_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
				 if (my->MP > DDAY_MP)
				 {
					 TipsLB->Text = "-" + (DDAY_MP).ToString()+"民心,-8领土  本回合无视对方防御，进行攻击";
					 TipsLB->ForeColor = Color::MidnightBlue;
					 TipsLB->Visible = true;
					 TipsPanel->Visible = true;
				 }
				 else
				 {
					 TipsLB->Text = "需要" + (DDAY_MP).ToString() + "民心 无法进行使用";
					 TipsLB->ForeColor = Color::DarkGray;
					 TipsLB->Visible = true;
					 TipsPanel->Visible = true;

				 }

				
	}
	private: System::Void DDayBTN_MouseHover(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void DDayBTN_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
				 TipsLB->Visible = false;
				 TipsPanel->Visible = false;
	}
	private: System::Void myWinLB_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void WaterlooBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 int THINREDHP = 0.3*startMyHP;

				 if (my->HP > THINREDHP)
				 {
					 HistoryTextBox->AppendText("领土面积高于"
												+ (THINREDHP).ToString()
												+ "，请重新选择\r\n");

					 return;
				 }

				 my->ATK *= 2;

				
				 int Origin_MYHP = my->HP;//保存开战前的原领土面积
				 tipsBeforeGame();
				 enemy->AtkType = arr.at(round_count);
				 my->AtkType = WATERLOO_ATK;
				 my->arrRand = arrRand.at(round_count);
				 // Legend %fuck = enemy;
				 HistoryTextBox->AppendText("我方使用了“反攻滑铁卢”，消耗了"
											+ (WATERLOO_MP).ToString()
											+ "民心\r\n");
				 my->ATK += enemy->DFS;
				 if (my->attack(*enemy)){
					 // ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt, 10)));
					 HistoryTextBox->Text += ("攻下敌军" + (my->round_hurt).ToString() + " 座城池！\r\n");
				 }
				 else {
					 // ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
					 HistoryTextBox->Text += ("敌军的城墙久攻不下，暂时退军\r\n");
				 }
				 my->ATK -= enemy->DFS;
				 sumATK += my->round_hurt;

				 if (enemy->attack(*my)){
					 //ui->History->insertPlainText(QString("敌军夺取我方 %1 座城池！\n").arg(QString::number(enemy.round_hurt, 10)));
					 HistoryTextBox->Text += ("敌军夺取我方" + (enemy->round_hurt).ToString() + " 座城池！\r\n");
				 }
				 else {
					 // ui->History->insertPlainText("吾军城池坚不可摧，敌军已闻风丧胆而去\n");
					 HistoryTextBox->Text += ("吾军城池坚不可摧，敌军已闻风丧胆而去\r\n");
				 }
				 sumHurt += enemy->round_hurt;
				 endBattle(Origin_MYHP);
	}
private: System::Void WaterlooBTN_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 int THINREDHP = 0.3*startMyHP;

			 if (my->HP < THINREDHP)
			 {
				 TipsLB->Text = ("-" + (WATERLOO_MP).ToString() + "点民心" + "当领土面积低于"
								 + (THINREDHP).ToString()
								 + "，使用反攻滑铁卢获得永久两倍攻击力\r\n");
				 TipsLB->ForeColor = Color::MidnightBlue;
				 TipsLB->Visible = true;
				 TipsPanel->Visible = true;
			 }
			 else
			 {
				 TipsLB->Text = ("领土面积高于"
								 + (THINREDHP).ToString()
								 + "或民心低于" + (WATERLOO_MP).ToString() + "，不可以使用\r\n");
				 TipsLB->ForeColor = Color::DarkGray;
				 TipsLB->Visible = true;
				 TipsPanel->Visible = true;

			 }
}


private: System::Void WaterlooBTN_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 TipsLB->Visible = false;
			 TipsPanel->Visible = false;
}

private: System::Void BorrowBTN_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if (my->MP > CAOCHUAN_MP)
			 {
				 TipsLB->Text = "-" + (CAOCHUAN_MP).ToString() + "民心  使得对方降低7点攻击,我方攻击力+3，持续3回合";
				 TipsLB->ForeColor = Color::MidnightBlue;
				 TipsLB->Visible = true;
				 TipsPanel->Visible = true;
			 }
			 else
			 {
				 TipsLB->Text = "需要" + (CAOCHUAN_MP).ToString() + "民心 无法进行使用";
				 TipsLB->ForeColor = Color::DarkGray;
				 TipsLB->Visible = true;
				 TipsPanel->Visible = true;
			 }
}

private: System::Void BorrowBTN_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 TipsLB->Visible = false;
			 TipsPanel->Visible = false;
}


private: System::Void BorrowBTN_Click(System::Object^  sender, System::EventArgs^  e) {
			 const int THINREDMP = 15;//消耗的民心值
			 const int THINREDHP = 30;//增长的领土面积

			 if (my->MP < THINREDMP)
			 {
				 HistoryTextBox->AppendText("我们的民心小于"
											+ (CAOCHUAN_MP).ToString()
											+ "，请重新选择\r\n");
				 return;
			 }

			 my->MP -= CAOCHUAN_MP;

			 int Origin_MYHP = my->HP;//保存开战前的原领土面积
			 tipsBeforeGame();
			 enemy->AtkType = arr.at(round_count);
			 my->AtkType = CAOCHUAN_ATK;
			 my->arrRand = arrRand.at(round_count);
			 // Legend %fuck = enemy;
			 HistoryTextBox->AppendText("我方使用了“草船借箭”，消耗了"
										+ (CAOCHUAN_MP).ToString()
										+ "民心\r\n");
			 my->ATK += enemy->DFS;
			 if (my->attack(*enemy)){
				 // ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt, 10)));
				 HistoryTextBox->Text += ("攻下敌军" + (my->round_hurt).ToString() + " 座城池！\r\n");
			 }
			 else {
				 // ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
				 HistoryTextBox->Text += ("敌军的城墙久攻不下，暂时退军\r\n");
			 }
			 my->ATK -= enemy->DFS;
			 sumATK += my->round_hurt;

			 if (enemy->attack(*my)){
				 //ui->History->insertPlainText(QString("敌军夺取我方 %1 座城池！\n").arg(QString::number(enemy.round_hurt, 10)));
				 HistoryTextBox->Text += ("敌军夺取我方" + (enemy->round_hurt).ToString() + " 座城池！\r\n");
			 }
			 else {
				 // ui->History->insertPlainText("吾军城池坚不可摧，敌军已闻风丧胆而去\n");
				 HistoryTextBox->Text += ("吾军城池坚不可摧，敌军已闻风丧胆而去\r\n");
			 }
			 sumHurt += enemy->round_hurt;
			 endBattle(Origin_MYHP);
}
private: System::Void breakFuBTN_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 if (my->MP > POFU_MP)
			 {
				 TipsLB->Text = "-" + (POFU_MP).ToString() + "民心  本回合无视对方防御，进行攻击";
				 TipsLB->ForeColor = Color::MidnightBlue;
				 TipsLB->Visible = true;
				 TipsPanel->Visible = true;
			 }
			 else
			 {
				 TipsLB->Text = "需要" + (POFU_MP).ToString() + "民心 无法进行使用";
				 TipsLB->ForeColor = Color::DarkGray;
				 TipsLB->Visible = true;
				 TipsPanel->Visible = true;

			 }
}
private: System::Void breakFuBTN_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 TipsLB->Visible = false;
			 TipsPanel->Visible = false;
}
private: System::Void breakFuBTN_Click(System::Object^  sender, System::EventArgs^  e) {
			 const int THINREDMP = 15;//消耗的民心值
			 const int THINREDHP = 30;//增长的领土面积

			 if (my->MP < THINREDMP)
			 {
				 HistoryTextBox->AppendText("我们的民心小于"
											+ (POFU_MP).ToString()
											+ "，请重新选择\r\n");
				 return;
			 }

			 my->MP -= POFU_MP;

			 int Origin_MYHP = my->HP;//保存开战前的原领土面积
			 tipsBeforeGame();
			 enemy->AtkType = arr.at(round_count);
			 my->AtkType = POFU_ATK;
			 my->arrRand = arrRand.at(round_count);
			 // Legend %fuck = enemy;
			 HistoryTextBox->AppendText("我方使用了“草船借箭”，消耗了"
										+ (POFU_MP).ToString()
										+ "民心\r\n");
			 my->ATK += enemy->DFS;
			 if (my->attack(*enemy)){
				 // ui->History->insertPlainText(QString("我们攻下敌军 %1 座城池！\n").arg(QString::number(my.round_hurt, 10)));
				 HistoryTextBox->Text += ("攻下敌军" + (my->round_hurt).ToString() + " 座城池！\r\n");
			 }
			 else {
				 // ui->History->insertPlainText("敌军的城墙久攻不下，暂时退军\n");
				 HistoryTextBox->Text += ("敌军的城墙久攻不下，暂时退军\r\n");
			 }
			 my->ATK -= enemy->DFS;
			 sumATK += my->round_hurt;

			 if (enemy->attack(*my)){
				 //ui->History->insertPlainText(QString("敌军夺取我方 %1 座城池！\n").arg(QString::number(enemy.round_hurt, 10)));
				 HistoryTextBox->Text += ("敌军夺取我方" + (enemy->round_hurt).ToString() + " 座城池！\r\n");
			 }
			 else {
				 // ui->History->insertPlainText("吾军城池坚不可摧，敌军已闻风丧胆而去\n");
				 HistoryTextBox->Text += ("吾军城池坚不可摧，敌军已闻风丧胆而去\r\n");
			 }
			 sumHurt += enemy->round_hurt;
			 endBattle(Origin_MYHP);
}
};
}
