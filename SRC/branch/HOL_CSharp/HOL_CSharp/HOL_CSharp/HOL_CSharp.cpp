// HOL_CSharp.cpp: ����Ŀ�ļ���

#include "stdafx.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace HOL_CSharp;

int main(array<System::String ^> ^args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SystemWindow ^MainPage = gcnew SystemWindow;
	LoginDlg ^login = gcnew LoginDlg();

	/*����ע�Ͳ���Ϊ��¼���棬����ʱ����Ҫ�����ע��*/
	/*login->ShowDialog();*/
	login->DialogResult = DialogResult::OK;

	if (login->DialogResult == DialogResult::OK)
	{
		/*MainPage->ShowDialog();*/
		Application::Run(MainPage);
		login->Close();
	}




}
