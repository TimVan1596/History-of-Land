#pragma once
#include "LegendsView.h"


namespace testHOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SystemWindow ժҪ
	/// </summary>
	public ref class SystemWindow : public System::Windows::Forms::Form
	{
	public:
		SystemWindow(void)
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
		~SystemWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ClassicGame;
	protected:
	private: System::Windows::Forms::Button^  BrawlGame;
	private: System::Windows::Forms::Button^  FreeGame;
	private: System::Windows::Forms::Button^  Setings;
	private: System::Windows::Forms::Button^  Quit;

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
			this->ClassicGame = (gcnew System::Windows::Forms::Button());
			this->BrawlGame = (gcnew System::Windows::Forms::Button());
			this->FreeGame = (gcnew System::Windows::Forms::Button());
			this->Setings = (gcnew System::Windows::Forms::Button());
			this->Quit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ClassicGame
			// 
			this->ClassicGame->Location = System::Drawing::Point(113, 59);
			this->ClassicGame->Name = L"ClassicGame";
			this->ClassicGame->Size = System::Drawing::Size(75, 23);
			this->ClassicGame->TabIndex = 0;
			this->ClassicGame->Text = L"ǧ�Ž�ɽ";
			this->ClassicGame->UseVisualStyleBackColor = true;
			this->ClassicGame->Click += gcnew System::EventHandler(this, &SystemWindow::ClassicGame_Click);
			// 
			// BrawlGame
			// 
			this->BrawlGame->Location = System::Drawing::Point(113, 127);
			this->BrawlGame->Name = L"BrawlGame";
			this->BrawlGame->Size = System::Drawing::Size(75, 23);
			this->BrawlGame->TabIndex = 1;
			this->BrawlGame->Text = L"��սһ��";
			this->BrawlGame->UseVisualStyleBackColor = true;
			// 
			// FreeGame
			// 
			this->FreeGame->Location = System::Drawing::Point(113, 195);
			this->FreeGame->Name = L"FreeGame";
			this->FreeGame->Size = System::Drawing::Size(75, 23);
			this->FreeGame->TabIndex = 2;
			this->FreeGame->Text = L"ɳ�̵��";
			this->FreeGame->UseVisualStyleBackColor = true;
			// 
			// Setings
			// 
			this->Setings->Location = System::Drawing::Point(47, 284);
			this->Setings->Name = L"Setings";
			this->Setings->Size = System::Drawing::Size(75, 23);
			this->Setings->TabIndex = 3;
			this->Setings->Text = L"����";
			this->Setings->UseVisualStyleBackColor = true;
			// 
			// Quit
			// 
			this->Quit->Location = System::Drawing::Point(166, 284);
			this->Quit->Name = L"Quit";
			this->Quit->Size = System::Drawing::Size(75, 23);
			this->Quit->TabIndex = 4;
			this->Quit->Text = L"�˳�";
			this->Quit->UseVisualStyleBackColor = true;
			// 
			// SystemWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 446);
			this->Controls->Add(this->Quit);
			this->Controls->Add(this->Setings);
			this->Controls->Add(this->FreeGame);
			this->Controls->Add(this->BrawlGame);
			this->Controls->Add(this->ClassicGame);
			this->Name = L"SystemWindow";
			this->Text = L"SystemWindow";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ClassicGame_Click(System::Object^  sender, System::EventArgs^  e) {
				 LegendsView ^ChooseLegendsView = gcnew LegendsView;
				 ChooseLegendsView->ShowDialog();
	}
};
}
