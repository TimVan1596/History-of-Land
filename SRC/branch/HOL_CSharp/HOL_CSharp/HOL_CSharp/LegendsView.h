#pragma once
#include<cliext/vector>
#include "Legend.h"

namespace HOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace cliext;

	/// <summary>
	/// LegendsView ժҪ
	/// </summary>
	public ref class LegendsView : public System::Windows::Forms::Form
	{
	public:
		LegendsView(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
		//	Legends = gcnew  vector<Legend^>;
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~LegendsView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  name;
	private: System::Windows::Forms::ColumnHeader^  HP;
	private: System::Windows::Forms::ColumnHeader^  ATK;
	private: System::Windows::Forms::ColumnHeader^  DFS;

	protected:

	protected:






	//���г�ʼ�����������ڴ�
	public: property vector<Legend^> Legends;	//�����SystemWindowҳ���д�������Ӣ����

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->name = (gcnew System::Windows::Forms::ColumnHeader());
			this->HP = (gcnew System::Windows::Forms::ColumnHeader());
			this->ATK = (gcnew System::Windows::Forms::ColumnHeader());
			this->DFS = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->name, this->HP, this->ATK,
					this->DFS
			});
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(83, 137);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(532, 285);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &LegendsView::listView1_SelectedIndexChanged);
			// 
			// name
			// 
			this->name->Text = L"�۹�";
			// 
			// HP
			// 
			this->HP->Text = L"�������";
			// 
			// ATK
			// 
			this->ATK->Text = L"����";
			// 
			// DFS
			// 
			this->DFS->Text = L"�ر�";
			// 
			// LegendsView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 529);
			this->Controls->Add(this->listView1);
			this->Name = L"LegendsView";
			this->Text = L"LegendsView";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
