#pragma once
#include "SystemWindow.h"
#include "User.h"
#include "CommonHelper.h"
#include <sstream>
#include "cliext/vector"


namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace cliext;

	/// <summary>
	/// LoginDlg 摘要
	/// </summary>
	public ref class LoginDlg : public System::Windows::Forms::Form {
	public:
		LoginDlg(void) {
			isLogin = false;
			InitializeComponent();
			userlist = gcnew vector<User^>;
			sumUserNums = 0;
			readInfo();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~LoginDlg() {
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Namelabel;
	private: System::Windows::Forms::Label^  Psdlabel;
	private: System::Windows::Forms::TextBox^  nameTextBox;
	private: System::Windows::Forms::TextBox^  PsdtextBox;
	private: System::Windows::Forms::Button^  loginBTN;
	private: System::Windows::Forms::Button^  QuitBTN;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;

	private: System::Windows::Forms::Button^  RegisterBTN;
	private: System::Windows::Forms::TextBox^  againTB;

	private: System::Windows::Forms::Label^  againLB;
	private: System::Windows::Forms::Button^  backBTN;
	private: System::Windows::Forms::Label^  difLB;
	private: System::Windows::Forms::LinkLabel^  linkLabel3;


			 bool isLogin;  //判断是否成功登陆的bool值
	public: bool getIsLogin() {
				return isLogin;
	}


	private:
		/// <summary>
		/// 必需的设计器变量。
	public:	int sumUserNums; // 总共多少个用户
			//vector<Legend^> Legends;
			vector<User^> userlist; //保存所有用户信息
			User^ userAccount;   //用户登录的账号信息
	private:  String ^ cacheName; // 保存注册后跳转登录的临时用户名，方便用户不用重复输入用户名

			/// </summary>
			System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			/// <summary>
			/// 设计器支持所需的方法 - 不要
			/// 使用代码编辑器修改此方法的内容。
			/// </summary>
			void InitializeComponent(void) {
				this->Namelabel = (gcnew System::Windows::Forms::Label());
				this->Psdlabel = (gcnew System::Windows::Forms::Label());
				this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
				this->PsdtextBox = (gcnew System::Windows::Forms::TextBox());
				this->loginBTN = (gcnew System::Windows::Forms::Button());
				this->QuitBTN = (gcnew System::Windows::Forms::Button());
				this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
				this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
				this->RegisterBTN = (gcnew System::Windows::Forms::Button());
				this->againTB = (gcnew System::Windows::Forms::TextBox());
				this->againLB = (gcnew System::Windows::Forms::Label());
				this->backBTN = (gcnew System::Windows::Forms::Button());
				this->difLB = (gcnew System::Windows::Forms::Label());
				this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
				this->SuspendLayout();
				// 
				// Namelabel
				// 
				this->Namelabel->AutoSize = true;
				this->Namelabel->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->Namelabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
																			  static_cast<System::Int32>(static_cast<System::Byte>(252)));
				this->Namelabel->Location = System::Drawing::Point(25, 9);
				this->Namelabel->Name = L"Namelabel";
				this->Namelabel->Size = System::Drawing::Size(58, 21);
				this->Namelabel->TabIndex = 0;
				this->Namelabel->Text = L"用户名";
				// 
				// Psdlabel
				// 
				this->Psdlabel->AutoSize = true;
				this->Psdlabel->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->Psdlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
																			 static_cast<System::Int32>(static_cast<System::Byte>(252)));
				this->Psdlabel->Location = System::Drawing::Point(25, 66);
				this->Psdlabel->Name = L"Psdlabel";
				this->Psdlabel->Size = System::Drawing::Size(42, 21);
				this->Psdlabel->TabIndex = 1;
				this->Psdlabel->Text = L"密码";
				// 
				// nameTextBox
				// 
				this->nameTextBox->Location = System::Drawing::Point(29, 33);
				this->nameTextBox->Name = L"nameTextBox";
				this->nameTextBox->Size = System::Drawing::Size(231, 21);
				this->nameTextBox->TabIndex = 2;
				// 
				// PsdtextBox
				// 
				this->PsdtextBox->Location = System::Drawing::Point(29, 90);
				this->PsdtextBox->MinimumSize = System::Drawing::Size(4, 31);
				this->PsdtextBox->Name = L"PsdtextBox";
				this->PsdtextBox->PasswordChar = '*';
				this->PsdtextBox->Size = System::Drawing::Size(231, 21);
				this->PsdtextBox->TabIndex = 3;
				// 
				// loginBTN
				// 
				this->loginBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			 static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->loginBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->loginBTN->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->loginBTN->ForeColor = System::Drawing::Color::White;
				this->loginBTN->Location = System::Drawing::Point(29, 175);
				this->loginBTN->Name = L"loginBTN";
				this->loginBTN->Size = System::Drawing::Size(231, 42);
				this->loginBTN->TabIndex = 4;
				this->loginBTN->Text = L"登录";
				this->loginBTN->UseVisualStyleBackColor = false;
				this->loginBTN->Click += gcnew System::EventHandler(this, &LoginDlg::loginBTN_Click);
				// 
				// QuitBTN
				// 
				this->QuitBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->QuitBTN->DialogResult = System::Windows::Forms::DialogResult::Cancel;
				this->QuitBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->QuitBTN->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->QuitBTN->ForeColor = System::Drawing::SystemColors::Window;
				this->QuitBTN->Location = System::Drawing::Point(91, 232);
				this->QuitBTN->Name = L"QuitBTN";
				this->QuitBTN->Size = System::Drawing::Size(101, 35);
				this->QuitBTN->TabIndex = 5;
				this->QuitBTN->Text = L"退出";
				this->QuitBTN->UseVisualStyleBackColor = false;
				this->QuitBTN->Click += gcnew System::EventHandler(this, &LoginDlg::QuitBTN_Click);
				// 
				// linkLabel1
				// 
				this->linkLabel1->AutoSize = true;
				this->linkLabel1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			   static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->linkLabel1->Location = System::Drawing::Point(26, 123);
				this->linkLabel1->Name = L"linkLabel1";
				this->linkLabel1->Size = System::Drawing::Size(32, 17);
				this->linkLabel1->TabIndex = 6;
				this->linkLabel1->TabStop = true;
				this->linkLabel1->Text = L"注册";
				this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginDlg::linkLabel1_LinkClicked);
				// 
				// linkLabel2
				// 
				this->linkLabel2->AutoSize = true;
				this->linkLabel2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->linkLabel2->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			   static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->linkLabel2->Location = System::Drawing::Point(207, 123);
				this->linkLabel2->Name = L"linkLabel2";
				this->linkLabel2->Size = System::Drawing::Size(56, 17);
				this->linkLabel2->TabIndex = 7;
				this->linkLabel2->TabStop = true;
				this->linkLabel2->Text = L"游客试玩";
				this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginDlg::linkLabel2_LinkClicked);
				// 
				// RegisterBTN
				// 
				this->RegisterBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																				static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->RegisterBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->RegisterBTN->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->RegisterBTN->ForeColor = System::Drawing::Color::White;
				this->RegisterBTN->Location = System::Drawing::Point(29, 273);
				this->RegisterBTN->Name = L"RegisterBTN";
				this->RegisterBTN->Size = System::Drawing::Size(231, 42);
				this->RegisterBTN->TabIndex = 8;
				this->RegisterBTN->Text = L"注册";
				this->RegisterBTN->UseVisualStyleBackColor = false;
				this->RegisterBTN->Visible = false;
				this->RegisterBTN->Click += gcnew System::EventHandler(this, &LoginDlg::RegisterBTN_Click);
				// 
				// againTB
				// 
				this->againTB->Location = System::Drawing::Point(29, 175);
				this->againTB->MinimumSize = System::Drawing::Size(4, 31);
				this->againTB->Name = L"againTB";
				this->againTB->PasswordChar = '*';
				this->againTB->Size = System::Drawing::Size(231, 21);
				this->againTB->TabIndex = 11;
				this->againTB->Visible = false;
				// 
				// againLB
				// 
				this->againLB->AutoSize = true;
				this->againLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->againLB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
																			static_cast<System::Int32>(static_cast<System::Byte>(252)));
				this->againLB->Location = System::Drawing::Point(25, 140);
				this->againLB->Name = L"againLB";
				this->againLB->Size = System::Drawing::Size(74, 21);
				this->againLB->TabIndex = 10;
				this->againLB->Text = L"重复密码";
				this->againLB->Visible = false;
				// 
				// backBTN
				// 
				this->backBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->backBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->backBTN->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9));
				this->backBTN->ForeColor = System::Drawing::SystemColors::Window;
				this->backBTN->Location = System::Drawing::Point(91, 326);
				this->backBTN->Name = L"backBTN";
				this->backBTN->Size = System::Drawing::Size(100, 35);
				this->backBTN->TabIndex = 12;
				this->backBTN->Text = L"返回";
				this->backBTN->UseVisualStyleBackColor = false;
				this->backBTN->Click += gcnew System::EventHandler(this, &LoginDlg::backBTN_Click);
				// 
				// difLB
				// 
				this->difLB->AutoSize = true;
				this->difLB->BackColor = System::Drawing::Color::Transparent;
				this->difLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->difLB->ForeColor = System::Drawing::Color::Red;
				this->difLB->Location = System::Drawing::Point(25, 232);
				this->difLB->Name = L"difLB";
				this->difLB->Size = System::Drawing::Size(135, 20);
				this->difLB->TabIndex = 13;
				this->difLB->Text = L"两次输入的密码不同";
				this->difLB->Visible = false;
				// 
				// linkLabel3
				// 
				this->linkLabel3->AutoSize = true;
				this->linkLabel3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->linkLabel3->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			   static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->linkLabel3->Location = System::Drawing::Point(25, 237);
				this->linkLabel3->Name = L"linkLabel3";
				this->linkLabel3->Size = System::Drawing::Size(157, 20);
				this->linkLabel3->TabIndex = 14;
				this->linkLabel3->TabStop = true;
				this->linkLabel3->Text = L"注册成功  点击直接登录";
				this->linkLabel3->Visible = false;
				this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginDlg::linkLabel3_LinkClicked);
				// 
				// LoginDlg
				// 
				this->AcceptButton = this->loginBTN;
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->CancelButton = this->QuitBTN;
				this->ClientSize = System::Drawing::Size(284, 270);
				this->Controls->Add(this->linkLabel3);
				this->Controls->Add(this->difLB);
				this->Controls->Add(this->backBTN);
				this->Controls->Add(this->againTB);
				this->Controls->Add(this->againLB);
				this->Controls->Add(this->RegisterBTN);
				this->Controls->Add(this->linkLabel2);
				this->Controls->Add(this->linkLabel1);
				this->Controls->Add(this->QuitBTN);
				this->Controls->Add(this->loginBTN);
				this->Controls->Add(this->PsdtextBox);
				this->Controls->Add(this->nameTextBox);
				this->Controls->Add(this->Psdlabel);
				this->Controls->Add(this->Namelabel);
				this->Name = L"LoginDlg";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"LoginDlg";
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion

	private: System::Void loginBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 isLogin = false;

				
				  if (nameTextBox->Text == "")
				 {
					  MessageBox::Show("用户名不能为空");
					  return;
				 }
				  else if (PsdtextBox->Text == "")
				 {
					 MessageBox::Show("密码不能为空");
					 return;
				 }

		//		  MessageBox::Show(nameTextBox->Text + "WTF" + PsdtextBox->Text);

				//  MessageBox::Show(sumUserNums.ToString());

				  for (int i = 0; i < sumUserNums;++i)
				   {
					//  MessageBox::Show(userlist[0]->name + "WTF" + userlist[0]->password);
					 // MessageBox::Show(cache->name + "WTF" + cache->password);
				//	  MessageBox::Show("WTF");
					  if (userlist[i]->name == nameTextBox->Text)
					  {
						  if (userlist[i]->password == PsdtextBox->Text)
						  {

							  userAccount = gcnew User;
							  userAccount->copy(userlist[i]->name,
												userlist[i]->password,
												userlist[i]->Legends,
												userlist[i]->SumLegends,
												userlist[i]->WinPercent,
												userlist[i]->SumWin,
												userlist[i]->SumScores,
												userlist[i]->SumRounds
												);
							//  MessageBox::Show("进入userAccount->copy(userlist[i]);");

							  isLogin = true;

							//  MessageBox::Show("进入 isLogin = true;");

							  break;
						  }
					  }
				  }

				//  MessageBox::Show("进入loginBTN_Click ");

				 if (isLogin || (this->nameTextBox->Text == "admin" && this->PsdtextBox->Text == "123")){
					// MessageBox::Show("进入isLogin ");
					 this->DialogResult = System::Windows::Forms::DialogResult::OK;
				 }
				 else{
					 MessageBox::Show("账号或密码输入错误，请重试");
					 PsdtextBox->Text = "";
					 nameTextBox->Text = "";

				 }
	}
	private: System::Void QuitBTN_Click(System::Object^  sender, System::EventArgs^  e) {


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

					 for each (Legend^ cache in varUser->Legends) {
						 sw->WriteLine(cache->name);
						 sw->WriteLine((cache->HP).ToString());
						 sw->WriteLine((cache->ATK).ToString());
						 sw->WriteLine((cache->DFS).ToString());
						 sw->WriteLine((cache->MP).ToString());
					 }

				 }


				 sw->Flush();
				 sw->Close();

				 Close();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 this->Height = 400;
				 /*隐藏之前的按钮*/
				 QuitBTN->Visible = false;
				 loginBTN->Visible = false;
				 linkLabel1->Visible = false;
				 linkLabel2->Visible = false;

				 /*让被隐藏的展现*/
				 RegisterBTN->Visible = true;
				 // button1->Visible = true;
				 againLB->Visible = true;
				 againTB->Visible = true;

				 //解除密码变*
				 PsdtextBox->PasswordChar = 0;
				 againTB->PasswordChar = 0;



	}


	private: System::Void backBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Height = 309;
				 linkLabel3->Visible = false;


				 QuitBTN->Visible = true;
				 loginBTN->Visible = true;
				 linkLabel1->Visible = true;
				 linkLabel2->Visible = true;

				 this->difLB->Visible = false;
				 RegisterBTN->Visible = false;
				 // button1->Visible = true;
				 againLB->Visible = false;
				 againTB->Visible = false;

				 PsdtextBox->PasswordChar = '*';
				 PsdtextBox->Text = "";
				 nameTextBox->Text = "";
				 againTB->Text = "";


	}
	private: System::Void RegisterBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->difLB->Visible = true;
				 if (nameTextBox->Text == "")
				 {
					 this->difLB->Text = "账号为空";
					 return;
				 }
				 else if (PsdtextBox->Text == "")
				 {
					 this->difLB->Text = "密码为空";
					 return;
				 }
				 else if (againTB->Text == "")
				 {
					 this->difLB->Text = "重复密码为空";
					 return;
				 }
				 else if (PsdtextBox->Text != againTB->Text)
				 {
					 this->difLB->Text = "两次输入的密码不同";
					 return;
				 }


				 for (int i = 0; i < sumUserNums; ++i)
				 {
					 //  MessageBox::Show(userlist[0]->name + "WTF" + userlist[0]->password);
					 // MessageBox::Show(cache->name + "WTF" + cache->password);
					 //	  MessageBox::Show("WTF");
					 if (userlist[i]->name == nameTextBox->Text)
					 {
						 this->difLB->Text = "此用户名已被注册，请重试";
							 return;
							
					 }
				 }



				 this->difLB->Visible = false;
				 User^ newaccount = gcnew User(nameTextBox->Text, PsdtextBox->Text);
				 userlist.push_back(newaccount);

				 /*	User(String^ name, String^ password
		 , vector<Legend^> Legends);*/
				 linkLabel3->Visible = true;
				 ++sumUserNums;
	}

	private: void readInfo() {

				 if (File::Exists("SQL.holres"))
				 {
					 /*	
					 sw->WriteLine(varUser->name);
					 sw->WriteLine(varUser->password);

					 sw->WriteLine((varUser->SumScores).ToString());
					 sw->WriteLine((varUser->WinPercent).ToString());
					 sw->WriteLine((varUser->SumWin).ToString());
					 sw->WriteLine((varUser->SumRounds).ToString());
					 sw->WriteLine((varUser->SumLegends).ToString());

					 for each (Legend^ cache in varUser->Legends) {
					 sw->WriteLine(cache->name);
					 sw->WriteLine((cache->HP).ToString());
					 sw->WriteLine((cache->ATK).ToString());
					 sw->WriteLine((cache->DFS).ToString());
					 sw->WriteLine((cache->MP).ToString());
					 }*/


					 FileStream ^fs = gcnew FileStream("SQL.holres", System::IO::FileMode::Open);
					 System::IO::StreamReader ^sr = gcnew System::IO::StreamReader(fs);
					 sumUserNums = std::stoi(CommonHelper::ConvertToString(sr->ReadLine()));
					 String^ nname;
					 String^ password;
					 int SSumScores; //总分
					 double WWinPercent; //胜率
					 int SumRounds; //游玩的总回合数
					 int SumLegends; //总英雄
					 int SSumWin; // 总胜场次
					 vector<Legend^> Legends = gcnew vector<Legend ^>;//所有英雄
				//	 MessageBox::Show("sumUserNums = " + (sumUserNums).ToString());

					 for (int i = 0; i < sumUserNums; ++i)
					 {

						 nname = sr->ReadLine();
						 password = sr->ReadLine();
						 SSumScores = std::stoi(CommonHelper::ConvertToString(sr->ReadLine()));
						 WWinPercent = std::atof(CommonHelper::ConvertToChar(sr->ReadLine()));
						 SSumWin = std::stoi(CommonHelper::ConvertToString(sr->ReadLine()));
						 SumRounds = std::stoi(CommonHelper::ConvertToString(sr->ReadLine()));
						 SumLegends = std::stoi(CommonHelper::ConvertToString(sr->ReadLine()));
					//	 MessageBox::Show("WWinPercent = " + (WWinPercent).ToString());

						 for (int ii = 0; ii < SumLegends; ++ii)
						 {
							 String ^name;
							 int HP;
							 int ATK;
							 int DFS;
							 int MP;
							 name = sr->ReadLine();
							 HP = std::stoi(CommonHelper::ConvertToString(sr->ReadLine()));
							 ATK = std::stoi(CommonHelper::ConvertToString(sr->ReadLine()));
							 DFS = std::stoi(CommonHelper::ConvertToString(sr->ReadLine()));
							 MP = std::stoi(CommonHelper::ConvertToString(sr->ReadLine()));
							 Legend^ legendcace = gcnew Legend(name, HP, ATK, DFS, DFS);
							 Legends.push_back(legendcace);
						 }

						 /* User::User(String^ nname, String^ ppassword
									 , vector<Legend^> LLegends,
									 int SSumLegends, double WWinPercent,
									 int SSumWin,
									 int SSumScores, int SSumRounds);*/

						 User^ usercache = gcnew User(nname, password, 
													  Legends,
													  SumLegends  ,WWinPercent, 
													  SSumWin,
													  SSumScores,SumRounds);
						 userlist.push_back(usercache);
						// MessageBox::Show(userlist[0]->name + "WTF" + userlist[0]->password);
						 /*Legend^ cache = gcnew pet(IID, kkind, ssex, nname, hheath, hhappy);
						 pets.push_back(cache);*/
					 }
					// MessageBox::Show("sumUserNums = " + (sumUserNums).ToString());
					 sr->Close();

				 }
	}
	private: System::Void linkLabel3_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 this->Height = 309;
				 linkLabel3->Visible = false;


				 QuitBTN->Visible = true;
				 loginBTN->Visible = true;
				 linkLabel1->Visible = true;
				 linkLabel2->Visible = true;

				 RegisterBTN->Visible = false;
				 // button1->Visible = true;
				 againLB->Visible = false;
				 againTB->Visible = false;

				 PsdtextBox->PasswordChar = '*';
				 PsdtextBox->Text = "";

	}
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 vector<Legend^> LLegends = gcnew vector<Legend^>;
			 userAccount = gcnew User("游客账号", "666", LLegends,0,0,0,0,0);
			 this->DialogResult = System::Windows::Forms::DialogResult::OK;

			/* User::User(String^ nname, String^ ppassword
						, vector<Legend^> LLegends,
						int SSumLegends, double WWinPercent,
						int SSumWin,
						int SSumScores, int SSumRounds);*/
}
};
}
