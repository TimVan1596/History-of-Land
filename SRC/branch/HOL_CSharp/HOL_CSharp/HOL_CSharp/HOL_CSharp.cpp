// HOL_CSharp.cpp: 主项目文件。

#include "stdafx.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace HOL_CSharp;

int main(array<System::String ^> ^args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SystemWindow ^MainPage = gcnew SystemWindow;
	LoginDlg ^login = gcnew LoginDlg();

	/*下列注释部分为登录界面，调试时不需要输入故注释*/
	/*login->ShowDialog();*/
	login->DialogResult = DialogResult::OK;

	if (login->DialogResult == DialogResult::OK)
	{
		/*MainPage->ShowDialog();*/
		Application::Run(MainPage);
		login->Close();
	}




}
