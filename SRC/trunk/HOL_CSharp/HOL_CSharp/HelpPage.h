#pragma once

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// HelpPage ժҪ
	/// </summary>
	public ref class HelpPage : public System::Windows::Forms::Form
	{
	public:
		HelpPage(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
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
			this->label2->Font = (gcnew System::Drawing::Font(L"�����п�", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::DarkRed;
			this->label2->Location = System::Drawing::Point(297, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 67);
			this->label2->TabIndex = 11;
			this->label2->Text = L"ǧ�Ž�ɽ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"�����п�", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->label3->Font = (gcnew System::Drawing::Font(L"΢���ź�", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(78, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(797, 203);
			this->label3->TabIndex = 12;
			this->label3->Text = L"    ǧ�Ž�ɽ��Ϸͨ����ͬģʽ���û�ѡ��һ���Ŵ��۹�������һ���۹�����ս�����û�����ͨ�������֡�������������ַ�ʽ�����й���\r\n \r\n   �����л�ӵ��һϵ����"
				L"Ȥ�ļ����硰ŵ���׵�½�������ݴ�������ȼ�����ս�з��۹������ӵ��������������¡��ر������ĵȶ�����ԡ����й��������Ϊ0������ʤ����\r\n    ����������Ϊ0"
				L"��Ϸ������\r\n\r\n";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"΢���ź�", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(368, 345);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(218, 205);
			this->label4->TabIndex = 13;
			this->label4->Text = L"\r\n������  ���� ����\r\n\r\n���   ����  ������\r\n\r\n����    ����  ���\t\r\n";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																		static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->button3->Font = (gcnew System::Drawing::Font(L"΢���ź�", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(177, 611);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(600, 70);
			this->button3->TabIndex = 14;
			this->button3->Text = L"����";
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
			this->Text = L"����";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
};
}
