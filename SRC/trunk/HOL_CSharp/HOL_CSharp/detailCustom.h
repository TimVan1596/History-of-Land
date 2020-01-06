#pragma once
#include "User.h"
#include "CommonHelper.h"

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// detailCustom 摘要
	/// </summary>
	public ref class detailCustom : public System::Windows::Forms::Form
	{
	public:
		detailCustom(void)
		{
			InitializeComponent();
			cache = gcnew Legend;
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~detailCustom()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  AcceptBTN;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  nameTB;
	private: System::Windows::Forms::TextBox^  HPTB;
	private: System::Windows::Forms::TextBox^  ATKTB;
	private: System::Windows::Forms::TextBox^  DFSTB;

	private: System::Windows::Forms::Label^  HPLB;
	private: System::Windows::Forms::Label^  ATKLB;
	private: System::Windows::Forms::Label^  DFSLB;
	private: System::Windows::Forms::Label^  MPLB;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::TextBox^  MPTB;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	public:	Legend ^cache;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->AcceptBTN = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->nameTB = (gcnew System::Windows::Forms::TextBox());
			this->HPTB = (gcnew System::Windows::Forms::TextBox());
			this->ATKTB = (gcnew System::Windows::Forms::TextBox());
			this->DFSTB = (gcnew System::Windows::Forms::TextBox());
			this->HPLB = (gcnew System::Windows::Forms::Label());
			this->ATKLB = (gcnew System::Windows::Forms::Label());
			this->DFSLB = (gcnew System::Windows::Forms::Label());
			this->MPLB = (gcnew System::Windows::Forms::Label());
			this->MPTB = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// AcceptBTN
			// 
			this->AcceptBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																		  static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->AcceptBTN->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->AcceptBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AcceptBTN->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->AcceptBTN->ForeColor = System::Drawing::SystemColors::Window;
			this->AcceptBTN->Location = System::Drawing::Point(263, 267);
			this->AcceptBTN->Name = L"AcceptBTN";
			this->AcceptBTN->Size = System::Drawing::Size(222, 49);
			this->AcceptBTN->TabIndex = 15;
			this->AcceptBTN->Text = L"确 认";
			this->AcceptBTN->UseVisualStyleBackColor = false;
			this->AcceptBTN->Click += gcnew System::EventHandler(this, &detailCustom::AcceptBTN_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																		static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(296, 330);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 34);
			this->button1->TabIndex = 16;
			this->button1->Text = L"返 回";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(40, 121);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 26);
			this->label1->TabIndex = 17;
			this->label1->Text = L"国号";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(191, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 26);
			this->label2->TabIndex = 18;
			this->label2->Text = L"领土面积";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(352, 121);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 26);
			this->label3->TabIndex = 19;
			this->label3->Text = L"军队";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(491, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 26);
			this->label4->TabIndex = 20;
			this->label4->Text = L"守备";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(627, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 26);
			this->label5->TabIndex = 21;
			this->label5->Text = L"民心";
			// 
			// nameTB
			// 
			this->nameTB->Location = System::Drawing::Point(12, 172);
			this->nameTB->Name = L"nameTB";
			this->nameTB->Size = System::Drawing::Size(112, 21);
			this->nameTB->TabIndex = 22;
			// 
			// HPTB
			// 
			this->HPTB->Location = System::Drawing::Point(179, 172);
			this->HPTB->Name = L"HPTB";
			this->HPTB->Size = System::Drawing::Size(100, 21);
			this->HPTB->TabIndex = 23;
			this->HPTB->TextChanged += gcnew System::EventHandler(this, &detailCustom::HPTB_TextChanged);
			// 
			// ATKTB
			// 
			this->ATKTB->Location = System::Drawing::Point(335, 172);
			this->ATKTB->Name = L"ATKTB";
			this->ATKTB->Size = System::Drawing::Size(100, 21);
			this->ATKTB->TabIndex = 24;
			this->ATKTB->TextChanged += gcnew System::EventHandler(this, &detailCustom::ATKTB_TextChanged);
			// 
			// DFSTB
			// 
			this->DFSTB->Location = System::Drawing::Point(471, 172);
			this->DFSTB->Name = L"DFSTB";
			this->DFSTB->Size = System::Drawing::Size(100, 21);
			this->DFSTB->TabIndex = 25;
			this->DFSTB->TextChanged += gcnew System::EventHandler(this, &detailCustom::DFSTB_TextChanged_1);
			// 
			// HPLB
			// 
			this->HPLB->AutoSize = true;
			this->HPLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->HPLB->ForeColor = System::Drawing::Color::Firebrick;
			this->HPLB->Location = System::Drawing::Point(211, 196);
			this->HPLB->Name = L"HPLB";
			this->HPLB->Size = System::Drawing::Size(24, 26);
			this->HPLB->TabIndex = 27;
			this->HPLB->Text = L"0";
			// 
			// ATKLB
			// 
			this->ATKLB->AutoSize = true;
			this->ATKLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ATKLB->ForeColor = System::Drawing::Color::Firebrick;
			this->ATKLB->Location = System::Drawing::Point(369, 196);
			this->ATKLB->Name = L"ATKLB";
			this->ATKLB->Size = System::Drawing::Size(24, 26);
			this->ATKLB->TabIndex = 28;
			this->ATKLB->Text = L"0";
			// 
			// DFSLB
			// 
			this->DFSLB->AutoSize = true;
			this->DFSLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->DFSLB->ForeColor = System::Drawing::Color::Firebrick;
			this->DFSLB->Location = System::Drawing::Point(504, 196);
			this->DFSLB->Name = L"DFSLB";
			this->DFSLB->Size = System::Drawing::Size(24, 26);
			this->DFSLB->TabIndex = 29;
			this->DFSLB->Text = L"0";
			// 
			// MPLB
			// 
			this->MPLB->AutoSize = true;
			this->MPLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->MPLB->ForeColor = System::Drawing::Color::Firebrick;
			this->MPLB->Location = System::Drawing::Point(642, 196);
			this->MPLB->Name = L"MPLB";
			this->MPLB->Size = System::Drawing::Size(24, 26);
			this->MPLB->TabIndex = 30;
			this->MPLB->Text = L"0";
			// 
			// MPTB
			// 
			this->MPTB->Location = System::Drawing::Point(604, 172);
			this->MPTB->Name = L"MPTB";
			this->MPTB->ReadOnly = true;
			this->MPTB->Size = System::Drawing::Size(100, 21);
			this->MPTB->TabIndex = 26;
			this->MPTB->TextChanged += gcnew System::EventHandler(this, &detailCustom::MPTB_TextChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(134)),
																		static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->button2->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->ForeColor = System::Drawing::SystemColors::Window;
			this->button2->Location = System::Drawing::Point(24, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 35);
			this->button2->TabIndex = 31;
			this->button2->Text = L"生 成";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::OrangeRed;
			this->label6->Location = System::Drawing::Point(7, 24);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(219, 26);
			this->label6->TabIndex = 32;
			this->label6->Text = L"您共可以分配100天赋点";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::OrangeRed;
			this->label7->Location = System::Drawing::Point(7, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(252, 26);
			this->label7->TabIndex = 33;
			this->label7->Text = L"其中5点领土面积 = 1天赋点";
			// 
			// detailCustom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleGoldenrod;
			this->ClientSize = System::Drawing::Size(716, 376);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->MPLB);
			this->Controls->Add(this->DFSLB);
			this->Controls->Add(this->ATKLB);
			this->Controls->Add(this->HPLB);
			this->Controls->Add(this->MPTB);
			this->Controls->Add(this->DFSTB);
			this->Controls->Add(this->ATKTB);
			this->Controls->Add(this->HPTB);
			this->Controls->Add(this->nameTB);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->AcceptBTN);
			this->Name = L"detailCustom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"detailCustom";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AcceptBTN_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (nameTB->Text != "" && HPTB->Text != ""
					 && ATKTB->Text != "" && DFSTB->Text != ""
					 && MPTB->Text != "")
				 {
					 int HP = std::stoi(CommonHelper::ConvertToString(HPLB->Text));
					 int ATK = std::stoi(CommonHelper::ConvertToString(ATKLB->Text));
					 int DFS = std::stoi(CommonHelper::ConvertToString(DFSLB->Text));
					 int MP = std::stoi(CommonHelper::ConvertToString(MPLB->Text));
					 cache->initiate(nameTB->Text, HP,ATK,DFS,MP);
					 this->DialogResult = System::Windows::Forms::DialogResult::OK;

				 }
				 else
				 {
					 MessageBox::Show("填入信息不能为空");
				 }
	}
