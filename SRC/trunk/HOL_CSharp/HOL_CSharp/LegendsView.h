#pragma once
#include<cliext/vector>
#include "Legend.h"
#include "Game.h"
#include "ctime"
#include "cstdlib"
#include "User.h"
#include "MutiGame.h"
#define TIMER_CNTDWN 5 //������ʱ�����ĺ�
#define OFFICIAL_SUMLEGENGS 4 //�ٷ��۹�����


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
	/// LegendsView ժҪ
	/// </summary>
	public ref class LegendsView : public System::Windows::Forms::Form {
	public:
		LegendsView(void) {
			InitializeComponent();
			timerProgressBar->Maximum = TIMER_CNTDWN;
			game = gcnew Game;
			isMutiMode = false; //Ĭ��״̬�¶���ģʽ�ر�

			//
			//TODO:  �ڴ˴���ӹ��캯������
			//	Legends = gcnew  vector<Legend^>;
			//updateListView();

			//
		}

		void InitializeWindows()
			///�ⲿ���ô˽��������ĳ�ʼ����չʾ����ĺ���
		{
			testBTN->Visible = false;  //���԰�ť�Ƿ�ɼ�
			updateListView();

			secondsCNT = 0;
			okButton->Visible = false;

			//���view���Ա༭������
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
				okButton->Text = "ȷ�Ͻ�����Ϸ";
				srand((unsigned)time(NULL));
				myRandNums = rand() % (SumLegends + userAccount->SumLegends); //����������ĵо����
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
		/// ������������ʹ�õ���Դ��
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
				 //	 MessageBox::Show("���� focusListView");


				 if (LegendsListView->Items->Count > 0)
				 {
					 LegendsListView->Items[i]->Selected = true;
					 LegendsListView->FocusedItem = LegendsListView->Items[i];
					 LegendsListView->Select();

				 }
				 //	 MessageBox::Show("�˳� focusListView");

	}




			 //���г�ʼ�����������ڴ�
	public:  vector<Legend^> Legends;	//�����SystemWindowҳ���д�������Ӣ����
	public: property int SumLegends; //�۹���������
	private:  System::Timers::Timer ^aTimer;
			  int secondsCNT;
			  bool isSelected;  //���Ѿ�ѡ���˱���һ�Ϊ��
			  bool isBack;     //������˷��ؼ�Ϊ��
			  int myRandNums; //�ҷ������ţ�����Ӣ��
			  Game ^game = gcnew Game;
			  static Random^ rnd = gcnew Random();

	public: User^ userAccount;   //�û���¼���˺���Ϣ



	public:
		bool setEditorVisible;  //�ĸ��༭�˵��Ƿ�ɼ�
		bool setProcessVisible; //�������Ƿ�ɼ�
		bool setInfoLineVisible;    //����ʱ������ʾ�Ƿ�ɼ�
		bool setViewEditEnable; //Ӣ�۱���Ƿ����
		bool setOkButtonVisible; //ȷ����ť�Ƿ����
		bool setBackButtonVisible; //���ذ�ť�Ƿ����
		bool isMutiMode;  //�Ƿ��Ƕ���ģʽ
	private: System::ComponentModel::IContainer^  components;
	public:

	private:
		/// <summary>
		/// ����������������
		/// </summary>


	public:
		void OnTimedEvent(System::Object^  sender, System::Timers::ElapsedEventArgs^  e) {


			//System::Windows::Forms::MessageBox::Show(setViewEditEnable.ToString() );
			secondsCNT++;
			timerProgressBar->Value = secondsCNT;

			if (secondsCNT <= TIMER_CNTDWN && setViewEditEnable == true){
				infoLine->Text = "���� " + (TIMER_CNTDWN - secondsCNT + 1).ToString() + " ����ѡ��Ӣ�۷����Զ��������˵���";
				//	this->Close();

			}

			else if (secondsCNT <= TIMER_CNTDWN && setViewEditEnable == false){
				//	ui->infoLine->setText(QString("���� %1 ����Զ�������Ϸ").arg(TIMER_CNTDWN - secondsCNT));
				focusListView(myRandNums);
				infoLine->Text = "���� " + (TIMER_CNTDWN - secondsCNT + 1).ToString() + " ����Զ�������Ϸ��";
			}

			if (secondsCNT > TIMER_CNTDWN - 1 && isSelected == false)
			{
				System::Windows::Forms::MessageBox::Show("δ��ʱѡ��\n���������˵�"
														 , "����",
														 System::Windows::Forms::MessageBoxButtons::OK,
														 System::Windows::Forms::MessageBoxIcon::Warning);
				aTimer->Close();
				this->Close();
			}


			//else if (secondsCNT > TIMER_CNTDWN - 1 && isSelected == true)
			//{
			//	MessageBox::Show("�������ģʽ ");
			//	BrawlGameMode();

			//	this->Close();


			//}

			//if (setViewEditEnable == false && secondsCNT > TIMER_CNTDWN){
			//	System::Windows::Forms::MessageBox::Show("�˳�");
			//	isBack = false; //������ֹ�������ʱδ��
			//	isSelected = true;
			//	this->Close();
			//}
			//else if (setViewEditEnable == true && secondsCNT > TIMER_CNTDWN){
			//	System::Windows::Forms::MessageBox::Show("�˳�2");
			//	isBack = true;
			//	isSelected = false; //�������Ե������ʱδ���
			//	this->Close();
			//}
			//System::Windows::Forms::MessageBox::Show(secondsCNT.ToString() + "�˳�OnTimedEvent");


		}


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
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
			this->LegendsListView->Font = (gcnew System::Drawing::Font(L"΢���ź�", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
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
			this->name->Text = L"�۹�";
			this->name->Width = 160;
			// 
			// HP
			// 
			this->HP->Text = L"�������";
			this->HP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->HP->Width = 130;
			// 
			// ATK
			// 
			this->ATK->Text = L"����";
			this->ATK->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ATK->Width = 100;
			// 
			// DFS
			// 
			this->DFS->Text = L"�ر�";
			this->DFS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->DFS->Width = 90;
			// 
			// MP
			// 
			this->MP->Text = L"����";
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
			this->testBTN->Text = L"���ڲ��Ե�button";
			this->testBTN->UseVisualStyleBackColor = false;
			this->testBTN->Click += gcnew System::EventHandler(this, &LegendsView::testBTN_Click);
			// 
			// okButton
			// 
			this->okButton->AutoSize = true;
			this->okButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
																		 static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->okButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okButton->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->okButton->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->okButton->Location = System::Drawing::Point(158, 411);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(381, 61);
			this->okButton->TabIndex = 2;
			this->okButton->Text = L"ȷ��";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &LegendsView::okButton_Click);
			// 
			// backButton
			// 
			this->backButton->AutoSize = true;
			this->backButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
																		   static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->backButton->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->backButton->Location = System::Drawing::Point(261, 478);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(171, 41);
			this->backButton->TabIndex = 3;
			this->backButton->Text = L"����";
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

				 //���������ƣ���ֹ����Ⱦ
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

				 //�о�ѡ��

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
