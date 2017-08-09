#pragma once

namespace MyNotePad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// fuckForm 摘要
	/// </summary>
	public ref class fuckForm : public System::Windows::Forms::Form {
	public:
		fuckForm(void) {
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~fuckForm() {
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Label^  MainTitle;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;



	protected:

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
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->MainTitle = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &fuckForm::saveFileDialog1_FileOk);
			// 
			// MainTitle
			// 
			this->MainTitle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->MainTitle->AutoSize = true;
			this->MainTitle->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->MainTitle->Font = (gcnew System::Drawing::Font(L"黑体", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->MainTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
																		  static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->MainTitle->Location = System::Drawing::Point(372, 37);
			this->MainTitle->Name = L"MainTitle";
			this->MainTitle->Size = System::Drawing::Size(237, 81);
			this->MainTitle->TabIndex = 0;
			this->MainTitle->Text = L"History of Land\r\n \r\n千古江山";
			this->MainTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->MainTitle->Click += gcnew System::EventHandler(this, &fuckForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Khaki;
			this->button1->Font = (gcnew System::Drawing::Font(L"黑体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(247, 154);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(465, 82);
			this->button1->TabIndex = 1;
			this->button1->Text = L"千古江山";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Khaki;
			this->button2->Font = (gcnew System::Drawing::Font(L"黑体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(247, 272);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(465, 82);
			this->button2->TabIndex = 2;
			this->button2->Text = L"快战一场";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Khaki;
			this->button3->Font = (gcnew System::Drawing::Font(L"黑体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(247, 382);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(465, 82);
			this->button3->TabIndex = 3;
			this->button3->Text = L"沙盘点兵";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// fuckForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1009, 592);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->MainTitle);
			this->Name = L"fuckForm";
			this->Text = L"fuckForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void saveFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {

		
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
