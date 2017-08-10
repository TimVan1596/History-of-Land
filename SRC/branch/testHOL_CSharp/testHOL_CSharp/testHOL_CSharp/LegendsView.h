#pragma once

namespace testHOL_CSharp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridView^  LegendsTableView;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  HP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ATK;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  DFS;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  MP;


	protected:

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
		void InitializeComponent(void)
		{
			this->LegendsTableView = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ATK = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DFS = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->MP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LegendsTableView))->BeginInit();
			this->SuspendLayout();
			// 
			// LegendsTableView
			// 
			this->LegendsTableView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->LegendsTableView->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->LegendsTableView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->LegendsTableView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->name,
					this->HP, this->ATK, this->DFS, this->MP
			});
			this->LegendsTableView->Location = System::Drawing::Point(84, 113);
			this->LegendsTableView->Name = L"LegendsTableView";
			this->LegendsTableView->ReadOnly = true;
			this->LegendsTableView->RowTemplate->Height = 23;
			this->LegendsTableView->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->LegendsTableView->Size = System::Drawing::Size(547, 262);
			this->LegendsTableView->TabIndex = 0;
	
			// 
			// name
			// 
			this->name->HeaderText = L"帝国";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// HP
			// 
			this->HP->HeaderText = L"领土面积";
			this->HP->Name = L"HP";
			this->HP->ReadOnly = true;
			// 
			// ATK
			// 
			this->ATK->HeaderText = L"军队";
			this->ATK->Name = L"ATK";
			this->ATK->ReadOnly = true;
			// 
			// DFS
			// 
			this->DFS->HeaderText = L"守备";
			this->DFS->Name = L"DFS";
			this->DFS->ReadOnly = true;
			// 
			// MP
			// 
			this->MP->HeaderText = L"民心";
			this->MP->Name = L"MP";
			this->MP->ReadOnly = true;
			// 
			// LegendsView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 529);
			this->Controls->Add(this->LegendsTableView);
			this->Name = L"LegendsView";
			this->Text = L"LegendsView";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LegendsTableView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void creatLegendsModle (){

		}
};
}
