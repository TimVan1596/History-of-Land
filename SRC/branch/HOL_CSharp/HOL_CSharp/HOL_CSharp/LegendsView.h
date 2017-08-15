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
	/// LegendsView 摘要
	/// </summary>
	public ref class LegendsView : public System::Windows::Forms::Form
	{
	public:
		LegendsView(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
		//	Legends = gcnew  vector<Legend^>;
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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






	//所有初始变量均放置于此
	public: property vector<Legend^> Legends;	//保存从SystemWindow页面中传回来的英雄类

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
			this->name->Text = L"帝国";
			// 
			// HP
			// 
			this->HP->Text = L"领土面积";
			// 
			// ATK
			// 
			this->ATK->Text = L"军队";
			// 
			// DFS
			// 
			this->DFS->Text = L"守备";
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
