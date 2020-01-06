#pragma once
#include "Legend.h"
#include<cliext/vector>


using namespace System;
using namespace cliext;

ref class User {
public:
	User();
	User(String^ name, String^ password);
	User(String^ name, String^ password
		 , vector<Legend^> Legends);
	User::User(String^ nname, String^ ppassword
			   , vector<Legend^> LLegends,
			   int SSumLegends, double WWinPercent,
			   int SSumWin,
			   int SSumScores, int SSumRounds);
	//User();

	//�˻�����
	String^ name;
	String^ password;
	int SumScores; //�ܷ�
	double WinPercent; //ʤ��
	int SumWin; //ʤ�Ļغ���
	int SumRounds; //������ܻغ���
	int SumLegends; //��Ӣ��
	int level;

	vector<Legend^> Legends; //����Ӣ��

	void copy (String^ nname, String^ ppassword
			   , vector<Legend^> LLegends,
			   int SSumLegends, double WWinPercent,
			   int SSumWin,
			   int SSumScores, int SSumRounds) {

		name = nname;
		password = ppassword;
		Legends = gcnew vector<Legend ^>;
		for each (Legend ^cache in LLegends) {
			Legends.push_back(cache);
		}
		SumWin = SSumWin;
		SumLegends = SSumLegends;
		WinPercent = WWinPercent;
		SumScores = SSumScores;
		SumRounds = SSumRounds;

	}
};

