#pragma once
#include "RankListWindow.h"
#include "customWindow.h"
#include "HelpPage.h"
#include "ContractUS.h"

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SettingPage ժҪ
	/// </summary>
	public ref class SettingPage : public System::Windows::Forms::Form {
	public:
		SettingPage(void) {
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~SettingPage() {
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  MainTitle;
	private: System::Windows::Forms::Button^  RankListBTN;
	private: System::Windows::Forms::Button^  customBTN;
	private: System::Windows::Forms::Button^  contactBTN;



	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  helpBTN;

	protected:

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;
	public:	int sumUserNums; // �ܹ����ٸ��û�
			//vector<Legend^> Legends;
			vector<User^> userlist; //���������û���Ϣ
			User^ userAccount;   //�û���¼���˺���Ϣ
	public: vector<Legend^> Legends; //����ٷ��ṩ�ģ��Լ��û��Լ�������Ӣ��


#pragma region Windows Form Designer generated code
			/// <summary>
			/// �����֧������ķ��� - ��Ҫ
			/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
			/// </summary>
			void InitializeComponent(void) {
				this->MainTitle = (gcnew System::Windows::Forms::Label());
				this->RankListBTN = (gcnew System::Windows::Forms::Button());
				this->customBTN = (gcnew System::Windows::Forms::Button());
				this->contactBTN = (gcnew System::Windows::Forms::Button());
				this->button3 = (gcnew System::Windows::Forms::Button());
				this->helpBTN = (gcnew System::Windows::Forms::Button());
				this->SuspendLayout();
				// 
				// MainTitle
				// 
				this->MainTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
				this->MainTitle->AutoSize = true;
				this->MainTitle->Font = (gcnew System::Drawing::Font(L"΢���ź�", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->MainTitle->ForeColor = System::Drawing::Color::IndianRed;
				this->MainTitle->Location = System::Drawing::Point(101, 9);
				this->MainTitle->Name = L"MainTitle";
				this->MainTitle->Size = System::Drawing::Size(226, 72);
				this->MainTitle->TabIndex = 1;
				this->MainTitle->Text = L"History of Land\r\nǧ�Ž�ɽ";
				this->MainTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
				// 
				// RankListBTN
				// 
				this->RankListBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																				static_cast<System::Int32>(static_cast<System::Byte>(187)));
				this->RankListBTN->Font = (gcnew System::Drawing::Font(L"΢���ź�", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->RankListBTN->ForeColor = System::Drawing::Color::Black;
				this->RankListBTN->Location = System::Drawing::Point(73, 156);
				this->RankListBTN->Name = L"RankListBTN";
				this->RankListBTN->Size = System::Drawing::Size(286, 70);
				this->RankListBTN->TabIndex = 3;
				this->RankListBTN->Text = L"���а�";
				this->RankListBTN->UseVisualStyleBackColor = false;
				this->RankListBTN->Click += gcnew System::EventHandler(this, &SettingPage::RankListBTN_Click);
				// 
				// customBTN
				// 
				this->customBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																			  static_cast<System::Int32>(static_cast<System::Byte>(187)));
				this->customBTN->Font = (gcnew System::Drawing::Font(L"΢���ź�", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->customBTN->ForeColor = System::Drawing::Color::Black;
				this->customBTN->Location = System::Drawing::Point(73, 255);
				this->customBTN->Name = L"customBTN";
				this->customBTN->Size = System::Drawing::Size(286, 70);
				this->customBTN->TabIndex = 4;
				this->customBTN->Text = L"�Զ���۹�";
				this->customBTN->UseVisualStyleBackColor = false;
				this->customBTN->Click += gcnew System::EventHandler(this, &SettingPage::customBTN_Click);
				// 
				// contactBTN
				// 
				this->contactBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																			   static_cast<System::Int32>(static_cast<System::Byte>(187)));
				this->contactBTN->Font = (gcnew System::Drawing::Font(L"΢���ź�", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->contactBTN->ForeColor = System::Drawing::Color::Black;
				this->contactBTN->Location = System::Drawing::Point(73, 453);
				this->contactBTN->Name = L"contactBTN";
				this->contactBTN->Size = System::Drawing::Size(286, 70);
				this->contactBTN->TabIndex = 5;
				this->contactBTN->Text = L"��ϵ����";
				this->contactBTN->UseVisualStyleBackColor = false;
				this->contactBTN->Click += gcnew System::EventHandler(this, &SettingPage::contactBTN_Click);
				// 
				// button3
				// 
				this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																			static_cast<System::Int32>(static_cast<System::Byte>(187)));
				this->button3->Font = (gcnew System::Drawing::Font(L"΢���ź�", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->button3->ForeColor = System::Drawing::Color::Black;
				this->button3->Location = System::Drawing::Point(140, 588);
				this->button3->Name = L"button3";
				this->button3->Size = System::Drawing::Size(144, 70);
				this->button3->TabIndex = 6;
				this->button3->Text = L"����";
				this->button3->UseVisualStyleBackColor = false;
				this->button3->Click += gcnew System::EventHandler(this, &SettingPage::button3_Click);
				// 
				// helpBTN
				// 
				this->helpBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																			static_cast<System::Int32>(static_cast<System::Byte>(187)));
				this->helpBTN->Font = (gcnew System::Drawing::Font(L"΢���ź�", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(134)));
				this->helpBTN->ForeColor = System::Drawing::Color::Black;
				this->helpBTN->Location = System::Drawing::Point(73, 353);
				this->helpBTN->Name = L"helpBTN";
				this->helpBTN->Size = System::Drawing::Size(286, 70);
				this->helpBTN->TabIndex = 7;
				this->helpBTN->Text = L"����";
				this->helpBTN->UseVisualStyleBackColor = false;
				this->helpBTN->Click += gcnew System::EventHandler(this, &SettingPage::helpBTN_Click);
				// 
				// SettingPage
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(448, 670);
				this->Controls->Add(this->helpBTN);
				this->Controls->Add(this->button3);
				this->Controls->Add(this->contactBTN);
				this->Controls->Add(this->customBTN);
				this->Controls->Add(this->RankListBTN);
				this->Controls->Add(this->MainTitle);
				this->Name = L"SettingPage";
				this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				this->Text = L"SettingPage";
				this->ResumeLayout(false);
				this->PerformLayout();

			}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
	private: System::Void RankListBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (userAccount->name == "�ο��˺�")
				 {
					 MessageBox::Show("�ο��˺Ų�����ʹ�øù���");
					 return;
				 }

				 RankListWindow ^ranklist = gcnew RankListWindow;
				 ranklist->userAccount = this->userAccount;
				 ranklist->userlist = this->userlist;
				 ranklist->sumUserNums = this->sumUserNums;
				 ranklist->InitializeWindows();
	}
	private: System::Void customBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (userAccount->name == "�ο��˺�")
				 {
					 MessageBox::Show("�ο��˺Ų�����ʹ�øù���");
					 return;
				 }
				 customWindow ^custom = gcnew customWindow;
				 custom->userAccount = this->userAccount;
				 custom->Legends = this->Legends;
				 custom->InitializeWindows();
	}
	private: System::Void helpBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 HelpPage ^help = gcnew HelpPage;
				 help->ShowDialog();
	}
private: System::Void contactBTN_Click(System::Object^  sender, System::EventArgs^  e) {
			 ContractUS ^con = gcnew ContractUS;
			 con->ShowDialog();
}
};
}
