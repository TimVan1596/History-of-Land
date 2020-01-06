#pragma once
#include "User.h"

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GameRecord 摘要
	/// </summary>
	public ref class GameRecord : public System::Windows::Forms::Form {
	public:
		GameRecord(void) {
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~GameRecord() {
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  okButton;
	private: System::Windows::Forms::PictureBox^  ResultPB;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  RoundCNTLB;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  SumHurtLB;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  SumATKLB;


	private:
		/// <summary>
		/// 必需的设计器变量。
		bool isWin; //是否胜利
		int SumRound; //总回合数
		int SumATK;    //总造成伤害
		int SumHurt;    //总承受伤害
	public: User^ userAccount;   //用户登录的账号信息

		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void) {
			this->okButton = (gcnew System::Windows::Forms::Button());
			this->ResultPB = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->RoundCNTLB = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SumHurtLB = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SumATKLB = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultPB))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// okButton
			// 
			this->okButton->AutoSize = true;
			this->okButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(133)),
																		 static_cast<System::Int32>(static_cast<System::Byte>(244)));
			this->okButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->okButton->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->okButton->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->okButton->Location = System::Drawing::Point(106, 573);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(181, 51);
			this->okButton->TabIndex = 3;
			this->okButton->Text = L"确定";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &GameRecord::okButton_Click);
			// 
			// ResultPB
			// 
			this->ResultPB->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ResultPB->Location = System::Drawing::Point(77, 3);
			this->ResultPB->Name = L"ResultPB";
			this->ResultPB->Size = System::Drawing::Size(253, 229);
			this->ResultPB->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->ResultPB->TabIndex = 4;
			this->ResultPB->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"华文行楷", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->label1->Location = System::Drawing::Point(117, 246);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 67);
			this->label1->TabIndex = 5;
			this->label1->Text = L"战绩";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
																	   static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(35, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 22);
			this->label2->TabIndex = 6;
			this->label2->Text = L"您一共坚持了";
			// 
			// RoundCNTLB
			// 
			this->RoundCNTLB->AutoSize = true;
			this->RoundCNTLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->RoundCNTLB->ForeColor = System::Drawing::Color::Red;
			this->RoundCNTLB->Location = System::Drawing::Point(152, 15);
			this->RoundCNTLB->Name = L"RoundCNTLB";
			this->RoundCNTLB->Size = System::Drawing::Size(36, 26);
			this->RoundCNTLB->TabIndex = 7;
			this->RoundCNTLB->Text = L"10";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
																	   static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(228, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 22);
			this->label4->TabIndex = 8;
			this->label4->Text = L"个回合";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->RoundCNTLB);
			this->panel1->Location = System::Drawing::Point(44, 334);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(330, 53);
			this->panel1->TabIndex = 9;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->SumHurtLB);
			this->panel2->Location = System::Drawing::Point(44, 415);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(330, 53);
			this->panel2->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
																	   static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(35, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 22);
			this->label5->TabIndex = 6;
			this->label5->Text = L"对敌军造成了";
			this->label5->Click += gcnew System::EventHandler(this, &GameRecord::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
																	   static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(228, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 22);
			this->label6->TabIndex = 8;
			this->label6->Text = L"的伤害";
			// 
			// SumHurtLB
			// 
			this->SumHurtLB->AutoSize = true;
			this->SumHurtLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->SumHurtLB->ForeColor = System::Drawing::Color::Red;
			this->SumHurtLB->Location = System::Drawing::Point(152, 15);
			this->SumHurtLB->Name = L"SumHurtLB";
			this->SumHurtLB->Size = System::Drawing::Size(48, 26);
			this->SumHurtLB->TabIndex = 7;
			this->SumHurtLB->Text = L"126";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->SumATKLB);
			this->panel3->Location = System::Drawing::Point(44, 490);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(330, 53);
			this->panel3->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
																	   static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(3, 15);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 22);
			this->label8->TabIndex = 6;
			this->label8->Text = L"承受了来自敌军的";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(78)),
																	   static_cast<System::Int32>(static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(228, 15);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 22);
			this->label9->TabIndex = 8;
			this->label9->Text = L"的总伤害";
			// 
			// SumATKLB
			// 
			this->SumATKLB->AutoSize = true;
			this->SumATKLB->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->SumATKLB->ForeColor = System::Drawing::Color::Red;
			this->SumATKLB->Location = System::Drawing::Point(152, 15);
			this->SumATKLB->Name = L"SumATKLB";
			this->SumATKLB->Size = System::Drawing::Size(48, 26);
			this->SumATKLB->TabIndex = 7;
			this->SumATKLB->Text = L"117";
			// 
			// GameRecord
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 636);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ResultPB);
			this->Controls->Add(this->okButton);
			this->Name = L"GameRecord";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GameRecord";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultPB))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
	}

		public: void GameRecord::initiate(bool isWin, int SumRound, int SumATK, int SumHurt) {

				 //ui->RoundCNTEdit->setReadOnly(true);  //编辑框只读
				 //ui->SumHurtEdit->setReadOnly(true);  //编辑框只读
				 //ui->SumATKEdit->setReadOnly(true);  //编辑框只读
				 String ^VICTORYLOC = "victory.jpg";
				 String ^DEFEATLOC = "defeat.jpg";
				 ++userAccount->SumRounds;


				 if (isWin){
					// ui->OverPic->setVisible(false);
					 ResultPB->ImageLocation = VICTORYLOC;
					 ++userAccount->SumWin;
					 label1->Text = "胜利";
					 label1->ForeColor = Color::Red;


				 }
				 else{
					 ResultPB->ImageLocation = DEFEATLOC;
					 label1->Text = "战败";
					// label1->ForeColor = Color::DimGray;

				 }


				 userAccount->WinPercent = (1.0*userAccount->SumWin) / (userAccount->SumRounds);
				 userAccount->SumScores = userAccount->SumWin * 1000 + (userAccount->SumRounds - userAccount->SumWin) * 100;
				// MessageBox::Show("userAccount->WinPercent = " + (userAccount->WinPercent).ToString());

				 /*ui->RoundCNTEdit->setText(QString::number(SumRound, 10));
				 ui->SumATKEdit->setText(QString::number(SumATK, 10));
				 ui->SumHurtEdit->setText(QString::number(SumHurt, 10));*/

				 RoundCNTLB->Text = (SumRound).ToString();
				 SumATKLB->Text = (SumHurt).ToString();
				 SumHurtLB->Text = (SumATK).ToString();

	}
	private: System::Void okButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
};
}
