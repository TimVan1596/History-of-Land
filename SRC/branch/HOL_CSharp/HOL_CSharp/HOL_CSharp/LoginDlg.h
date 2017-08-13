#pragma once
#include "SystemWindow.h"

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// LoginDlg 摘要
	/// </summary>
	public ref class LoginDlg : public System::Windows::Forms::Form
	{
	public:
		LoginDlg(void)
		{
			isLogin = false;
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~LoginDlg()
		{
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
			 bool isLogin;  //判断是否成功登陆的bool值
	public: bool getIsLogin() {
				 return isLogin;
			 }


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
		void InitializeComponent(void)
		{
			this->Namelabel = (gcnew System::Windows::Forms::Label());
			this->Psdlabel = (gcnew System::Windows::Forms::Label());
			this->nameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PsdtextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginBTN = (gcnew System::Windows::Forms::Button());
			this->QuitBTN = (gcnew System::Windows::Forms::Button());
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
			this->Psdlabel->Location = System::Drawing::Point(25, 57);
			this->Psdlabel->Name = L"Psdlabel";
			this->Psdlabel->Size = System::Drawing::Size(42, 21);
			this->Psdlabel->TabIndex = 1;
			this->Psdlabel->Text = L"密码";
			// 
			// nameTextBox
			// 
			this->nameTextBox->Location = System::Drawing::Point(29, 33);
			this->nameTextBox->Name = L"nameTextBox";
			this->nameTextBox->Size = System::Drawing::Size(133, 21);
			this->nameTextBox->TabIndex = 2;
			// 
			// PsdtextBox
			// 
			this->PsdtextBox->Location = System::Drawing::Point(29, 81);
			this->PsdtextBox->MinimumSize = System::Drawing::Size(4, 31);
			this->PsdtextBox->Name = L"PsdtextBox";
			this->PsdtextBox->PasswordChar = '*';
			this->PsdtextBox->Size = System::Drawing::Size(231, 31);
			this->PsdtextBox->TabIndex = 3;
			// 
			// loginBTN
			// 
			this->loginBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																		 static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->loginBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBTN->ForeColor = System::Drawing::Color::White;
			this->loginBTN->Location = System::Drawing::Point(29, 135);
			this->loginBTN->Name = L"loginBTN";
			this->loginBTN->Size = System::Drawing::Size(101, 35);
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
			this->QuitBTN->ForeColor = System::Drawing::Color::White;
			this->QuitBTN->Location = System::Drawing::Point(159, 135);
			this->QuitBTN->Name = L"QuitBTN";
			this->QuitBTN->Size = System::Drawing::Size(101, 35);
			this->QuitBTN->TabIndex = 5;
			this->QuitBTN->Text = L"退出";
			this->QuitBTN->UseVisualStyleBackColor = false;
			this->QuitBTN->Click += gcnew System::EventHandler(this, &LoginDlg::QuitBTN_Click);
			// 
			// LoginDlg
			// 
			this->AcceptButton = this->loginBTN;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->QuitBTN;
			this->ClientSize = System::Drawing::Size(318, 187);
			this->Controls->Add(this->QuitBTN);
			this->Controls->Add(this->loginBTN);
			this->Controls->Add(this->PsdtextBox);
			this->Controls->Add(this->nameTextBox);
			this->Controls->Add(this->Psdlabel);
			this->Controls->Add(this->Namelabel);
			this->Name = L"LoginDlg";
			this->Text = L"LoginDlg";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void loginBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (this->nameTextBox->Text == "admin" && this->PsdtextBox->Text == "123"){
					 isLogin = true;
					 this->DialogResult = System::Windows::Forms::DialogResult::OK;
				 }
				 else{
					 MessageBox::Show("账号或密码输入错误，请重试");
				 }
	}
private: System::Void QuitBTN_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
}
};
}
