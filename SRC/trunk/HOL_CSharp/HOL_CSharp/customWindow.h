#pragma once
#include "cliext/vector"
#include "User.h"
#include "Legend.h"
#include "detailCustom.h"
#define OFFCIALLEGENDSNUMS 4

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;

	/// <summary>
	/// customWindow 摘要
	/// </summary>
	public ref class customWindow : public System::Windows::Forms::Form
	{
	public:
		customWindow(void)
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
		~customWindow()
		{
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
	private: System::Windows::Forms::ColumnHeader^  MP;
	private: System::Windows::Forms::ImageList^  imagecacheList1;
	private: System::Windows::Forms::Button^  QuitBTN;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
	public:	User^ userAccount;   //用户登录的账号信息
	private: System::Windows::Forms::Panel^  panel1;
	public:
	private: System::Windows::Forms::Button^  EditBTN;
	private: System::Windows::Forms::Button^  DeleteBTN;
	private: System::Windows::Forms::Button^  AddBTN;
	public:vector<Legend^> Legends; //保存官方提供的，以及用户自己创建的英雄
	
	private: void UpdateListView() {
				 //对己方进行listview更新
				 LegendsListView->Items->Clear();
				 this->LegendsListView->BeginUpdate();
				 for (int i = 0; i < OFFCIALLEGENDSNUMS; ++i)
				 {
					 System::Windows::Forms::ListViewItem ^lvi = gcnew System::Windows::Forms::ListViewItem;
					 lvi->Text = Legends.at(i)->name;
					 // userlist[i]->SumScores = userlist[i]->SumWin * 1000 + (userlist[i]->SumRounds - userlist[i]->SumWin) * 100;
					 lvi->SubItems->Add(Legends.at(i)->ATK.ToString());
					 lvi->SubItems->Add(Legends.at(i)->HP.ToString());
					 lvi->SubItems->Add(Legends.at(i)->DFS.ToString());
					 lvi->SubItems->Add(Legends.at(i)->MP.ToString());
					// MessageBox::Show(" Legends.at(i)->name" + Legends.at(i)->name);
					 LegendsListView->Items->Add(lvi);
				 }

				 for (int i = 0; i < userAccount->SumLegends; ++i)
				 {
					 System::Windows::Forms::ListViewItem ^lvi = gcnew System::Windows::Forms::ListViewItem;
					 lvi->Text = userAccount->Legends.at(i)->name;
					 // userlist[i]->SumScores = userlist[i]->SumWin * 1000 + (userlist[i]->SumRounds - userlist[i]->SumWin) * 100;
					 lvi->SubItems->Add(userAccount->Legends.at(i)->ATK.ToString());
					 lvi->SubItems->Add(userAccount->Legends.at(i)->HP.ToString());
					 lvi->SubItems->Add(userAccount->Legends.at(i)->DFS.ToString());
					 lvi->SubItems->Add(userAccount->Legends.at(i)->MP.ToString());
				//	 MessageBox::Show("userAccount->Legends.at(i)->name" + userAccount->Legends.at(i)->name);
					 LegendsListView->Items->Add(lvi);
				 }

				 this->LegendsListView->EndUpdate();
	}
	

		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(customWindow::typeid));
			this->LegendsListView = (gcnew System::Windows::Forms::ListView());
			this->name = (gcnew System::Windows::Forms::ColumnHeader());
			this->HP = (gcnew System::Windows::Forms::ColumnHeader());
			this->ATK = (gcnew System::Windows::Forms::ColumnHeader());
			this->DFS = (gcnew System::Windows::Forms::ColumnHeader());
			this->MP = (gcnew System::Windows::Forms::ColumnHeader());
			this->imagecacheList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->QuitBTN = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->EditBTN = (gcnew System::Windows::Forms::Button());
			this->DeleteBTN = (gcnew System::Windows::Forms::Button());
			this->AddBTN = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// LegendsListView
			// 
			this->LegendsListView->BackColor = System::Drawing::Color::SandyBrown;
			this->LegendsListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->name, this->HP,
					this->ATK, this->DFS, this->MP
			});
			this->LegendsListView->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->LegendsListView->ForeColor = System::Drawing::Color::Firebrick;
			this->LegendsListView->FullRowSelect = true;
			this->LegendsListView->GridLines = true;
			this->LegendsListView->Location = System::Drawing::Point(49, 121);
			this->LegendsListView->Name = L"LegendsListView";
			this->LegendsListView->Size = System::Drawing::Size(673, 367);
			this->LegendsListView->SmallImageList = this->imagecacheList1;
			this->LegendsListView->TabIndex = 1;
			this->LegendsListView->UseCompatibleStateImageBehavior = false;
			this->LegendsListView->View = System::Windows::Forms::View::Details;
			// 
			// name
			// 
			this->name->Text = L"帝国";
			this->name->Width = 200;
			// 
			// HP
			// 
			this->HP->Text = L"领土面积";
			this->HP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->HP->Width = 150;
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
			this->DFS->Width = 100;
			// 
			// MP
			// 
			this->MP->Text = L"民心";
			this->MP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MP->Width = 100;
			// 
			// imagecacheList1
			// 
			this->imagecacheList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imagecacheList1->ImageSize = System::Drawing::Size(40, 40);
			this->imagecacheList1->TransparentColor = System::Drawing::Color::Transparent;
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
			this->QuitBTN->Location = System::Drawing::Point(283, 533);
			this->QuitBTN->Name = L"QuitBTN";
			this->QuitBTN->Size = System::Drawing::Size(195, 45);
			this->QuitBTN->TabIndex = 14;
			this->QuitBTN->Text = L"返 回";
			this->QuitBTN->UseVisualStyleBackColor = false;
			this->QuitBTN->Click += gcnew System::EventHandler(this, &customWindow::QuitBTN_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->EditBTN);
			this->panel1->Controls->Add(this->DeleteBTN);
			this->panel1->Controls->Add(this->AddBTN);
			this->panel1->Location = System::Drawing::Point(49, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(673, 88);
			this->panel1->TabIndex = 15;
			// 
			// EditBTN
			// 
			this->EditBTN->BackColor = System::Drawing::Color::Transparent;
			this->EditBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditBTN.BackgroundImage")));
			this->EditBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->EditBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditBTN->ForeColor = System::Drawing::Color::Transparent;
			this->EditBTN->Location = System::Drawing::Point(46, 14);
			this->EditBTN->Name = L"EditBTN";
			this->EditBTN->Size = System::Drawing::Size(60, 60);
			this->EditBTN->TabIndex = 2;
			this->EditBTN->Text = L" ";
			this->EditBTN->UseVisualStyleBackColor = false;
			this->EditBTN->Click += gcnew System::EventHandler(this, &customWindow::EditBTN_Click);
			// 
			// DeleteBTN
			// 
			this->DeleteBTN->BackColor = System::Drawing::Color::Transparent;
			this->DeleteBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DeleteBTN.BackgroundImage")));
			this->DeleteBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->DeleteBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteBTN->ForeColor = System::Drawing::Color::Transparent;
			this->DeleteBTN->Location = System::Drawing::Point(561, 14);
			this->DeleteBTN->Name = L"DeleteBTN";
			this->DeleteBTN->Size = System::Drawing::Size(60, 60);
			this->DeleteBTN->TabIndex = 1;
			this->DeleteBTN->Text = L" ";
			this->DeleteBTN->UseVisualStyleBackColor = false;
			this->DeleteBTN->Click += gcnew System::EventHandler(this, &customWindow::DeleteBTN_Click);
			// 
			// AddBTN
			// 
			this->AddBTN->BackColor = System::Drawing::Color::Transparent;
			this->AddBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddBTN.BackgroundImage")));
			this->AddBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->AddBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddBTN->ForeColor = System::Drawing::Color::Transparent;
			this->AddBTN->Location = System::Drawing::Point(291, 14);
			this->AddBTN->Name = L"AddBTN";
			this->AddBTN->Size = System::Drawing::Size(60, 60);
			this->AddBTN->TabIndex = 0;
			this->AddBTN->Text = L" ";
			this->AddBTN->UseVisualStyleBackColor = false;
			this->AddBTN->Click += gcnew System::EventHandler(this, &customWindow::AddBTN_Click);
			// 
			// customWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->ClientSize = System::Drawing::Size(786, 612);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->QuitBTN);
			this->Controls->Add(this->LegendsListView);
			this->Name = L"customWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"customWindow";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void QuitBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
private: System::Void AddBTN_Click(System::Object^  sender, System::EventArgs^  e) {
			 detailCustom^ customDialog = gcnew detailCustom;
			 customDialog->ShowDialog();


			 if (customDialog->DialogResult == System::Windows::Forms::DialogResult::OK)
			 {
				 Legend ^newcache = customDialog->cache;
				 userAccount->Legends.push_back(newcache);
				 ++userAccount->SumLegends;
				// MessageBox::Show("userAccount->Legends.at(i)->name" + userAccount->Legends.at(i)->name);
			//	 MessageBox::Show("fuck");
			 }

			 UpdateListView();
}
private: System::Void EditBTN_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::String ^ ClickName = LegendsListView->FocusedItem->Text;
			// MessageBox::Show("ClickName");
			 Legend^ readyEdit;
			 detailCustom^ EditDialog = gcnew detailCustom;

			 for each (Legend^ var in userAccount->Legends) {
					if (var->name == ClickName)
					{
						EditDialog->cache= var;
						EditDialog->ShowDialog();
						var = EditDialog->cache;
						UpdateListView();
						return;
					}
			 }


			 MessageBox::Show("官方帝国，禁止更改！");

}



private: System::Void DeleteBTN_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::String ^ ClickName = LegendsListView->FocusedItem->Text;
			 // MessageBox::Show("ClickName");
			 Legend^ readyEdit;
			 detailCustom^ EditDialog = gcnew detailCustom;

			 vector<Legend ^>::iterator it = userAccount->Legends.begin();

			 for (; it < userAccount->Legends.end();++it)
			 {
				 if ((*it)->name == ClickName)
				 {
					
					 // MessageBox::Show((*it)->name);
					 userAccount->Legends.erase(it);
					 --userAccount->SumLegends;
					 UpdateListView();
					 return;
				 }
			 }


			 MessageBox::Show("官方帝国，禁止删除！");
}
};
}
