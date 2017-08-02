#include "kingdom.h"
#include <ctime>
#include <cstdlib>


double random(double,double);

bool kingdom::attack(kingdom &e) {

    double sword = 1.2*MIT+0.83*Happy+2;
    int hurt =random(sword-2,sword+8)-e.DFS;
    //cout<<"hurt = "<<hurt<<endl;
    if(hurt>0) {
        this->TTY += hurt;
        this->MIT+=5;
        this->DFS+=5;
        this->Happy+=4;


        e.TTY -= hurt;
        if(e.TTY <= 0) {
            e.ROOT = false;
        }
        e.MIT+=1;
        e.DFS-=3;
        e.Happy-=5;
        return true;
    }

    this->MIT+=1;
    this->Happy-=7;

    e.MIT+=5;
    e.DFS+=1;
    e.Happy+=5;
    return false;
}

double random(double start, double end) {
    return start+(end-start)*rand()/(RAND_MAX + 1.0);
}