private: System::Void DFSTB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			

}

//private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
//			 if (HPTB->Text != "" && nameTB->Text != ""
//				 && ATKTB->Text != "" && DFSTB->Text != ""
//				 )
//			 {
//				 int HP = std::stoi(CommonHelper::ConvertToString(HPTB->Text));
//				 int ATK = std::stoi(CommonHelper::ConvertToString(ATKTB->Text));
//				 int DFS = std::stoi(CommonHelper::ConvertToString(DFSTB->Text));
//				 int MP = 100 - HP - ATK - DFS;
//				 MessageBox::Show("进入 button2_Click");
//
//				 MPTB->Text = MP.ToString();
//			 }
//}
private: System::Void HPTB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (HPTB->Text != ""){
				 int cacheint = std::stoi(CommonHelper::ConvertToString(HPTB->Text));
				 HPLB->Text = (cacheint*5).ToString();
			 }
}
private: System::Void ATKTB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (ATKTB->Text != ""){
				 int cacheint = std::stoi(CommonHelper::ConvertToString(ATKTB->Text));
				 ATKLB->Text = (cacheint*1).ToString();
			 }
}
private: System::Void DFSTB_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
			 if (DFSTB->Text != ""){
				 int cacheint = std::stoi(CommonHelper::ConvertToString(DFSTB->Text));
				 DFSLB->Text = (cacheint*0.5).ToString();
			 }

			 if (HPTB->Text != "" && nameTB->Text != ""
				 && ATKTB->Text != "" && DFSTB->Text != ""
				 )
			 {
				 int HP = std::stoi(CommonHelper::ConvertToString(HPTB->Text));
				 int ATK = std::stoi(CommonHelper::ConvertToString(ATKTB->Text));
				 int DFS = std::stoi(CommonHelper::ConvertToString(DFSTB->Text));
				 int MP = 100 - HP - ATK - DFS;
				// MessageBox::Show("进入 DFSTB_TextChanged");
				 MPTB->Text = MP.ToString();
			 }


}
private: System::Void MPTB_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (MPTB->Text != ""){
				 int cacheint = std::stoi(CommonHelper::ConvertToString(MPTB->Text));
				 MPLB->Text = (cacheint*4).ToString();
			 }
}
};
}
