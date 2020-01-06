#pragma once
#include "cliext/algorithm"
namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;

	/// <summary>
	/// RankListWindow 摘要
	/// </summary>
	public ref class RankListWindow : public System::Windows::Forms::Form
	{
	public:
		RankListWindow(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

		void InitializeWindows()
			///外部调用此界面真正的初始化并展示界面的函数
		{
			UpdateListView();

			//aTimer->Elapsed += gcnew System::Timers::ElapsedEventHandler(this, &HOL_CSharp::LegendsView::OnElapsed);
			this->ShowDialog();
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~RankListWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:

	private: System::Windows::Forms::ListView^  RankListView;
	private: System::Windows::Forms::ColumnHeader^  Index;
	private: System::Windows::Forms::ColumnHeader^  name;
	private: System::Windows::Forms::ColumnHeader^  PerWin;
	private: System::Windows::Forms::ColumnHeader^  Score;

	private: System::Windows::Forms::Button^  QuitBTN;

	private:
		/// <summary>
		/// 必需的设计器变量。
	public:
		vector<User^> userlist; //保存所有用户信息
		User^ userAccount;   //用户登录的账号信息
		int sumUserNums; // 总共多少个用户
	private: System::Windows::Forms::ColumnHeader^  round;
	public:
	private: System::Windows::Forms::ColumnHeader^  level;
	private: System::Windows::Forms::Label^  TipsLB;
			 /// </summary>
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(RankListWindow::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RankListView = (gcnew System::Windows::Forms::ListView());
			this->Index = (gcnew System::Windows::Forms::ColumnHeader());
			this->name = (gcnew System::Windows::Forms::ColumnHeader());
			this->PerWin = (gcnew System::Windows::Forms::ColumnHeader());
			this->round = (gcnew System::Windows::Forms::ColumnHeader());
			this->Score = (gcnew System::Windows::Forms::ColumnHeader());
			this->level = (gcnew System::Windows::Forms::ColumnHeader());
			this->QuitBTN = (gcnew System::Windows::Forms::Button());
			this->TipsLB = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"华文行楷", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::DarkRed;
			this->label2->Location = System::Drawing::Point(122, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(285, 67);
			this->label2->TabIndex = 11;
			this->label2->Text = L"千古江山";
			// 
			// RankListView
			// 
			this->RankListView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
																			 static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->RankListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(6) {
				this->Index, this->name,
					this->PerWin, this->round, this->Score, this->level
			});
			this->RankListView->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->RankListView->ForeColor = System::Drawing::Color::LightCoral;
			this->RankListView->FullRowSelect = true;
			this->RankListView->GridLines = true;
			this->RankListView->Location = System::Drawing::Point(12, 149);
			this->RankListView->Name = L"RankListView";
			this->RankListView->Size = System::Drawing::Size(526, 416);
			this->RankListView->TabIndex = 12;
			this->RankListView->UseCompatibleStateImageBehavior = false;
			this->RankListView->View = System::Windows::Forms::View::Details;
			this->RankListView->SelectedIndexChanged += gcnew System::EventHandler(this, &RankListWindow::RankListView_SelectedIndexChanged);
			// 
			// Index
			// 
			this->Index->Text = L"排名";
			this->Index->Width = 50;
			// 
			// name
			// 
			this->name->Text = L"用户名";
			this->name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->name->Width = 125;
			// 
			// PerWin
			// 
			this->PerWin->Text = L"胜率";
			this->PerWin->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PerWin->Width = 85;
			// 
			// round
			// 
			this->round->DisplayIndex = 4;
			this->round->Text = L"总回合";
			this->round->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->round->Width = 80;
			// 
			// Score
			// 
			this->Score->DisplayIndex = 3;
			this->Score->Text = L"积分";
			this->Score->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Score->Width = 100;
			// 
			// level
			// 
			this->level->Text = L"等级";
			this->level->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// QuitBTN
			// 
			this->QuitBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																		static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->QuitBTN->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->QuitBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->QuitBTN->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->QuitBTN->ForeColor = System::Drawing::SystemColors::Window;
			this->QuitBTN->Location = System::Drawing::Point(163, 647);
			this->QuitBTN->Name = L"QuitBTN";
			this->QuitBTN->Size = System::Drawing::Size(195, 45);
			this->QuitBTN->TabIndex = 13;
			this->QuitBTN->Text = L"返 回";
			this->QuitBTN->UseVisualStyleBackColor = false;
			this->QuitBTN->Click += gcnew System::EventHandler(this, &RankListWindow::QuitBTN_Click);
			// 
			// TipsLB
			// 
			this->TipsLB->AutoSize = true;
			this->TipsLB->BackColor = System::Drawing::Color::Transparent;
			this->TipsLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->TipsLB->ForeColor = System::Drawing::Color::Red;
			this->TipsLB->Location = System::Drawing::Point(183, 588);
			this->TipsLB->Name = L"TipsLB";
			this->TipsLB->Size = System::Drawing::Size(150, 27);
			this->TipsLB->TabIndex = 14;
			this->TipsLB->Text = L"你的排名为第 1";
			// 
			// RankListWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Info;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(515, 704);
			this->Controls->Add(this->TipsLB);
			this->Controls->Add(this->QuitBTN);
			this->Controls->Add(this->RankListView);
			this->Controls->Add(this->label2);
			this->DoubleBuffered = true;
			this->Name = L"RankListWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"RankListWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void QuitBTN_Click(System::Object^  sender, System::EventArgs^  e) {

				 Close();
	}


			 bool cmp(const User^ a, const User^ b) {
				 return a->SumScores > b->SumScores;

			 }


	private: void UpdateListView() {
				 //对己方进行listview更新
				 RankListView->Items->Clear();
				 this->RankListView->BeginUpdate();
				
				 vector<User^> cache = gcnew vector<User ^>;

				 for each (User^ var in userlist) {
					 User^ cacheUser = gcnew User;
					 cacheUser->copy(var->name,var->password,var->Legends,var->SumLegends,var->WinPercent,
									 var->SumWin,var->SumScores,var->SumRounds);
					 cache.push_back(cacheUser);
				 }

				// sort(cache.begin(),cache.end(),cmp);
				// cliext::sort(cache.begin(), cache.end(),cmp);
				 for (int i = 0; i < sumUserNums; ++i)
				 {
					 cache.at(i)->level = (cache.at(i)->WinPercent)*1.0*(cache.at(i)->WinPercent)*1.0*(cache.at(i)->SumScores + 100);
					// MessageBox::Show((cache.at(i)->level).ToString());
				 }


				 
					 int i, j;
					 for (i = 1; i < sumUserNums; i++)
					 for (j = i - 1; j >= 0 && cache[j]->level < cache[j + 1]->level; j--){
						 /*Swap(a[j], a[j + 1]);*/
						 User^ a = gcnew User;
						 a->copy(cache[j]->name, cache[j]->password, cache[j]->Legends,
										 cache[j]->SumLegends, cache[j]->WinPercent,
										 cache[j]->SumWin, cache[j]->SumScores, cache[j]->SumRounds);
						 a->level = cache[j]->level;

						 User^ b = gcnew User;
						 b->copy(cache[j+1]->name, cache[j+1]->password, cache[j+1]->Legends,
										 cache[j+1]->SumLegends, cache[j+1]->WinPercent,
										 cache[j+1]->SumWin, cache[j+1]->SumScores, cache[j+1]->SumRounds);
						 b->level = cache[j + 1]->level;


						 cache[j + 1] = a;
						 cache[j] = b;

					 }
				 

					 int myRandk = 1;
				 for (int i = 0; i < sumUserNums; ++i)
				 {

					 System::Windows::Forms::ListViewItem ^lvi = gcnew System::Windows::Forms::ListViewItem;
					 lvi->Text = (i + 1).ToString();
					 //int ID = pets.at(i)->ID;
					 //lvi->subitems->add(ID.ToString());

					// userlist[i]->SumScores = userlist[i]->SumWin * 1000 + (userlist[i]->SumRounds - userlist[i]->SumWin) * 100;
					 lvi->SubItems->Add(cache.at(i)->name);
					 lvi->SubItems->Add(cache.at(i)->WinPercent.ToString());
					 lvi->SubItems->Add(cache.at(i)->SumRounds.ToString());
					 lvi->SubItems->Add(cache.at(i)->SumScores.ToString());
					// MessageBox::Show((cache.at(i)->level).ToString());
					 lvi->SubItems->Add(cache.at(i)->level.ToString());
					 RankListView->Items->Add(lvi);

					 if (cache.at(i)->name == userAccount->name)
					 {
						 myRandk = i;
					 }

				 }

				 TipsLB->Text=("您 的 排 名 为  第" + (myRandk+1).ToString());

				 this->RankListView->EndUpdate();



	}
private: System::Void RankListView_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 RankListView->Items->Clear();
			 this->RankListView->BeginUpdate();

			 vector<User^> cache = gcnew vector<User ^>;

			 for each (User^ var in userlist) {
				 User^ cacheUser = gcnew User;
				 cacheUser->copy(var->name, var->password, var->Legends, var->SumLegends, var->WinPercent,
								 var->SumWin, var->SumScores, var->SumRounds);
				 cache.push_back(cacheUser);
			 }

			 // sort(cache.begin(),cache.end(),cmp);
			 // cliext::sort(cache.begin(), cache.end(),cmp);


			 int i, j;
			 for (i = 1; i < sumUserNums; i++)
			 for (j = i - 1; j >= 0 && cache[j]->level < cache[j + 1]->level; j--){
				 /*Swap(a[j], a[j + 1]);*/
				 User^ a = gcnew User;
				 a->copy(cache[j]->name, cache[j]->password, cache[j]->Legends,
						 cache[j]->SumLegends, cache[j]->WinPercent,
						 cache[j]->SumWin, cache[j]->SumScores, cache[j]->SumRounds);

				 User^ b = gcnew User;
				 b->copy(cache[j + 1]->name, cache[j + 1]->password, cache[j + 1]->Legends,
						 cache[j + 1]->SumLegends, cache[j + 1]->WinPercent,
						 cache[j + 1]->SumWin, cache[j + 1]->SumScores, cache[j + 1]->SumRounds);


				 cache[j + 1] = a;
				 cache[j] = b;

			 }


			 int myRandk = 1;
			 for (int i = 0; i < sumUserNums; ++i)
			 {

				 System::Windows::Forms::ListViewItem ^lvi = gcnew System::Windows::Forms::ListViewItem;
				 lvi->Text = (i + 1).ToString();
				 //int ID = pets.at(i)->ID;
				 //lvi->subitems->add(ID.ToString());

				 // userlist[i]->SumScores = userlist[i]->SumWin * 1000 + (userlist[i]->SumRounds - userlist[i]->SumWin) * 100;
				 lvi->SubItems->Add(cache.at(i)->name);
				 lvi->SubItems->Add(cache.at(i)->WinPercent.ToString());
				 lvi->SubItems->Add(cache.at(i)->SumRounds.ToString());
				 lvi->SubItems->Add(cache.at(i)->SumScores.ToString());
				 cache.at(i)->level = (cache.at(i)->WinPercent)*1.0*(cache.at(i)->WinPercent)*1.0*(cache.at(i)->SumScores + 200);
				 lvi->SubItems->Add(cache.at(i)->level.ToString());
				 RankListView->Items->Add(lvi);

				 if (cache.at(i)->name == userAccount->name)
				 {
					 myRandk = i;
				 }

			 }

			 TipsLB->Text = ("您 的 排 名 为  第" + (myRandk + 1).ToString());

			 this->RankListView->EndUpdate();

}
};
}
