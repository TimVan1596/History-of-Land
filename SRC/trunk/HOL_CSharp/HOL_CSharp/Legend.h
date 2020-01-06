#pragma once

//#include <QObject>
#include <iostream>
#include <string>
using namespace std;
using namespace System;

public ref class Legend {
public:
	void initiate(String ^name, int HP, int ATK, int DFS, int MP);
	Legend(String ^name, int HP, int ATK, int DFS, int MP) {
		this->name = name;
		this->ATK = ATK;
		this->DFS = DFS;
		this->MP = MP;
		this->isAlive = true;
		this->HP = HP;
		arrRand = 0;
		isHardWin = false;
		//isKeZhi = false;
	}

	void copyOther(const Legend %other) {
		this->name = other.name;
		this->ATK = other.ATK;
		this->DFS = other.DFS;
		this->MP = other.MP;
		this->isAlive = other.isAlive;
		this->HP = other.HP;
		round_hurt = other.round_hurt;
		AtkType = other.AtkType;
		isHardWin = other.isHardWin;
	}

	Legend();
	~Legend();

	String ^name; //英雄的名字
	bool isAlive; // isAlive为假时，灭国
	int HP; // 英雄的生命值
	int ATK; // 英雄的战斗力，可升级，战胜则+5，战败+1，
	int DFS; // 英雄的防御力,可升级，战胜则+5，战败-3，可以使用政策累加
	int MP; // 英雄的魔法值，可升级，战胜则+5，战败-5，使用政策-3
	//最终攻击力综合战斗力和幸福度
	virtual bool attack(Legend %);
	bool BowATK(Legend %);
	int round_hurt;
	int AtkType; //进攻类型
	bool isHardWin; //遇到被克制的攻击类型，攻击力减弱4倍
	int arrRand ;
	//bool isKeZhi;

protected:
	double Random(double start, double end);
private:
	void check();
	//检查英雄所有属性，确保属性不会小于0
};


