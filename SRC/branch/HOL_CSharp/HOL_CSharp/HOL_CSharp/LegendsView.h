#pragma once
#include<cliext/vector>
#include "Legend.h"
#include "Game.h"

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cliext;

	/// <summary>
	/// LegendsView 摘要
	/// </summary>
	public ref class LegendsView : public System::Windows::Forms::Form {
	public:
		LegendsView(void) {
			InitializeComponent();
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
			focusListView(0);

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
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

private:
	/// <summary>
	/// 必需的设计器变量。
	/// </summary>
	System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// 设计器支持所需的方法 - 不要
	/// 使用代码编辑器修改此方法的内容。
	/// </summary>
	void InitializeComponent(void) {
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
		this->label1 = (gcnew System::Windows::Forms::Label());
		this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
		this->TimerGroupBox->SuspendLayout();
		this->SuspendLayout();
		// 
		// LegendsListView
		// 
		this->LegendsListView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
			this->name, this->HP,
				this->ATK, this->DFS, this->MP
		});
		this->LegendsListView->FullRowSelect = true;
		this->LegendsListView->GridLines = true;
		this->LegendsListView->Location = System::Drawing::Point(47, 189);
		this->LegendsListView->Name = L"LegendsListView";
		this->LegendsListView->Size = System::Drawing::Size(609, 208);
		this->LegendsListView->TabIndex = 0;
		this->LegendsListView->UseCompatibleStateImageBehavior = false;
		this->LegendsListView->View = System::Windows::Forms::View::Details;
		this->LegendsListView->SelectedIndexChanged += gcnew System::EventHandler(this, &LegendsView::listView1_SelectedIndexChanged);
		// 
		// name
		// 
		this->name->Text = L"帝国";
		// 
		// HP
		// 
		this->HP->Text = L"领土面积";
		// 
		// ATK
		// 
		this->ATK->Text = L"军队";
		// 
		// DFS
		// 
		this->DFS->Text = L"守备";
		// 
		// MP
		// 
		this->MP->Text = L"民心";
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
		this->okButton->Location = System::Drawing::Point(157, 403);
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
		this->TimerGroupBox->Controls->Add(this->label1);
		this->TimerGroupBox->Controls->Add(this->progressBar1);
		this->TimerGroupBox->Location = System::Drawing::Point(47, 98);
		this->TimerGroupBox->Name = L"TimerGroupBox";
		this->TimerGroupBox->Size = System::Drawing::Size(609, 85);
		this->TimerGroupBox->TabIndex = 4;
		this->TimerGroupBox->TabStop = false;
		this->TimerGroupBox->Text = L" ";
		// 
		// label1
		// 
		this->label1->AutoSize = true;
		this->label1->Location = System::Drawing::Point(18, 17);
		this->label1->Name = L"label1";
		this->label1->Size = System::Drawing::Size(125, 12);
		this->label1->TabIndex = 1;
		this->label1->Text = L"这里将展示倒计时文字";
		// 
		// progressBar1
		// 
		this->progressBar1->Location = System::Drawing::Point(6, 40);
		this->progressBar1->Name = L"progressBar1";
		this->progressBar1->Size = System::Drawing::Size(597, 31);
		this->progressBar1->TabIndex = 0;
		// 
		// LegendsView
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
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
			
			 //按下确定键，保持选中高亮
		/*	 if (LegendsListView->FocusedItem != (ListViewItem ^)nullptr)
			 {
				 LegendsListView->FocusedItem->BackColor = SystemColors::Highlight;
				 LegendsListView->FocusedItem->ForeColor = Color::White;
			 }  */

			 Legend ^selectedLegend = nullptr;
			 for each (Legend^ cache in Legends) {
				 if (cache->name == LegendsListView->FocusedItem->Text)
				 {
					// MessageBox::Show("fuck");
					 selectedLegend = cache;
					 break;
				 }

			 }


			 Game ^game = gcnew Game;
			 game->InitializeWindows(selectedLegend,selectedLegend);
			 Close();

}
private: System::Void backButton_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Close();
}
};
}
