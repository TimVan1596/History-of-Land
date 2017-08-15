#pragma once
#include "Legend.h"

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Game 摘要
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void InitializeWindows() {
			
			UpdateListView();
			this->ShowDialog();
		}

		void InitializeWindows(Legend ^my , Legend ^enemy) {
			this->my = my;
			this->enemy = enemy;
			UpdateListView();
			this->ShowDialog();
		}
	private : void UpdateListView() {
			//对己方进行listview更新
			//myLV->Items->Clear();
			this->myLV->BeginUpdate();

				//System::Windows::Forms::ListViewItem ^lvi = gcnew System::Windows::Forms::ListViewItem;
				//lvi->Text = my->name;
				
			listViewItem1->SubItems->Add(my->name);

			

			this->myLV->EndUpdate();


		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Game()
		{
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
	private: System::Windows::Forms::ListView^  EnemyLV;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::PictureBox^  mePicture;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  BowPB;


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  菜单ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  bowBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::ComponentModel::IContainer^  components;
			 System::Windows::Forms::ListViewItem^  listViewItem1;
			 System::Windows::Forms::ListViewItem^  listViewItem2; 
			 System::Windows::Forms::ListViewItem^  listViewItem3;
			 System::Windows::Forms::ListViewItem^  listViewItem4;
			 System::Windows::Forms::ListViewItem^  listViewItem5;
			 System::Windows::Forms::ListViewItem^  listViewItem6;
			 System::Windows::Forms::ListViewItem^  listViewItem7;
			 System::Windows::Forms::ListViewItem^  listViewItem8;
			 System::Windows::Forms::ListViewItem^  listViewItem9;
			 System::Windows::Forms::ListViewItem^  listViewItem10;

	private:
		/// <summary>
		/// 必需的设计器变量。
		Legend^ my;
		Legend^ enemy;
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::ListViewItem^  listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"帝国 :" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));
			System::Windows::Forms::ListViewItem^  listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"领土面积 ：" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold))));
			System::Windows::Forms::ListViewItem^  listViewItem3 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"军队 ：" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold))));
			System::Windows::Forms::ListViewItem^  listViewItem4 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"守备 ：" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold))));
			System::Windows::Forms::ListViewItem^  listViewItem5 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"民心 ：" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold))));
			System::Windows::Forms::ListViewItem^  listViewItem6 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"帝国 :" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 15, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)))));
			System::Windows::Forms::ListViewItem^  listViewItem7 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"领土面积 ：" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold))));
			System::Windows::Forms::ListViewItem^  listViewItem8 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"军队 ：" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold))));
			System::Windows::Forms::ListViewItem^  listViewItem9 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"守备 ：" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold))));
			System::Windows::Forms::ListViewItem^  listViewItem10 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"民心 ：" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold))));
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->myLV = (gcnew System::Windows::Forms::ListView());
			this->header = (gcnew System::Windows::Forms::ColumnHeader());
			this->Value = (gcnew System::Windows::Forms::ColumnHeader());
			this->imageList4Listview = (gcnew System::Windows::Forms::ImageList(this->components));
			this->HistoryTextBox = (gcnew System::Windows::Forms::TextBox());
			this->EnemyLV = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->mePicture = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->BowPB = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->菜单ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bowBox = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mePicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BowPB))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->bowBox->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// myLV
			// 
			this->myLV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->header, this->Value });
			this->myLV->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(5) {
				listViewItem1, listViewItem2,
					listViewItem3, listViewItem4, listViewItem5
			});
			this->myLV->Location = System::Drawing::Point(12, 52);
			this->myLV->Name = L"myLV";
			this->myLV->Size = System::Drawing::Size(180, 277);
			this->myLV->SmallImageList = this->imageList4Listview;
			this->myLV->TabIndex = 0;
			this->myLV->UseCompatibleStateImageBehavior = false;
			this->myLV->View = System::Windows::Forms::View::Details;
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
			this->HistoryTextBox->Location = System::Drawing::Point(12, 361);
			this->HistoryTextBox->Multiline = true;
			this->HistoryTextBox->Name = L"HistoryTextBox";
			this->HistoryTextBox->Size = System::Drawing::Size(322, 198);
			this->HistoryTextBox->TabIndex = 1;
			// 
			// EnemyLV
			// 
			this->EnemyLV->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->EnemyLV->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(5) {
				listViewItem6, listViewItem7,
					listViewItem8, listViewItem9, listViewItem10
			});
			this->EnemyLV->Location = System::Drawing::Point(692, 52);
			this->EnemyLV->Name = L"EnemyLV";
			this->EnemyLV->Size = System::Drawing::Size(180, 277);
			this->EnemyLV->SmallImageList = this->imageList4Listview;
			this->EnemyLV->TabIndex = 2;
			this->EnemyLV->UseCompatibleStateImageBehavior = false;
			this->EnemyLV->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L" ";
			this->columnHeader1->Width = 100;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L" ";
			this->columnHeader2->Width = 120;
			// 
			// mePicture
			// 
			this->mePicture->BackColor = System::Drawing::Color::Transparent;
			this->mePicture->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mePicture.BackgroundImage")));
			this->mePicture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->mePicture->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mePicture.InitialImage")));
			this->mePicture->Location = System::Drawing::Point(207, 115);
			this->mePicture->Name = L"mePicture";
			this->mePicture->Size = System::Drawing::Size(150, 214);
			this->mePicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->mePicture->TabIndex = 3;
			this->mePicture->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(521, 115);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 214);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// BowPB
			// 
			this->BowPB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BowPB->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BowPB.Image")));
			this->BowPB->Location = System::Drawing::Point(6, 34);
			this->BowPB->Name = L"BowPB";
			this->BowPB->Size = System::Drawing::Size(80, 80);
			this->BowPB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->BowPB->TabIndex = 5;
			this->BowPB->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->菜单ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(884, 25);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 菜单ToolStripMenuItem
			// 
			this->菜单ToolStripMenuItem->Name = L"菜单ToolStripMenuItem";
			this->菜单ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->菜单ToolStripMenuItem->Text = L"菜单";
			// 
			// bowBox
			// 
			this->bowBox->Controls->Add(this->label2);
			this->bowBox->Controls->Add(this->label1);
			this->bowBox->Controls->Add(this->BowPB);
			this->bowBox->Location = System::Drawing::Point(385, 394);
			this->bowBox->Name = L"bowBox";
			this->bowBox->Size = System::Drawing::Size(93, 165);
			this->bowBox->TabIndex = 9;
			this->bowBox->TabStop = false;
			this->bowBox->Text = L" ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"黑体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::OrangeRed;
			this->label2->Location = System::Drawing::Point(19, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 32);
			this->label2->TabIndex = 7;
			this->label2->Text = L"怕骑兵\r\n杀步兵";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 26);
			this->label1->TabIndex = 6;
			this->label1->Text = L"弓箭手";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Location = System::Drawing::Point(564, 394);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(93, 165);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"黑体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->ForeColor = System::Drawing::Color::OrangeRed;
			this->label3->Location = System::Drawing::Point(19, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 32);
			this->label3->TabIndex = 7;
			this->label3->Text = L"怕弓箭手\r\n杀骑兵";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label4->Location = System::Drawing::Point(17, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 26);
			this->label4->TabIndex = 6;
			this->label4->Text = L"步兵";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(6, 34);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 80);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Location = System::Drawing::Point(735, 394);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(93, 165);
			this->groupBox2->TabIndex = 11;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L" ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"黑体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::OrangeRed;
			this->label5->Location = System::Drawing::Point(19, 130);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 32);
			this->label5->TabIndex = 7;
			this->label5->Text = L"怕步兵\r\n杀弓箭手";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label6->Location = System::Drawing::Point(17, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 26);
			this->label6->TabIndex = 6;
			this->label6->Text = L"骑兵";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(6, 34);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(80, 80);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 571);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->bowBox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->mePicture);
			this->Controls->Add(this->EnemyLV);
			this->Controls->Add(this->HistoryTextBox);
			this->Controls->Add(this->myLV);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mePicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BowPB))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->bowBox->ResumeLayout(false);
			this->bowBox->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
