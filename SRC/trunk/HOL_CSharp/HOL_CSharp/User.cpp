#include "stdafx.h"
#include "User.h"


User::User() {
	
}

User::User(String^ nname, String^ ppassword
		   , vector<Legend^> LLegends) {

	this->name = nname;
	this->password = ppassword;
	Legends = gcnew vector<Legend ^>;
	for each (Legend ^cache in LLegends) {
		this->Legends.push_back(cache);
	}
	this->SumLegends = 0;
	this->WinPercent = 0;
	this->SumScores = 0;
	this->SumRounds = 0;
	SumWin = 0;


}

User::User(String^ nname, String^ ppassword) {

	this->name = nname;
	this->password = ppassword;
	Legends = gcnew vector<Legend ^>;
	this->SumLegends = 0;
	this->WinPercent = 0;
	this->SumScores = 0;
	this->SumRounds = 0;
	SumWin = 0;

}


User::User(String^ nname, String^ ppassword
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



