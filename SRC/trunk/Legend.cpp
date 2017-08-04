#include "Legend.h"
#include <time.h>
#include <stdlib.h>

double Legend::Random(double start, double end) {
    srand((unsigned)time(0));
    return start+(end-start)*rand()/(RAND_MAX + 1.0);
}

void Legend::initiate(QString name,int HP,int ATK, int DFS, int MP)
{
    this->name = name;
    this->ATK = ATK;
    this->DFS = DFS;
    this->MP = MP;
    this->isAlive = true;
    this->HP =HP;
    //this->round_hurt = 0;
}

Legend::Legend()
{

}

bool Legend::attack(Legend &enemy) {

    check(*this);
    check(enemy);

    double sword = this->ATK+0.33*this->MP+2;   //直接战斗力
    this->round_hurt =Random(sword-2,sword+8)-enemy.DFS;    //考虑每次战斗力都不同，有上下浮动，去掉敌军的防御力

    if( this->round_hurt>0) {
        this->HP +=  this->round_hurt;
        enemy.HP -=  this->round_hurt;
        return true;
    }
    this->round_hurt = 0;
    return false;
}


void Legend::check(Legend &legend)
//检查英雄所有属性，确保属性不会小于0

{
    if(legend.HP  <= 0){legend.isAlive = false;}
    if(legend.ATK  < 0){legend.ATK = 0;}
    if(legend.DFS  < 0){legend.DFS = 0;}
    if(legend.MP  < 0){legend.MP = 0;}
}


