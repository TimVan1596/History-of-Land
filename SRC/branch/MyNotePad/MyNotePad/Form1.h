#pragma once

namespace MyNotePad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	//using System.IO;
	/// <summary>
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		static String^ FILENAME="";//�ļ���
		Form1(void)

		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  �ļ�FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �½�NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Tsmiopen;
	private: System::Windows::Forms::ToolStripMenuItem^  TsmiSave;
	private: System::Windows::Forms::ToolStripMenuItem^  TmiSaveAs;





	private: System::Windows::Forms::ToolStripMenuItem^  �༭EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ʽOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �鿴VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�XToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  txtContent;
	private: System::Windows::Forms::SaveFileDialog^  SfdSaveFile;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�ļ�FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�½�NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Tsmiopen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TsmiSave = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TmiSaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�˳�XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�༭EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��ʽOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtContent = (gcnew System::Windows::Forms::TextBox());
			this->SfdSaveFile = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->�ļ�FToolStripMenuItem, 
				this->�༭EToolStripMenuItem, this->��ʽOToolStripMenuItem, this->�鿴VToolStripMenuItem, this->����HToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(532, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �ļ�FToolStripMenuItem
			// 
			this->�ļ�FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->�½�NToolStripMenuItem, 
				this->Tsmiopen, this->TsmiSave, this->TmiSaveAs, this->toolStripMenuItem1, this->�˳�XToolStripMenuItem});
			this->�ļ�FToolStripMenuItem->Name = L"�ļ�FToolStripMenuItem";
			this->�ļ�FToolStripMenuItem->Size = System::Drawing::Size(74, 21);
			this->�ļ�FToolStripMenuItem->Text = L"�ļ���&F��";
			// 
			// �½�NToolStripMenuItem
			// 
			this->�½�NToolStripMenuItem->Name = L"�½�NToolStripMenuItem";
			this->�½�NToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->�½�NToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->�½�NToolStripMenuItem->Text = L"�½���&N��";
			// 
			// Tsmiopen
			// 
			this->Tsmiopen->Name = L"Tsmiopen";
			this->Tsmiopen->Size = System::Drawing::Size(181, 22);
			this->Tsmiopen->Text = L"�򿪣�&O��...";
			this->Tsmiopen->Click += gcnew System::EventHandler(this, &Form1::��OToolStripMenuItem_Click);
			// 
			// TsmiSave
			// 
			this->TsmiSave->Name = L"TsmiSave";
			this->TsmiSave->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->TsmiSave->Size = System::Drawing::Size(181, 22);
			this->TsmiSave->Text = L"���棨&S��";
			this->TsmiSave->Click += gcnew System::EventHandler(this, &Form1::TsmiSave_Click);
			// 
			// TmiSaveAs
			// 
			this->TmiSaveAs->Name = L"TmiSaveAs";
			this->TmiSaveAs->Size = System::Drawing::Size(181, 22);
			this->TmiSaveAs->Text = L"���Ϊ��&A��";
			this->TmiSaveAs->Click += gcnew System::EventHandler(this, &Form1::TmiSaveAs_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(178, 6);
			// 
			// �˳�XToolStripMenuItem
			// 
			this->�˳�XToolStripMenuItem->Name = L"�˳�XToolStripMenuItem";
			this->�˳�XToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->�˳�XToolStripMenuItem->Text = L"�˳���&X��";
			// 
			// �༭EToolStripMenuItem
			// 
			this->�༭EToolStripMenuItem->Name = L"�༭EToolStripMenuItem";
			this->�༭EToolStripMenuItem->Size = System::Drawing::Size(75, 21);
			this->�༭EToolStripMenuItem->Text = L"�༭��&E��";
			// 
			// ��ʽOToolStripMenuItem
			// 
			this->��ʽOToolStripMenuItem->Name = L"��ʽOToolStripMenuItem";
			this->��ʽOToolStripMenuItem->Size = System::Drawing::Size(78, 21);
			this->��ʽOToolStripMenuItem->Text = L"��ʽ��&O��";
			// 
			// �鿴VToolStripMenuItem
			// 
			this->�鿴VToolStripMenuItem->Name = L"�鿴VToolStripMenuItem";
			this->�鿴VToolStripMenuItem->Size = System::Drawing::Size(76, 21);
			this->�鿴VToolStripMenuItem->Text = L"�鿴��&V��";
			// 
			// ����HToolStripMenuItem
			// 
			this->����HToolStripMenuItem->Name = L"����HToolStripMenuItem";
			this->����HToolStripMenuItem->Size = System::Drawing::Size(77, 21);
			this->����HToolStripMenuItem->Text = L"������&H��";
			// 
			// txtContent
			// 
			this->txtContent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtContent->Font = (gcnew System::Drawing::Font(L"����", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->txtContent->Location = System::Drawing::Point(0, 25);
			this->txtContent->Multiline = true;
			this->txtContent->Name = L"txtContent";
			this->txtContent->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->txtContent->Size = System::Drawing::Size(532, 401);
			this->txtContent->TabIndex = 1;
			// 
			// SfdSaveFile
			// 
			this->SfdSaveFile->FileName = L"^.txt";
			this->SfdSaveFile->Filter = L"�ı��ĵ�|*.txt|�����ļ�|*.*";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(532, 426);
			this->Controls->Add(this->txtContent);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�ޱ���-���±�";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ��OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { 
			 }
private: System::Void TsmiSave_Click(System::Object^  sender, System::EventArgs^  e) {
			//���û�������水ťִ�иú���
		 //1.�ж�һ���Ƿ����ļ����û�У��������Ϊ����
		 //2.����У�������д���ļ���
	if(FILENAME=="")
			{ if(SfdSaveFile->ShowDialog()==/*DialogResult::OK */System::windows::Forms::DialogResult::Yes)
			 {
				 FILENAME=SfdSaveFile->FileName;
					 SaveFile();
			 }
			 else{
				 return;
			 }
			 //�򿪱����ļ��ĶԻ���
		 }
		 else
		 {
			SaveFile();
		 }
		
		 }
/*private:
	System::Void SaveFile()
	{
		StreamWriter ^writer=gcnew StreamWriter(FILENAME,false,System::Text::Encoding::GetEncoding("gb2312"));
		writer->Write(TxtContent->Text);
		writer->Close();
	}
private: System::Void TmiSaveAs_Click(System::Object^  sender, System::EventArgs^  e) {
		if(SfdSaveFile->ShowDialog()== System::windows::Forms::DialogResult::Yes)
			 {
				 FILENAME=SfdSaveFile->FileName;
					 SaveFile();
			 }
		 }
};*/
}

