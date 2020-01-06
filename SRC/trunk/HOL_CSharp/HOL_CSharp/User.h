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

	//账户密码
	String^ name;
	String^ password;
	int SumScores; //总分
	double WinPercent; //胜率
	int SumWin; //胜的回合数
	int SumRounds; //游玩的总回合数
	int SumLegends; //总英雄
	int level;

	vector<Legend^> Legends; //所有英雄

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

