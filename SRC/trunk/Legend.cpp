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

    double sword = 1.2*this->ATK+0.83*this->MP+2;
    this->round_hurt =Random(sword-2,sword+8)-enemy.DFS;
    //cout<<"hurt = "<<hurt<<endl;

    if( this->round_hurt>0) {
        this->HP +=  this->round_hurt;
        this->ATK+=5;
        this->DFS+=3;
        this->MP+=4;


        enemy.HP -=  this->round_hurt;
        if(enemy.HP <= 0) {
            enemy.isAlive = false;
        }
        enemy.ATK+=1;
        enemy.DFS-=3;
        enemy.MP-=5;
        return true;
    }

    this->ATK+=1;
    this->MP-=5;

    enemy.ATK+=5;
    enemy.DFS+=1;
    enemy.MP+=6;
    this->round_hurt = 0;
    return false;
}


