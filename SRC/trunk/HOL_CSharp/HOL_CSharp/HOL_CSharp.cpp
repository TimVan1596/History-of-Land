// HOL_CSharp.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "cliext/vector"

using namespace System;
using namespace System::Windows::Forms;
using namespace HOL_CSharp;
using namespace cliext;

[STAThreadAttribute]
int main(array<System::String ^> ^args) {

	vector<User^> userlist; //���������û���Ϣ


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SystemWindow ^MainPage = gcnew SystemWindow;
	LoginDlg ^login = gcnew LoginDlg();

	/*����ע�Ͳ���Ϊ��¼���棬����ʱ����Ҫ�����ע��*/
	login->ShowDialog();
	//login->DialogResult = DialogResult::OK;

	if (login->DialogResult == DialogResult::OK)
	{
	//	MessageBox::Show("����main ");

		MainPage->userlist = login->userlist; //��������䴫������
		MainPage->sumUserNums = login->sumUserNums;
		MainPage->userAccount = login->userAccount;
		MainPage->updateUserInfoPanel();

	//	MessageBox::Show("MainPage->userAccount->name = "+MainPage->userAccount->name);

		/*MainPage->ShowDialog();*/
		Application::Run(MainPage);
		login->Close();
	}




}
