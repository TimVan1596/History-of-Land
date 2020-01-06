#pragma once
#include "stdafx.h"
#include "LegendsView.h"
#include "Legend.h"
#include "SettingPage.h"
#include<cliext/vector>
#include "User.h"
#include "MutiGame.h"

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace std;
	using namespace cliext;
	using namespace System::IO;

	/// <summary>
	/// SystemWindow 摘要
	/// </summary>
	public ref class SystemWindow : public System::Windows::Forms::Form {
	public:
		SystemWindow(void) {
			InitializeComponent();
			//
			CURSORBTNBACKGROUNDLOC = "cursorBTN.png";
			BTNBACKGROUNDLOC = "BTN.png";

		
			//updateUserInfoPanel(); //更新用户信息
			//TODO:  在此处添加构造函数代码
			Legends = gcnew vector<Legend ^>;
			creatLegends();  

			//

		}
		String ^BTNBACKGROUNDLOC;
	private: System::Windows::Forms::PictureBox^  UserInfoPB;
	public:
	private: System::Windows::Forms::Label^  UserNameLB;
	private: System::Windows::Forms::Label^  UserSumWinLB;
	private: System::Windows::Forms::Label^  UserPerWinLB;
	private: System::Windows::Forms::Label^  UserSumLegendsLB;
	private: System::Windows::Forms::Button^  quitLoginBTN;
	private: System::Windows::Forms::Label^  SumScroeLB;
			 String ^CURSORBTNBACKGROUNDLOC;


	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~SystemWindow() {
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  ClassicGame;
	private: System::Windows::Forms::Button^  BrawlGame;
	private: System::Windows::Forms::Button^  customGame;
	private: System::Windows::Forms::Button^  SetingsBTN;
	private: System::Windows::Forms::Button^  QuitBTN;






	private:vector<Legend^> Legends; //保存官方提供的，以及用户自己创建的英雄
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;


	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;
	public:	int sumUserNums; // 总共多少个用户
			//vector<Legend^> Legends;
			vector<User^> userlist; //保存所有用户信息
			User^ userAccount;   //用户登录的账号信息


		//Legend[] legends;  


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SystemWindow::typeid));
			this->ClassicGame = (gcnew System::Windows::Forms::Button());
			this->BrawlGame = (gcnew System::Windows::Forms::Button());
			this->customGame = (gcnew System::Windows::Forms::Button());
			this->SetingsBTN = (gcnew System::Windows::Forms::Button());
			this->QuitBTN = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->UserInfoPB = (gcnew System::Windows::Forms::PictureBox());
			this->UserNameLB = (gcnew System::Windows::Forms::Label());
			this->UserSumWinLB = (gcnew System::Windows::Forms::Label());
			this->UserPerWinLB = (gcnew System::Windows::Forms::Label());
			this->UserSumLegendsLB = (gcnew System::Windows::Forms::Label());
			this->quitLoginBTN = (gcnew System::Windows::Forms::Button());
			this->SumScroeLB = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserInfoPB))->BeginInit();
			this->SuspendLayout();
			// 
			// ClassicGame
			// 
			this->ClassicGame->BackColor = System::Drawing::Color::Transparent;
			this->ClassicGame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ClassicGame.BackgroundImage")));
			this->ClassicGame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClassicGame->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ClassicGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ClassicGame->Font = (gcnew System::Drawing::Font(L"华文行楷", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ClassicGame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
																			static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->ClassicGame->Location = System::Drawing::Point(780, 151);
			this->ClassicGame->Margin = System::Windows::Forms::Padding(0);
			this->ClassicGame->Name = L"ClassicGame";
			this->ClassicGame->Size = System::Drawing::Size(388, 70);
			this->ClassicGame->TabIndex = 1;
			this->ClassicGame->Text = L" 千古江山";
			this->ClassicGame->UseVisualStyleBackColor = false;
			this->ClassicGame->Click += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_Click);
			this->ClassicGame->MouseEnter += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_MouseEnter);
			this->ClassicGame->MouseLeave += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_MouseLeave_1);
			this->ClassicGame->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SystemWindow::ClassicGame_MouseMove);
			// 
			// BrawlGame
			// 
			this->BrawlGame->BackColor = System::Drawing::Color::Transparent;
			this->BrawlGame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BrawlGame.BackgroundImage")));
			this->BrawlGame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->BrawlGame->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BrawlGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BrawlGame->Font = (gcnew System::Drawing::Font(L"华文行楷", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->BrawlGame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
																		  static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->BrawlGame->Location = System::Drawing::Point(843, 235);
			this->BrawlGame->Margin = System::Windows::Forms::Padding(0);
			this->BrawlGame->Name = L"BrawlGame";
			this->BrawlGame->Size = System::Drawing::Size(325, 70);
			this->BrawlGame->TabIndex = 2;
			this->BrawlGame->Text = L"快战一场";
			this->BrawlGame->UseVisualStyleBackColor = false;
			this->BrawlGame->Click += gcnew System::EventHandler(this, &SystemWindow::BrawlGame_Click);
			this->BrawlGame->MouseEnter += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_MouseEnter);
			this->BrawlGame->MouseLeave += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_MouseLeave_1);
			this->BrawlGame->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SystemWindow::BrawlGame_MouseMove);
			// 
			// customGame
			// 
			this->customGame->BackColor = System::Drawing::Color::Transparent;
			this->customGame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"customGame.BackgroundImage")));
			this->customGame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->customGame->Cursor = System::Windows::Forms::Cursors::Hand;
			this->customGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->customGame->Font = (gcnew System::Drawing::Font(L"华文行楷", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->customGame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
																		   static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->customGame->Location = System::Drawing::Point(878, 324);
			this->customGame->Margin = System::Windows::Forms::Padding(0);
			this->customGame->Name = L"customGame";
			this->customGame->Size = System::Drawing::Size(277, 70);
			this->customGame->TabIndex = 3;
			this->customGame->Text = L"沙盘点兵  ";
			this->customGame->UseVisualStyleBackColor = false;
			this->customGame->Click += gcnew System::EventHandler(this, &SystemWindow::customGame_Click);
			this->customGame->MouseEnter += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_MouseEnter);
			this->customGame->MouseLeave += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_MouseLeave_1);
			this->customGame->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SystemWindow::BrawlGame_MouseMove);
			// 
			// SetingsBTN
			// 
			this->SetingsBTN->BackColor = System::Drawing::Color::Transparent;
			this->SetingsBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SetingsBTN.BackgroundImage")));
			this->SetingsBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SetingsBTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SetingsBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SetingsBTN->Font = (gcnew System::Drawing::Font(L"华文行楷", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->SetingsBTN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
																		   static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->SetingsBTN->Location = System::Drawing::Point(906, 516);
			this->SetingsBTN->Margin = System::Windows::Forms::Padding(0);
			this->SetingsBTN->Name = L"SetingsBTN";
			this->SetingsBTN->Size = System::Drawing::Size(277, 70);
			this->SetingsBTN->TabIndex = 4;
			this->SetingsBTN->Text = L"设置";
			this->SetingsBTN->UseVisualStyleBackColor = false;
			this->SetingsBTN->Click += gcnew System::EventHandler(this, &SystemWindow::SetingsBTN_Click);
			this->SetingsBTN->MouseEnter += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_MouseEnter);
			this->SetingsBTN->MouseLeave += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_MouseLeave_1);
			this->SetingsBTN->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SystemWindow::BrawlGame_MouseMove);
			// 
			// QuitBTN
			// 
			this->QuitBTN->BackColor = System::Drawing::Color::Transparent;
			this->QuitBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"QuitBTN.BackgroundImage")));
			this->QuitBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->QuitBTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->QuitBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->QuitBTN->Font = (gcnew System::Drawing::Font(L"华文行楷", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->QuitBTN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
																		static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->QuitBTN->Location = System::Drawing::Point(906, 600);
			this->QuitBTN->Margin = System::Windows::Forms::Padding(0);
			this->QuitBTN->Name = L"QuitBTN";
			this->QuitBTN->Size = System::Drawing::Size(277, 70);
			this->QuitBTN->TabIndex = 5;
			this->QuitBTN->Text = L"退出";
			this->QuitBTN->UseVisualStyleBackColor = false;
			this->QuitBTN->Click += gcnew System::EventHandler(this, &SystemWindow::QuitBTN_Click);
			this->QuitBTN->MouseEnter += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_MouseEnter);
			this->QuitBTN->MouseLeave += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_MouseLeave_1);
			this->QuitBTN->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SystemWindow::BrawlGame_MouseMove);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"华文行楷", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(778, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 67);
			this->label2->TabIndex = 9;
			this->label2->Text = L"千古江山";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"华文行楷", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(781, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 51);
			this->label1->TabIndex = 8;
			this->label1->Text = L"History of Land";
			// 
			// UserInfoPB
			// 
			this->UserInfoPB->BackColor = System::Drawing::Color::Transparent;
			this->UserInfoPB->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UserInfoPB.BackgroundImage")));
			this->UserInfoPB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->UserInfoPB->Location = System::Drawing::Point(-4, -2);
			this->UserInfoPB->Margin = System::Windows::Forms::Padding(0);
			this->UserInfoPB->Name = L"UserInfoPB";
			this->UserInfoPB->Size = System::Drawing::Size(195, 307);
			this->UserInfoPB->TabIndex = 10;
			this->UserInfoPB->TabStop = false;
			// 
			// UserNameLB
			// 
			this->UserNameLB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
																		   static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->UserNameLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->UserNameLB->ForeColor = System::Drawing::SystemColors::Control;
			this->UserNameLB->Location = System::Drawing::Point(12, 151);
			this->UserNameLB->Name = L"UserNameLB";
			this->UserNameLB->Size = System::Drawing::Size(154, 33);
			this->UserNameLB->TabIndex = 11;
			this->UserNameLB->Text = L"Tim Van";
			this->UserNameLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserSumWinLB
			// 
			this->UserSumWinLB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
																			 static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->UserSumWinLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->UserSumWinLB->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->UserSumWinLB->Location = System::Drawing::Point(12, 205);
			this->UserSumWinLB->Name = L"UserSumWinLB";
			this->UserSumWinLB->Size = System::Drawing::Size(19, 27);
			this->UserSumWinLB->TabIndex = 12;
			this->UserSumWinLB->Text = L"3";
			this->UserSumWinLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserPerWinLB
			// 
			this->UserPerWinLB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
																			 static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->UserPerWinLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->UserPerWinLB->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->UserPerWinLB->Location = System::Drawing::Point(72, 205);
			this->UserPerWinLB->Name = L"UserPerWinLB";
			this->UserPerWinLB->Size = System::Drawing::Size(45, 27);
			this->UserPerWinLB->TabIndex = 13;
			this->UserPerWinLB->Text = L"0.366666";
			this->UserPerWinLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserSumLegendsLB
			// 
			this->UserSumLegendsLB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
																				 static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->UserSumLegendsLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->UserSumLegendsLB->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->UserSumLegendsLB->Location = System::Drawing::Point(147, 205);
			this->UserSumLegendsLB->Name = L"UserSumLegendsLB";
			this->UserSumLegendsLB->Size = System::Drawing::Size(19, 27);
			this->UserSumLegendsLB->TabIndex = 14;
			this->UserSumLegendsLB->Text = L"3";
			this->UserSumLegendsLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// quitLoginBTN
			// 
			this->quitLoginBTN->BackColor = System::Drawing::Color::Transparent;
			this->quitLoginBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quitLoginBTN.BackgroundImage")));
			this->quitLoginBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->quitLoginBTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->quitLoginBTN->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->quitLoginBTN->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->quitLoginBTN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(237)),
																			 static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->quitLoginBTN->Location = System::Drawing::Point(9, 277);
			this->quitLoginBTN->Margin = System::Windows::Forms::Padding(0);
			this->quitLoginBTN->Name = L"quitLoginBTN";
			this->quitLoginBTN->Size = System::Drawing::Size(170, 28);
			this->quitLoginBTN->TabIndex = 15;
			this->quitLoginBTN->Text = L"退出登录";
			this->quitLoginBTN->UseVisualStyleBackColor = false;
			// 
			// SumScroeLB
			// 
			this->SumScroeLB->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
																		   static_cast<System::Int32>(static_cast<System::Byte>(172)));
			this->SumScroeLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->SumScroeLB->ForeColor = System::Drawing::Color::Gold;
			this->SumScroeLB->Location = System::Drawing::Point(49, 175);
			this->SumScroeLB->Name = L"SumScroeLB";
			this->SumScroeLB->Size = System::Drawing::Size(78, 27);
			this->SumScroeLB->TabIndex = 16;
			this->SumScroeLB->Text = L"5121";
			this->SumScroeLB->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// SystemWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1084, 695);
			this->Controls->Add(this->SumScroeLB);
			this->Controls->Add(this->quitLoginBTN);
			this->Controls->Add(this->UserSumLegendsLB);
			this->Controls->Add(this->UserPerWinLB);
			this->Controls->Add(this->UserSumWinLB);
			this->Controls->Add(this->UserNameLB);
			this->Controls->Add(this->UserInfoPB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->QuitBTN);
			this->Controls->Add(this->SetingsBTN);
			this->Controls->Add(this->customGame);
			this->Controls->Add(this->BrawlGame);
			this->Controls->Add(this->ClassicGame);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"SystemWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"千古江山 V 0.2.3\tC#专版";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserInfoPB))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		public:void updateUserInfoPanel()
		//此函数用于更新用户数据板
		{
					
				   if (userAccount->name != "游客账号")
				   {
					   UserNameLB->Text = userAccount->name;
					   //	MessageBox::Show("userAccount->WinPercent = " + (userAccount->WinPercent).ToString());
					   SumScroeLB->Text = (userAccount->SumScores).ToString();
					   UserPerWinLB->Text = (userAccount->WinPercent).ToString();
					   UserSumLegendsLB->Text = (userAccount->SumLegends).ToString();
					   UserSumWinLB->Text = (userAccount->SumRounds).ToString();

					   for each (User ^var in userlist) {
						   if (var->name == userAccount->name)
						   {
							   var->copy(userAccount->name, userAccount->password,
										 userAccount->Legends, userAccount->SumLegends, userAccount->WinPercent,
										 userAccount->SumWin, userAccount->SumScores, userAccount->SumRounds);
							   break;
						   }

					   }
					   //userAccount->Legends = 
				   }



		}


	private: System::Void QuitBTN_Click(System::Object^  sender, System::EventArgs^  e) {

				 System::Windows::Forms::DialogResult  ^isClose = MessageBox::Show("您真的要退出游戏吗？",
																		   "退出游戏",
																				   MessageBoxButtons::OKCancel,
																				   MessageBoxIcon::Question,
																				   MessageBoxDefaultButton::Button1);
				 for each (User ^var in userlist) {
					 if (var->name == userAccount->name )
					 {
						 var->copy(userAccount->name,userAccount->password,
								   userAccount->Legends,userAccount->SumLegends,userAccount->WinPercent,
								   userAccount->SumWin,userAccount->SumScores,userAccount->SumRounds);
						 break;
					 }

				 }


				 if (*isClose == System::Windows::Forms::DialogResult::OK)
				 {

					 FileStream ^fs = gcnew FileStream("SQL.holres", System::IO::FileMode::Create);
					 StreamWriter ^sw = gcnew StreamWriter(fs);
					 sw->WriteLine((sumUserNums).ToString());
					 for each (User^ varUser in userlist) {
						 sw->WriteLine(varUser->name);
						 sw->WriteLine(varUser->password);
						 sw->WriteLine((varUser->SumScores).ToString());
						 sw->WriteLine((varUser->WinPercent).ToString());
						 sw->WriteLine((varUser->SumWin).ToString());
						 sw->WriteLine((varUser->SumRounds).ToString());
						 sw->WriteLine((varUser->SumLegends).ToString());

						 /*for each (Legend^ cache in varUser->Legends)*/ 
						 for (int i = 0; i < varUser->SumLegends;++i)
						 {
							 sw->WriteLine(varUser->Legends.at(i)->name);
							 sw->WriteLine((varUser->Legends.at(i)->HP).ToString());
							 sw->WriteLine((varUser->Legends.at(i)->ATK).ToString());
							 sw->WriteLine((varUser->Legends.at(i)->DFS).ToString());
							 sw->WriteLine((varUser->Legends.at(i)->MP).ToString());

						 }
					 }

					 sw->Flush();
					 sw->Close();
					 Close();
				 }

	}

	private: System::Void ClassicGame_Click(System::Object^  sender, System::EventArgs^  e) {
				 //经典模式

				 LegendsView ^chooseLegendsView = gcnew LegendsView;
				 chooseLegendsView->userAccount = this->userAccount;
				 chooseLegendsView->Legends = Legends;
				 chooseLegendsView->SumLegends = /*userAccount->SumLegends+*/4;   ///传输数据
				 chooseLegendsView->setEditorVisible = false;
				 chooseLegendsView->setProcessVisible = true;
				 chooseLegendsView->setInfoLineVisible = true;
				 chooseLegendsView->setViewEditEnable = true;
				 chooseLegendsView->setOkButtonVisible = true;
				 chooseLegendsView->InitializeWindows();
				 updateUserInfoPanel();
	}
	private:void creatLegends() {
				Legend ^ han = gcnew Legend("大汉帝国", 210, 24, 10, 40);
				Legends.push_back(han);
				Legend ^ roman = gcnew Legend("罗马帝国", 195, 25, 12, 40);
				Legends.push_back(roman);
				Legend ^ british = gcnew Legend("大英帝国", 150, 27, 9, 80);
				Legends.push_back(british);
				Legend ^ nazi = gcnew Legend("纳粹帝国", 165, 35, 7, 60);
				Legends.push_back(nazi);
	}

	private: System::Void SetingsBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 updateUserInfoPanel(); //更新用户信息
				 SettingPage ^setpage = gcnew SettingPage;
				 setpage->userAccount = this->userAccount;
				 setpage->userlist = this->userlist;
				 setpage->Legends = this->Legends;
				 setpage->sumUserNums = this->sumUserNums;
				 setpage->ShowDialog();
				 updateUserInfoPanel();

	}
