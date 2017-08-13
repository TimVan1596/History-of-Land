#pragma once
#include "stdafx.h"
#include "LegendsView.h"
#include "Legend.h"

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// SystemWindow 摘要
	/// </summary>
	public ref class SystemWindow : public System::Windows::Forms::Form {
	public:
		SystemWindow(void) {
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			legends[0]->initiate("大汉帝国", 210, 24, 13, 13);
			legends[1]->initiate("罗马帝国", 195, 21, 19, 15);
			legends[2]->initiate("大英帝国", 150, 20, 25, 22);
			legends[3]->initiate("纳粹帝国", 140, 31, 20, 7);
			//
			
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~SystemWindow() {
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  MainTitle;
	private: System::Windows::Forms::Button^  ClassicGame;
	private: System::Windows::Forms::Button^  BrawlGame;
	private: System::Windows::Forms::Button^  customGame;
	private: System::Windows::Forms::Button^  SetingsBTN;
	private: System::Windows::Forms::Button^  QuitBTN;
	private: System::Windows::Forms::Label^  Version;
	private: System::Windows::Forms::Label^  PowerBy;
	private: System::Windows::Forms::LinkLabel^  OpenCDisk;
	private: System::Windows::Forms::LinkLabel^  BaiduLLB;
	private: System::Windows::Forms::LinkLabel^  RiBaoLLB;





	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;
 		Legend ^legends[4];  //保存四个周免英雄


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void) {
			this->MainTitle = (gcnew System::Windows::Forms::Label());
			this->ClassicGame = (gcnew System::Windows::Forms::Button());
			this->BrawlGame = (gcnew System::Windows::Forms::Button());
			this->customGame = (gcnew System::Windows::Forms::Button());
			this->SetingsBTN = (gcnew System::Windows::Forms::Button());
			this->QuitBTN = (gcnew System::Windows::Forms::Button());
			this->Version = (gcnew System::Windows::Forms::Label());
			this->PowerBy = (gcnew System::Windows::Forms::Label());
			this->OpenCDisk = (gcnew System::Windows::Forms::LinkLabel());
			this->BaiduLLB = (gcnew System::Windows::Forms::LinkLabel());
			this->RiBaoLLB = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// MainTitle
			// 
			this->MainTitle->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->MainTitle->AutoSize = true;
			this->MainTitle->Font = (gcnew System::Drawing::Font(L"微软雅黑", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->MainTitle->ForeColor = System::Drawing::Color::IndianRed;
			this->MainTitle->Location = System::Drawing::Point(422, 37);
			this->MainTitle->Name = L"MainTitle";
			this->MainTitle->Size = System::Drawing::Size(226, 72);
			this->MainTitle->TabIndex = 0;
			this->MainTitle->Text = L"History of Land\r\n千古江山";
			this->MainTitle->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// ClassicGame
			// 
			this->ClassicGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																			static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->ClassicGame->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->ClassicGame->ForeColor = System::Drawing::Color::Red;
			this->ClassicGame->Location = System::Drawing::Point(189, 168);
			this->ClassicGame->Name = L"ClassicGame";
			this->ClassicGame->Size = System::Drawing::Size(700, 70);
			this->ClassicGame->TabIndex = 1;
			this->ClassicGame->Text = L"千古江山";
			this->ClassicGame->UseVisualStyleBackColor = false;
			this->ClassicGame->Click += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_Click);
			// 
			// BrawlGame
			// 
			this->BrawlGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																		  static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->BrawlGame->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->BrawlGame->ForeColor = System::Drawing::Color::Black;
			this->BrawlGame->Location = System::Drawing::Point(189, 269);
			this->BrawlGame->Name = L"BrawlGame";
			this->BrawlGame->Size = System::Drawing::Size(700, 70);
			this->BrawlGame->TabIndex = 2;
			this->BrawlGame->Text = L"快战一场";
			this->BrawlGame->UseVisualStyleBackColor = false;
			// 
			// customGame
			// 
			this->customGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																		   static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->customGame->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->customGame->ForeColor = System::Drawing::Color::Black;
			this->customGame->Location = System::Drawing::Point(189, 382);
			this->customGame->Name = L"customGame";
			this->customGame->Size = System::Drawing::Size(700, 70);
			this->customGame->TabIndex = 3;
			this->customGame->Text = L"沙盘点兵";
			this->customGame->UseVisualStyleBackColor = false;
			// 
			// SetingsBTN
			// 
			this->SetingsBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																		   static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->SetingsBTN->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->SetingsBTN->ForeColor = System::Drawing::Color::Black;
			this->SetingsBTN->Location = System::Drawing::Point(133, 473);
			this->SetingsBTN->Name = L"SetingsBTN";
			this->SetingsBTN->Size = System::Drawing::Size(340, 70);
			this->SetingsBTN->TabIndex = 4;
			this->SetingsBTN->Text = L"设置";
			this->SetingsBTN->UseVisualStyleBackColor = false;
			// 
			// QuitBTN
			// 
			this->QuitBTN->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(219)),
																		static_cast<System::Int32>(static_cast<System::Byte>(187)));
			this->QuitBTN->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->QuitBTN->ForeColor = System::Drawing::Color::Black;
			this->QuitBTN->Location = System::Drawing::Point(617, 473);
			this->QuitBTN->Name = L"QuitBTN";
			this->QuitBTN->Size = System::Drawing::Size(340, 70);
			this->QuitBTN->TabIndex = 5;
			this->QuitBTN->Text = L"退出";
			this->QuitBTN->UseVisualStyleBackColor = false;
			this->QuitBTN->Click += gcnew System::EventHandler(this, &SystemWindow::QuitBTN_Click);
			// 
			// Version
			// 
			this->Version->AutoSize = true;
			this->Version->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->Version->Location = System::Drawing::Point(131, 579);
			this->Version->Name = L"Version";
			this->Version->Size = System::Drawing::Size(159, 19);
			this->Version->TabIndex = 6;
			this->Version->Text = L"V0.2.3 C# 专版";
			// 
			// PowerBy
			// 
			this->PowerBy->AutoSize = true;
			this->PowerBy->Font = (gcnew System::Drawing::Font(L"宋体", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->PowerBy->Location = System::Drawing::Point(798, 594);
			this->PowerBy->Name = L"PowerBy";
			this->PowerBy->Size = System::Drawing::Size(163, 19);
			this->PowerBy->TabIndex = 7;
			this->PowerBy->Text = L"PowerBy TimVan";
			this->PowerBy->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// OpenCDisk
			// 
			this->OpenCDisk->AutoSize = true;
			this->OpenCDisk->Location = System::Drawing::Point(28, 28);
			this->OpenCDisk->Name = L"OpenCDisk";
			this->OpenCDisk->Size = System::Drawing::Size(47, 12);
			this->OpenCDisk->TabIndex = 8;
			this->OpenCDisk->TabStop = true;
			this->OpenCDisk->Text = L"打开C盘";
			this->OpenCDisk->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &SystemWindow::OpenCDisk_LinkClicked);
			// 
			// BaiduLLB
			// 
			this->BaiduLLB->AutoSize = true;
			this->BaiduLLB->Location = System::Drawing::Point(28, 67);
			this->BaiduLLB->Name = L"BaiduLLB";
			this->BaiduLLB->Size = System::Drawing::Size(77, 12);
			this->BaiduLLB->TabIndex = 9;
			this->BaiduLLB->TabStop = true;
			this->BaiduLLB->Text = L"打开百度搜索";
			// 
			// RiBaoLLB
			// 
			this->RiBaoLLB->AutoSize = true;
			this->RiBaoLLB->Location = System::Drawing::Point(28, 110);
			this->RiBaoLLB->Name = L"RiBaoLLB";
			this->RiBaoLLB->Size = System::Drawing::Size(89, 12);
			this->RiBaoLLB->TabIndex = 10;
			this->RiBaoLLB->TabStop = true;
			this->RiBaoLLB->Text = L"打开日报生成器";
			// 
			// SystemWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SeaShell;
			this->ClientSize = System::Drawing::Size(1084, 641);
			this->Controls->Add(this->RiBaoLLB);
			this->Controls->Add(this->BaiduLLB);
			this->Controls->Add(this->OpenCDisk);
			this->Controls->Add(this->PowerBy);
			this->Controls->Add(this->Version);
			this->Controls->Add(this->QuitBTN);
			this->Controls->Add(this->SetingsBTN);
			this->Controls->Add(this->customGame);
			this->Controls->Add(this->BrawlGame);
			this->Controls->Add(this->ClassicGame);
			this->Controls->Add(this->MainTitle);
			this->Name = L"SystemWindow";
			this->Text = L"千古江山 V 0.2.3\tC#专版";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion





	private: System::Void QuitBTN_Click(System::Object^  sender, System::EventArgs^  e) {

				 System::Windows::Forms::DialogResult  ^isClose  = MessageBox::Show("您真的要退出游戏吗？",
														   "退出游戏",
														   MessageBoxButtons::OKCancel,
														   MessageBoxIcon::Question,
														   MessageBoxDefaultButton::Button1);

				 if (*isClose == System::Windows::Forms::DialogResult::OK)
				 {
					 Close();
				 } 

	}
	private: System::Void OpenCDisk_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
				 this->OpenCDisk->LinkVisited = true;
//				 System::Diagnostics::Process::Start("C:\Program Files (x86)\Google\Chrome\Application\" ");
	}
	private: System::Void ClassicGame_Click(System::Object^  sender, System::EventArgs^  e) {
				 LegendsView ^choose = gcnew LegendsView;
				 choose->ShowDialog();
	}

};
}
