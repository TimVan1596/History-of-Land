#pragma once

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// HelpPage 摘要
	/// </summary>
	public ref class HelpPage : public System::Windows::Forms::Form
	{
	public:
		HelpPage(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~HelpPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label2;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"华文行楷", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::DarkRed;
			this->label2->Location = System::Drawing::Point(297, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 67);
			this->label2->TabIndex = 11;
			this->label2->Text = L"千古江山";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"华文行楷", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(300, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(276, 51);
			this->label1->TabIndex = 10;
			this->label1->Text = L"History of Land";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(78, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(797, 203);
			this->label3->TabIndex = 12;
			this->label3->Text = L"    千古江山游戏通过不同模式让用户选择一个古代帝国，与另一个帝国进行战争。用户可以通过弓箭手、步兵、骑兵三种方式进攻敌国。\r\n \r\n   进攻中还拥有一系列有"
				L"趣的技能如“诺曼底登陆”，“草船借箭”等技能挑战敌方帝国。玩家拥有领土面积、军事、守备、民心等多个属性。若敌国领土面积为0，己方胜利。\r\n    若己方领土为0"
				L"游戏结束。\r\n\r\n";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(368, 345);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(218, 205);
			this->label4->TabIndex = 13;
			this->label4->Text = L"\r\n弓箭手  克制 步兵\r\n\r\n骑兵   克制  弓箭手\r\n\r\n步兵    克制  骑兵\t\r\n";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																		static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->button3->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(177, 611);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(600, 70);
			this->button3->TabIndex = 14;
			this->button3->Text = L"返回";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &HelpPage::button3_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(366, 205);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(200, 100);
			this->flowLayoutPanel1->TabIndex = 15;
			// 
			// HelpPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Linen;
			this->ClientSize = System::Drawing::Size(955, 711);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"HelpPage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"帮助";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
};
}
