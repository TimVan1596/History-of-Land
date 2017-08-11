// HOL_CSharp.cpp: 主项目文件。

#include "stdafx.h"
#include "SystemWindow.h"
#include "LoginDlg.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace HOL_CSharp;

int main(array<System::String ^> ^args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginDlg ^login = gcnew LoginDlg();
	login->ShowDialog();

	if (login->DialogResult == DialogResult::OK)
	{
		SystemWindow ^MainPage = gcnew SystemWindow;
		MainPage->Show();
		login->Close();
	}
    return 0;
}
