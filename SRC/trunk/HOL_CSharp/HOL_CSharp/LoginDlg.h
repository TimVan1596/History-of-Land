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
	/// LoginDlg ժҪ
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
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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


			 bool isLogin;  //�ж��Ƿ�ɹ���½��boolֵ
	public: bool getIsLogin() {
				return isLogin;
	}


	private:
		/// <summary>
		/// ����������������
	public:	int sumUserNums; // �ܹ����ٸ��û�
			//vector<Legend^> Legends;
			vector<User^> userlist; //���������û���Ϣ
			User^ userAccount;   //�û���¼���˺���Ϣ
	private:  String ^ cacheName; // ����ע�����ת��¼����ʱ�û����������û������ظ������û���

			/// </summary>
			System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			/// <summary>
			/// �����֧������ķ��� - ��Ҫ
			/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
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
				this->Namelabel->Font = (gcnew System::Drawing::Font(L"΢���ź�", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->Namelabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
																			  static_cast<System::Int32>(static_cast<System::Byte>(252)));
				this->Namelabel->Location = System::Drawing::Point(25, 9);
				this->Namelabel->Name = L"Namelabel";
				this->Namelabel->Size = System::Drawing::Size(58, 21);
				this->Namelabel->TabIndex = 0;
				this->Namelabel->Text = L"�û���";
				// 
				// Psdlabel
				// 
				this->Psdlabel->AutoSize = true;
				this->Psdlabel->Font = (gcnew System::Drawing::Font(L"΢���ź�", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->Psdlabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
																			 static_cast<System::Int32>(static_cast<System::Byte>(252)));
				this->Psdlabel->Location = System::Drawing::Point(25, 66);
				this->Psdlabel->Name = L"Psdlabel";
				this->Psdlabel->Size = System::Drawing::Size(42, 21);
				this->Psdlabel->TabIndex = 1;
				this->Psdlabel->Text = L"����";
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
				this->loginBTN->Font = (gcnew System::Drawing::Font(L"΢���ź�", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->loginBTN->ForeColor = System::Drawing::Color::White;
				this->loginBTN->Location = System::Drawing::Point(29, 175);
				this->loginBTN->Name = L"loginBTN";
				this->loginBTN->Size = System::Drawing::Size(231, 42);
				this->loginBTN->TabIndex = 4;
				this->loginBTN->Text = L"��¼";
				this->loginBTN->UseVisualStyleBackColor = false;
				this->loginBTN->Click += gcnew System::EventHandler(this, &LoginDlg::loginBTN_Click);
				// 
				// QuitBTN
				// 
				this->QuitBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->QuitBTN->DialogResult = System::Windows::Forms::DialogResult::Cancel;
				this->QuitBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->QuitBTN->Font = (gcnew System::Drawing::Font(L"΢���ź�", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->QuitBTN->ForeColor = System::Drawing::SystemColors::Window;
				this->QuitBTN->Location = System::Drawing::Point(91, 232);
				this->QuitBTN->Name = L"QuitBTN";
				this->QuitBTN->Size = System::Drawing::Size(101, 35);
				this->QuitBTN->TabIndex = 5;
				this->QuitBTN->Text = L"�˳�";
				this->QuitBTN->UseVisualStyleBackColor = false;
				this->QuitBTN->Click += gcnew System::EventHandler(this, &LoginDlg::QuitBTN_Click);
				// 
				// linkLabel1
				// 
				this->linkLabel1->AutoSize = true;
				this->linkLabel1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			   static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->linkLabel1->Location = System::Drawing::Point(26, 123);
				this->linkLabel1->Name = L"linkLabel1";
				this->linkLabel1->Size = System::Drawing::Size(32, 17);
				this->linkLabel1->TabIndex = 6;
				this->linkLabel1->TabStop = true;
				this->linkLabel1->Text = L"ע��";
				this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginDlg::linkLabel1_LinkClicked);
				// 
				// linkLabel2
				// 
				this->linkLabel2->AutoSize = true;
				this->linkLabel2->Font = (gcnew System::Drawing::Font(L"΢���ź�", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->linkLabel2->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			   static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->linkLabel2->Location = System::Drawing::Point(207, 123);
				this->linkLabel2->Name = L"linkLabel2";
				this->linkLabel2->Size = System::Drawing::Size(56, 17);
				this->linkLabel2->TabIndex = 7;
				this->linkLabel2->TabStop = true;
				this->linkLabel2->Text = L"�ο�����";
				this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginDlg::linkLabel2_LinkClicked);
				// 
				// RegisterBTN
				// 
				this->RegisterBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																				static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->RegisterBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->RegisterBTN->Font = (gcnew System::Drawing::Font(L"΢���ź�", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->RegisterBTN->ForeColor = System::Drawing::Color::White;
				this->RegisterBTN->Location = System::Drawing::Point(29, 273);
				this->RegisterBTN->Name = L"RegisterBTN";
				this->RegisterBTN->Size = System::Drawing::Size(231, 42);
				this->RegisterBTN->TabIndex = 8;
				this->RegisterBTN->Text = L"ע��";
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
				this->againLB->Font = (gcnew System::Drawing::Font(L"΢���ź�", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->againLB->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(142)),
																			static_cast<System::Int32>(static_cast<System::Byte>(252)));
				this->againLB->Location = System::Drawing::Point(25, 140);
				this->againLB->Name = L"againLB";
				this->againLB->Size = System::Drawing::Size(74, 21);
				this->againLB->TabIndex = 10;
				this->againLB->Text = L"�ظ�����";
				this->againLB->Visible = false;
				// 
				// backBTN
				// 
				this->backBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->backBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				this->backBTN->Font = (gcnew System::Drawing::Font(L"΢���ź�", 9));
				this->backBTN->ForeColor = System::Drawing::SystemColors::Window;
				this->backBTN->Location = System::Drawing::Point(91, 326);
				this->backBTN->Name = L"backBTN";
				this->backBTN->Size = System::Drawing::Size(100, 35);
				this->backBTN->TabIndex = 12;
				this->backBTN->Text = L"����";
				this->backBTN->UseVisualStyleBackColor = false;
				this->backBTN->Click += gcnew System::EventHandler(this, &LoginDlg::backBTN_Click);
				// 
				// difLB
				// 
				this->difLB->AutoSize = true;
				this->difLB->BackColor = System::Drawing::Color::Transparent;
				this->difLB->Font = (gcnew System::Drawing::Font(L"΢���ź�", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->difLB->ForeColor = System::Drawing::Color::Red;
				this->difLB->Location = System::Drawing::Point(25, 232);
				this->difLB->Name = L"difLB";
				this->difLB->Size = System::Drawing::Size(135, 20);
				this->difLB->TabIndex = 13;
				this->difLB->Text = L"������������벻ͬ";
				this->difLB->Visible = false;
				// 
				// linkLabel3
				// 
				this->linkLabel3->AutoSize = true;
				this->linkLabel3->Font = (gcnew System::Drawing::Font(L"΢���ź�", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->linkLabel3->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																			   static_cast<System::Int32>(static_cast<System::Byte>(244)));
				this->linkLabel3->Location = System::Drawing::Point(25, 237);
				this->linkLabel3->Name = L"linkLabel3";
				this->linkLabel3->Size = System::Drawing::Size(157, 20);
				this->linkLabel3->TabIndex = 14;
				this->linkLabel3->TabStop = true;
				this->linkLabel3->Text = L"ע��ɹ�  ���ֱ�ӵ�¼";
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
					  MessageBox::Show("�û�������Ϊ��");
					  return;
				 }
				  else if (PsdtextBox->Text == "")
				 {
					 MessageBox::Show("���벻��Ϊ��");
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
							//  MessageBox::Show("����userAccount->copy(userlist[i]);");

							  isLogin = true;

							//  MessageBox::Show("���� isLogin = true;");

							  break;
						  }
					  }
				  }

				//  MessageBox::Show("����loginBTN_Click ");

				 if (isLogin || (this->nameTextBox->Text == "admin" && this->PsdtextBox->Text == "123")){
					// MessageBox::Show("����isLogin ");
					 this->DialogResult = System::Windows::Forms::DialogResult::OK;
				 }
				 else{
					 MessageBox::Show("�˺Ż������������������");
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
				 /*����֮ǰ�İ�ť*/
				 QuitBTN->Visible = false;
				 loginBTN->Visible = false;
				 linkLabel1->Visible = false;
				 linkLabel2->Visible = false;

				 /*�ñ����ص�չ��*/
				 RegisterBTN->Visible = true;
				 // button1->Visible = true;
				 againLB->Visible = true;
				 againTB->Visible = true;

				 //��������*
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
					 this->difLB->Text = "�˺�Ϊ��";
					 return;
				 }
				 else if (PsdtextBox->Text == "")
				 {
					 this->difLB->Text = "����Ϊ��";
					 return;
				 }
				 else if (againTB->Text == "")
				 {
					 this->difLB->Text = "�ظ�����Ϊ��";
					 return;
				 }
				 else if (PsdtextBox->Text != againTB->Text)
				 {
					 this->difLB->Text = "������������벻ͬ";
					 return;
				 }


				 for (int i = 0; i < sumUserNums; ++i)
				 {
					 //  MessageBox::Show(userlist[0]->name + "WTF" + userlist[0]->password);
					 // MessageBox::Show(cache->name + "WTF" + cache->password);
					 //	  MessageBox::Show("WTF");
					 if (userlist[i]->name == nameTextBox->Text)
					 {
						 this->difLB->Text = "���û����ѱ�ע�ᣬ������";
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
					 int SSumScores; //�ܷ�
					 double WWinPercent; //ʤ��
					 int SumRounds; //������ܻغ���
					 int SumLegends; //��Ӣ��
					 int SSumWin; // ��ʤ����
					 vector<Legend^> Legends = gcnew vector<Legend ^>;//����Ӣ��
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
			 userAccount = gcnew User("�ο��˺�", "666", LLegends,0,0,0,0,0);
			 this->DialogResult = System::Windows::Forms::DialogResult::OK;

			/* User::User(String^ nname, String^ ppassword
						, vector<Legend^> LLegends,
						int SSumLegends, double WWinPercent,
						int SSumWin,
						int SSumScores, int SSumRounds);*/
}
};
}
