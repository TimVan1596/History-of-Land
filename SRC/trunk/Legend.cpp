#include "Legend.h"

double Legend::Random(double start, double end) {
    return start+(end-start)*rand()/(RAND_MAX + 1.0);
}

void Legend::initiate(QString name, int ATK, int DFS, int MP)
{
    this->name = name;
    this->ATK = ATK;
    this->DFS = DFS;
    this->MP = MP;
}

Legend::Legend()
{
    this->isAlive = true;
    this->HP = 100;
}

bool Legend::attack(Legend &enemy) {

    double sword = 1.2*this->ATK+0.83*this->MP+2;
    int hurt =Random(sword-2,sword+8)-enemy.DFS;
    //cout<<"hurt = "<<hurt<<endl;

    if(hurt>0) {
        this->HP += hurt;
        this->ATK+=5;
        this->DFS+=3;
        this->MP+=4;


        enemy.HP -= hurt;
        if(enemy.HP <= 0) {
            enemy.isAlive = false;
        }
        enemy.ATK+=1;
        enemy.DFS-=3;
        enemy.MP-=5;
        return true;
        round_hurt = hurt;
    }

    this->ATK+=1;
    this->MP-=5;

    enemy.ATK+=5;
    enemy.DFS+=1;
    enemy.MP+=6;
    return false;
    round_hurt = 0;
}