private: System::Void ClassicGame_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			 Button ^cache = (Button ^)sender;
			 cache->BackgroundImage = Image::FromFile(CURSORBTNBACKGROUNDLOC);

		//	 Image.FromFile
}
private: System::Void ClassicGame_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 Button ^cache = (Button ^)sender;

			 cache->BackgroundImage = Image::FromFile(BTNBACKGROUNDLOC);;

}
private: System::Void BrawlGame_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 Button ^cache = (Button ^)sender;
		//	 cache->Left -= 20;
			 cache->BackgroundImage = Image::FromFile(CURSORBTNBACKGROUNDLOC);
}
private: System::Void BrawlGame_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 Button ^cache = (Button ^)sender;
			 //cache->Left -= 20;
			 cache->BackgroundImage = Image::FromFile(BTNBACKGROUNDLOC);;

}
private: System::Void ClassicGame_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 Button ^cache = (Button ^)sender;
			 
//			 cache->DoubleBuffered = true;
			 cache->BackgroundImage = Image::FromFile(CURSORBTNBACKGROUNDLOC);
			  cache->Left -= 75;
}
private: System::Void ClassicGame_MouseLeave_1(System::Object^  sender, System::EventArgs^  e) {
			 Button ^cache = (Button ^)sender;
			 cache->BackgroundImage = Image::FromFile(BTNBACKGROUNDLOC);;
			 cache->Left += 75;
}
private: System::Void BrawlGame_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (userAccount->name == "游客账号")
			 {
				 MessageBox::Show("游客账号不可以使用该功能");
				 return;
			 }

			// MessageBox::Show("进入随机模式");
			 LegendsView ^chooseLegendsView = gcnew LegendsView;
			 chooseLegendsView->userAccount = this->userAccount;
			 chooseLegendsView->Legends = Legends;
			 chooseLegendsView->SumLegends = /*userAccount->SumLegends+*/4;   ///传输数据
			 chooseLegendsView->setEditorVisible = false;
			 chooseLegendsView->setProcessVisible = true;
			 chooseLegendsView->setInfoLineVisible = true;
			 chooseLegendsView->setViewEditEnable = false;
			 chooseLegendsView->setOkButtonVisible = false;
			 chooseLegendsView->InitializeWindows();
			 updateUserInfoPanel();
}
private: System::Void customGame_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (userAccount->name == "游客账号")
			 {
				 MessageBox::Show("游客账号不可以使用该功能");
				 return;
			 }


			 LegendsView ^chooseLegendsView = gcnew LegendsView;
			 chooseLegendsView->userAccount = this->userAccount;
			 chooseLegendsView->Legends = Legends;
			 chooseLegendsView->SumLegends = /*userAccount->SumLegends+*/4;   ///传输数据
			 chooseLegendsView->setEditorVisible = false;
			 chooseLegendsView->setProcessVisible = true;
			 chooseLegendsView->setInfoLineVisible = true;
			 chooseLegendsView->setViewEditEnable = true;
			 chooseLegendsView->setOkButtonVisible = true;
			 chooseLegendsView->isMutiMode = true;
			 chooseLegendsView->InitializeWindows();
			 updateUserInfoPanel();
}
};
}
