// HOL_CSharp.cpp: 主项目文件。

#include "stdafx.h"
#include "cliext/vector"

using namespace System;
using namespace System::Windows::Forms;
using namespace HOL_CSharp;
using namespace cliext;

[STAThreadAttribute]
int main(array<System::String ^> ^args) {

	vector<User^> userlist; //保存所有用户信息


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SystemWindow ^MainPage = gcnew SystemWindow;
	LoginDlg ^login = gcnew LoginDlg();

	/*下列注释部分为登录界面，调试时不需要输入故注释*/
	login->ShowDialog();
	//login->DialogResult = DialogResult::OK;

	if (login->DialogResult == DialogResult::OK)
	{
	//	MessageBox::Show("进入main ");

		MainPage->userlist = login->userlist; //两个界面间传输数据
		MainPage->sumUserNums = login->sumUserNums;
		MainPage->userAccount = login->userAccount;
		MainPage->updateUserInfoPanel();

	//	MessageBox::Show("MainPage->userAccount->name = "+MainPage->userAccount->name);

		/*MainPage->ShowDialog();*/
		Application::Run(MainPage);
		login->Close();
	}




}
