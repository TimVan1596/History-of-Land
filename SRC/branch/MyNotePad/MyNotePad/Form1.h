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
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		static String^ FILENAME="";//文件名
		Form1(void)

		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  新建NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Tsmiopen;
	private: System::Windows::Forms::ToolStripMenuItem^  TsmiSave;
	private: System::Windows::Forms::ToolStripMenuItem^  TmiSaveAs;





	private: System::Windows::Forms::ToolStripMenuItem^  编辑EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  格式OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查看VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  帮助HToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  退出XToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  txtContent;
	private: System::Windows::Forms::SaveFileDialog^  SfdSaveFile;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->新建NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Tsmiopen = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TsmiSave = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->TmiSaveAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->退出XToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->编辑EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->格式OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查看VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助HToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtContent = (gcnew System::Windows::Forms::TextBox());
			this->SfdSaveFile = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {this->文件FToolStripMenuItem, 
				this->编辑EToolStripMenuItem, this->格式OToolStripMenuItem, this->查看VToolStripMenuItem, this->帮助HToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(532, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->新建NToolStripMenuItem, 
				this->Tsmiopen, this->TsmiSave, this->TmiSaveAs, this->toolStripMenuItem1, this->退出XToolStripMenuItem});
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(74, 21);
			this->文件FToolStripMenuItem->Text = L"文件（&F）";
			// 
			// 新建NToolStripMenuItem
			// 
			this->新建NToolStripMenuItem->Name = L"新建NToolStripMenuItem";
			this->新建NToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->新建NToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->新建NToolStripMenuItem->Text = L"新建（&N）";
			// 
			// Tsmiopen
			// 
			this->Tsmiopen->Name = L"Tsmiopen";
			this->Tsmiopen->Size = System::Drawing::Size(181, 22);
			this->Tsmiopen->Text = L"打开（&O）...";
			this->Tsmiopen->Click += gcnew System::EventHandler(this, &Form1::打开OToolStripMenuItem_Click);
			// 
			// TsmiSave
			// 
			this->TsmiSave->Name = L"TsmiSave";
			this->TsmiSave->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->TsmiSave->Size = System::Drawing::Size(181, 22);
			this->TsmiSave->Text = L"保存（&S）";
			this->TsmiSave->Click += gcnew System::EventHandler(this, &Form1::TsmiSave_Click);
			// 
			// TmiSaveAs
			// 
			this->TmiSaveAs->Name = L"TmiSaveAs";
			this->TmiSaveAs->Size = System::Drawing::Size(181, 22);
			this->TmiSaveAs->Text = L"另存为（&A）";
			this->TmiSaveAs->Click += gcnew System::EventHandler(this, &Form1::TmiSaveAs_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(178, 6);
			// 
			// 退出XToolStripMenuItem
			// 
			this->退出XToolStripMenuItem->Name = L"退出XToolStripMenuItem";
			this->退出XToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->退出XToolStripMenuItem->Text = L"退出（&X）";
			// 
			// 编辑EToolStripMenuItem
			// 
			this->编辑EToolStripMenuItem->Name = L"编辑EToolStripMenuItem";
			this->编辑EToolStripMenuItem->Size = System::Drawing::Size(75, 21);
			this->编辑EToolStripMenuItem->Text = L"编辑（&E）";
			// 
			// 格式OToolStripMenuItem
			// 
			this->格式OToolStripMenuItem->Name = L"格式OToolStripMenuItem";
			this->格式OToolStripMenuItem->Size = System::Drawing::Size(78, 21);
			this->格式OToolStripMenuItem->Text = L"格式（&O）";
			// 
			// 查看VToolStripMenuItem
			// 
			this->查看VToolStripMenuItem->Name = L"查看VToolStripMenuItem";
			this->查看VToolStripMenuItem->Size = System::Drawing::Size(76, 21);
			this->查看VToolStripMenuItem->Text = L"查看（&V）";
			// 
			// 帮助HToolStripMenuItem
			// 
			this->帮助HToolStripMenuItem->Name = L"帮助HToolStripMenuItem";
			this->帮助HToolStripMenuItem->Size = System::Drawing::Size(77, 21);
			this->帮助HToolStripMenuItem->Text = L"帮助（&H）";
			// 
			// txtContent
			// 
			this->txtContent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtContent->Font = (gcnew System::Drawing::Font(L"宋体", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
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
			this->SfdSaveFile->Filter = L"文本文档|*.txt|所有文件|*.*";
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
			this->Text = L"无标题-记事本";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 打开OToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) { 
			 }
private: System::Void TsmiSave_Click(System::Object^  sender, System::EventArgs^  e) {
			//当用户点击保存按钮执行该函数
		 //1.判断一下是否有文件如果没有，调用另存为函数
		 //2.如果有，则将内容写入文件中
	if(FILENAME=="")
			{ if(SfdSaveFile->ShowDialog()==/*DialogResult::OK */System::windows::Forms::DialogResult::Yes)
			 {
				 FILENAME=SfdSaveFile->FileName;
					 SaveFile();
			 }
			 else{
				 return;
			 }
			 //打开保存文件的对话框
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

