#pragma once
#include<cliext/vector>
#include "Legend.h"
#include "Game.h"
#include "ctime"
#include "cstdlib"
#include "User.h"
#include "MutiGame.h"
#define TIMER_CNTDWN 5 //管理倒计时秒数的宏
#define OFFICIAL_SUMLEGENGS 4 //官方帝国个数


namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cliext;
	using namespace System::Timers;
	//[STAThreadAttribute]

	/// <summary>
	/// LegendsView 摘要
	/// </summary>
	public ref class LegendsView : public System::Windows::Forms::Form {
	public:
		LegendsView(void) {
			InitializeComponent();
			timerProgressBar->Maximum = TIMER_CNTDWN;
			game = gcnew Game;
			isMutiMode = false; //默认状态下多人模式关闭

			//
			//TODO:  在此处添加构造函数代码
			//	Legends = gcnew  vector<Legend^>;
			//updateListView();

			//
		}

		void InitializeWindows()
			///外部调用此界面真正的初始化并展示界面的函数
		{
			testBTN->Visible = false;  //测试按钮是否可见
			updateListView();

			secondsCNT = 0;
			okButton->Visible = false;

			//如果view可以编辑，启用
			if (setViewEditEnable)
			{
				isSelected = false;
				focusListView(0);
				okButton->Visible = true;

			}
			else
			{
				isSelected = true;
				okButton->Visible = true;
				okButton->Text = "确认进入游戏";
				srand((unsigned)time(NULL));
				myRandNums = rand() % (SumLegends + userAccount->SumLegends); //保存随机到的敌军序号
				//MessageBox::Show(myRandNums.ToString());
				focusListView(myRandNums);
			}


			aTimer = gcnew System::Timers::Timer(20000);

			aTimer->Elapsed += gcnew System::Timers::ElapsedEventHandler(this, &LegendsView::OnTimedEvent);
			aTimer->Interval = 1000;
			aTimer->AutoReset = true;
			aTimer->Enabled = true;

			//aTimer->Elapsed += gcnew System::Timers::ElapsedEventHandler(this, &HOL_CSharp::LegendsView::OnElapsed);
			this->ShowDialog();
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~LegendsView() {
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  LegendsListView;
	protected:

	private: System::Windows::Forms::ColumnHeader^  name;
	private: System::Windows::Forms::ColumnHeader^  HP;
	private: System::Windows::Forms::ColumnHeader^  ATK;
	private: System::Windows::Forms::ColumnHeader^  DFS;
	private: System::Windows::Forms::Button^  testBTN;
	private: System::Windows::Forms::Button^  okButton;
	private: System::Windows::Forms::Button^  backButton;
	private: System::Windows::Forms::GroupBox^  TimerGroupBox;
	private: System::Windows::Forms::ProgressBar^  timerProgressBar;
	private: System::Windows::Forms::Label^  infoLine;
	private: System::Windows::Forms::ImageList^  imageCacheList;




	private: System::Windows::Forms::ColumnHeader^  MP;


	public: void updateListView() {
				LegendsListView->Items->Clear();
				this->LegendsListView->BeginUpdate();
				// updatePets();
				for (int i = 0; i < SumLegends; i++)
				{

					System::Windows::Forms::ListViewItem ^lvi = gcnew System::Windows::Forms::ListViewItem;
					lvi->Text = Legends.at(i)->name;

					lvi->SubItems->Add((Legends.at(i)->HP).ToString());
					lvi->SubItems->Add((Legends.at(i)->ATK).ToString());
					lvi->SubItems->Add((Legends.at(i)->DFS).ToString());
					lvi->SubItems->Add((Legends.at(i)->MP).ToString());

					LegendsListView->Items->Add(lvi);

				}


				for (int i = 0; i < userAccount->SumLegends; i++)
				{

					System::Windows::Forms::ListViewItem ^lvi = gcnew System::Windows::Forms::ListViewItem;
					lvi->Text = userAccount->Legends.at(i)->name;

					lvi->SubItems->Add((userAccount->Legends.at(i)->HP).ToString());
					lvi->SubItems->Add((userAccount->Legends.at(i)->ATK).ToString());
					lvi->SubItems->Add((userAccount->Legends.at(i)->DFS).ToString());
					lvi->SubItems->Add((userAccount->Legends.at(i)->MP).ToString());

					LegendsListView->Items->Add(lvi);

				}

				this->LegendsListView->EndUpdate();
	}

	private: void focusListView(int i) {
				 //	 MessageBox::Show("进入 focusListView");


				 if (LegendsListView->Items->Count > 0)
				 {
					 LegendsListView->Items[i]->Selected = true;
					 LegendsListView->FocusedItem = LegendsListView->Items[i];
					 LegendsListView->Select();

				 }
				 //	 MessageBox::Show("退出 focusListView");

	}




			 //所有初始变量均放置于此
	public:  vector<Legend^> Legends;	//保存从SystemWindow页面中传回来的英雄类
	public: property int SumLegends; //帝国的总数量
	private:  System::Timers::Timer ^aTimer;
			  int secondsCNT;
			  bool isSelected;  //若已经选择了表格的一项即为真
			  bool isBack;     //若点击了返回即为真
			  int myRandNums; //我方随机序号，决定英雄
			  Game ^game = gcnew Game;
			  static Random^ rnd = gcnew Random();

	public: User^ userAccount;   //用户登录的账号信息



	public:
		bool setEditorVisible;  //四个编辑菜单是否可见
		bool setProcessVisible; //进度条是否可见
		bool setInfoLineVisible;    //倒计时文字提示是否可见
		bool setViewEditEnable; //英雄表格是否可用
		bool setOkButtonVisible; //确定按钮是否可用
		bool setBackButtonVisible; //返回按钮是否可用
		bool isMutiMode;  //是否是多人模式
	private: System::ComponentModel::IContainer^  components;
	public:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


	public:
		void OnTimedEvent(System::Object^  sender, System::Timers::ElapsedEventArgs^  e) {


			//System::Windows::Forms::MessageBox::Show(setViewEditEnable.ToString() );
			secondsCNT++;
			timerProgressBar->Value = secondsCNT;

			if (secondsCNT <= TIMER_CNTDWN && setViewEditEnable == true){
				infoLine->Text = "请在 " + (TIMER_CNTDWN - secondsCNT + 1).ToString() + " 秒内选择英雄否则将自动返回主菜单！";
				//	this->Close();

			}

			else if (secondsCNT <= TIMER_CNTDWN && setViewEditEnable == false){
				//	ui->infoLine->setText(QString("将在 %1 秒后自动进入游戏").arg(TIMER_CNTDWN - secondsCNT));
				focusListView(myRandNums);
				infoLine->Text = "将在 " + (TIMER_CNTDWN - secondsCNT + 1).ToString() + " 秒后自动进入游戏！";
			}

			if (secondsCNT > TIMER_CNTDWN - 1 && isSelected == false)
			{
				System::Windows::Forms::MessageBox::Show("未及时选择\n将返回主菜单"
														 , "警告",
														 System::Windows::Forms::MessageBoxButtons::OK,
														 System::Windows::Forms::MessageBoxIcon::Warning);
				aTimer->Close();
				this->Close();
			}


			//else if (secondsCNT > TIMER_CNTDWN - 1 && isSelected == true)
			//{
			//	MessageBox::Show("进入随机模式 ");
			//	BrawlGameMode();

			//	this->Close();


			//}

			//if (setViewEditEnable == false && secondsCNT > TIMER_CNTDWN){
			//	System::Windows::Forms::MessageBox::Show("退出");
			//	isBack = false; //若表格禁止点击，过时未点
			//	isSelected = true;
			//	this->Close();
			//}
			//else if (setViewEditEnable == true && secondsCNT > TIMER_CNTDWN){
			//	System::Windows::Forms::MessageBox::Show("退出2");
			//	isBack = true;
			//	isSelected = false; //若表格可以点击，过时未点击
			//	this->Close();
			//}
			//System::Windows::Forms::MessageBox::Show(secondsCNT.ToString() + "退出OnTimedEvent");


		}


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void) {
			this->components = (gcnew System::ComponentModel::Container());
			this->LegendsListView = (gcnew System::Windows::Forms::ListView());
			this->name = (gcnew System::Windows::Forms::ColumnHeader());
			this->HP = (gcnew System::Windows::Forms::ColumnHeader());
			this->ATK = (gcnew System::Windows::Forms::ColumnHeader());
			this->DFS = (gcnew System::Windows::Forms::ColumnHeader());
			this->MP = (gcnew System::Windows::Forms::ColumnHeader());
			this->testBTN = (gcnew System::Windows::Forms::Button());
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->TimerGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->infoLine = (gcnew System::Windows::Forms::Label());
			this->timerProgressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->imageCacheList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->TimerGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// LegendsListView
			// 
			this->LegendsListView->BackColor = System::Drawing::Color::PeachPuff;
			this->LegendsListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->name, this->HP,
					this->ATK, this->DFS, this->MP
			});
			this->LegendsListView->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->LegendsListView->ForeColor = System::Drawing::Color::OrangeRed;
			this->LegendsListView->FullRowSelect = true;
			this->LegendsListView->GridLines = true;
			this->LegendsListView->Location = System::Drawing::Point(47, 138);
			this->LegendsListView->Name = L"LegendsListView";
			this->LegendsListView->Size = System::Drawing::Size(609, 254);
			this->LegendsListView->SmallImageList = this->imageCacheList;
			this->LegendsListView->TabIndex = 0;
			this->LegendsListView->UseCompatibleStateImageBehavior = false;
			this->LegendsListView->View = System::Windows::Forms::View::Details;
			this->LegendsListView->SelectedIndexChanged += gcnew System::EventHandler(this, &LegendsView::listView1_SelectedIndexChanged);
			// 
			// name
			// 
			this->name->Text = L"帝国";
			this->name->Width = 160;
			// 
			// HP
			// 
			this->HP->Text = L"领土面积";
			this->HP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->HP->Width = 130;
			// 
			// ATK
			// 
			this->ATK->Text = L"军队";
			this->ATK->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ATK->Width = 100;
			// 
			// DFS
			// 
			this->DFS->Text = L"守备";
			this->DFS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DFS->Width = 90;
			// 
			// MP
			// 
			this->MP->Text = L"民心";
			this->MP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MP->Width = 90;
			// 
			// testBTN
			// 
			this->testBTN->BackColor = System::Drawing::Color::OrangeRed;
			this->testBTN->Location = System::Drawing::Point(665, 484);
			this->testBTN->Name = L"testBTN";
			this->testBTN->Size = System::Drawing::Size(58, 33);
			this->testBTN->TabIndex = 1;
			this->testBTN->Text = L"用于测试的button";
			this->testBTN->UseVisualStyleBackColor = false;
			this->testBTN->Click += gcnew System::EventHandler(this, &LegendsView::testBTN_Click);
			// 
			// okButton
			// 
			this->okButton->AutoSize = true;
			this->okButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
																		 static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->okButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okButton->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->okButton->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->okButton->Location = System::Drawing::Point(158, 411);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(381, 61);
			this->okButton->TabIndex = 2;
			this->okButton->Text = L"确定";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &LegendsView::okButton_Click);
			// 
			// backButton
			// 
			this->backButton->AutoSize = true;
			this->backButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
																		   static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->backButton->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->backButton->Location = System::Drawing::Point(261, 478);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(171, 41);
			this->backButton->TabIndex = 3;
			this->backButton->Text = L"返回";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &LegendsView::backButton_Click);
			// 
			// TimerGroupBox
			// 
			this->TimerGroupBox->Controls->Add(this->infoLine);
			this->TimerGroupBox->Controls->Add(this->timerProgressBar);
			this->TimerGroupBox->Location = System::Drawing::Point(47, 25);
			this->TimerGroupBox->Name = L"TimerGroupBox";
			this->TimerGroupBox->Size = System::Drawing::Size(609, 85);
			this->TimerGroupBox->TabIndex = 4;
			this->TimerGroupBox->TabStop = false;
			this->TimerGroupBox->Text = L" ";
			// 
			// infoLine
			// 
			this->infoLine->AutoSize = true;
			this->infoLine->Location = System::Drawing::Point(18, 17);
			this->infoLine->Name = L"infoLine";
			this->infoLine->Size = System::Drawing::Size(11, 12);
			this->infoLine->TabIndex = 1;
			this->infoLine->Text = L" ";
			// 
			// timerProgressBar
			// 
			this->timerProgressBar->Location = System::Drawing::Point(6, 40);
			this->timerProgressBar->Name = L"timerProgressBar";
			this->timerProgressBar->Size = System::Drawing::Size(597, 31);
			this->timerProgressBar->TabIndex = 0;
			// 
			// imageCacheList
			// 
			this->imageCacheList->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageCacheList->ImageSize = System::Drawing::Size(16, 30);
			this->imageCacheList->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// LegendsView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->ClientSize = System::Drawing::Size(725, 529);
			this->Controls->Add(this->TimerGroupBox);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->okButton);
			this->Controls->Add(this->testBTN);
			this->Controls->Add(this->LegendsListView);
			this->Name = L"LegendsView";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LegendsView";
			this->TimerGroupBox->ResumeLayout(false);
			this->TimerGroupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void testBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 updateListView();
	}
	private: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 BrawlGameMode();

	}
	private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 aTimer->Close();
				 this->Close();
	}
	private:  void BrawlGameMode()
	{
				 aTimer->Close();
				 Legend ^selectedLegend = nullptr;

				 //做两个复制，防止被污染
				 Legend ^enemyLegend = gcnew Legend;
				 Legend ^myLegend = gcnew Legend;

				 int IndexOfMyLegends = 0, IndexOfEnemyLegends = 0;
				
				 IndexOfEnemyLegends = rnd->Next(0, SumLegends + userAccount->SumLegends);

				 if (setViewEditEnable)
				 {
					 if (LegendsListView->FocusedItem != (ListViewItem ^)nullptr)
					 {
						 LegendsListView->FocusedItem->BackColor = SystemColors::Highlight;
						 LegendsListView->FocusedItem->ForeColor = Color::White;
					 }

					 for each (Legend^ cache in Legends) {
						 	 if (cache->name == LegendsListView->FocusedItem->Text)
						 	 {
						 		 // MessageBox::Show("fuck");
						 		 selectedLegend = cache;
						 		 break;
						 	 }

						  }

						  if (selectedLegend == nullptr)
						  {
						 	 for each (Legend^ cache in userAccount->Legends) {
						 		 if (cache->name == LegendsListView->FocusedItem->Text)
						 		 {
						 			 // MessageBox::Show("fuck");
						 			 selectedLegend = cache;
						 			 break;
						 		 }

						 	 }
						  }

					 }
				 else
				 {
					 IndexOfMyLegends = myRandNums;
					 focusListView(IndexOfMyLegends);
					 if (myRandNums <= SumLegends - 1)
					 {
						 selectedLegend = Legends.at(myRandNums);
					 }
					 else{
						 selectedLegend = userAccount->Legends.at(myRandNums - SumLegends);
					 }
				 }

				 myLegend->copyOther(*selectedLegend);


			//MessageBox::Show("selectedLegend->name = " + selectedLegend->name);

				 //敌军选择

				 if (isMutiMode)
				 {
					 enemyLegend->copyOther(*selectedLegend);
					 MutiGame ^mgame = gcnew MutiGame;
					 mgame->InitializeWindows(myLegend, enemyLegend);
					 Close();

					 
				 }
				 else
				 {
					 if (IndexOfEnemyLegends <= SumLegends - 1)
					 {
						 selectedLegend = Legends.at(IndexOfEnemyLegends);
					 }
					 else{
						 selectedLegend = userAccount->Legends.at(IndexOfEnemyLegends - SumLegends);
					 }

					 enemyLegend->copyOther(*selectedLegend);

					 game->userAccount = this->userAccount;
					 game->InitializeWindows(myLegend, enemyLegend);
					 Close();
				 }



			/*	 MessageBox::Show("enemyLegend->name = " + enemyLegend->name);
				 MessageBox::Show("myLegend->name = " + myLegend->name);*/


				 ////Game ^game = gcnew Game;
				

	}
	};
}
