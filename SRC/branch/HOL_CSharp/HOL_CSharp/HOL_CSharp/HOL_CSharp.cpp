// HOL_CSharp.cpp: 主项目文件。

#include "stdafx.h"
#include "SystemWindow.h"
#include "LoginDlg.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace HOL_CSharp;

int main(array<System::String ^> ^args)
{
   // Console::WriteLine(L"Hello World");
	//application
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew LoginDlg());
    return 0;
}
