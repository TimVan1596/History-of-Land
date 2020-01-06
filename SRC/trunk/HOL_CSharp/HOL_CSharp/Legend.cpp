#include "stdafx.h"
#include "Legend.h"
#include <ctime>
#include <cstdlib>


#define  BOW_ATK 1
#define  BUBIN_ATK 2
#define  QIBIN_ATK 3

using namespace System;

double Legend::Random(double start, double end) {
	srand((unsigned)time(NULL));
	int fuck = start + (end - start)*rand() / (RAND_MAX + 1.0);
	MessageBox::Show(fuck.ToString());
	return fuck;
	
	// return start+(end-start)*rand()/(RAND_MAX + 1.0);

}

void Legend::initiate(String ^name,int HP,int ATK, int DFS, int MP)
{
    this->name = name;
    this->ATK  = ATK;
    this->DFS = DFS;
    this->MP = MP;
    this->isAlive = true;
    this->HP =HP;
    //this->round_hurt = 0;
}

Legend::Legend()
{
	name = "NULL";
	HP = 9999;
	ATK = 9999;
	DFS = 9999;
	MP = 9999;
}


Legend::~Legend() {

}

bool Legend::attack(Legend  %enemy) {
	srand((unsigned)time(0));
	check();

	double sword = this->ATK+this->MP*0.13+ 2;   //直接战斗力
	this->round_hurt = sword+arrRand - enemy.DFS;    //考虑每次战斗力都不同，有上下浮动，去掉敌军的防御力

	if (this->round_hurt > 0) {
		if ((this->AtkType == BUBIN_ATK  && enemy.AtkType == BOW_ATK) ||
			(this->AtkType == BOW_ATK && enemy.AtkType == QIBIN_ATK) ||
			(this->AtkType == QIBIN_ATK && enemy.AtkType == BUBIN_ATK))
		{
			//MessageBox::Show(this->name);
			this->round_hurt /= 4;
			isHardWin = true;
			this->HP += this->round_hurt;
			enemy.HP -= this->round_hurt;
			return true;
		}

		isHardWin = false;
		this->HP += this->round_hurt;
		enemy.HP -= this->round_hurt;
		return true;
	}
	isHardWin = false;
	this->round_hurt = 0;
	return false;

}


void Legend::check()
//检查英雄所有属性，确保属性不会小于0

{
	if (this->HP <= 0){ this->isAlive = false; }
	if (this->ATK  < 0){ this->ATK = 0; }
	if (this->DFS  < 0){ this->DFS = 0; }
	if (this->MP  < 0){ this->MP = 0; }
}


bool Legend::BowATK(Legend %legend) {
	return false;
}



