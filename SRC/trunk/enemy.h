#ifndef ENEMY_H
#define ENEMY_H
#include "kingdom.h"

class Enemy:public kingdom {
    public:
        Enemy():kingdom() {
            this->MIT +=10;
            this->DFS +=10;
            this->Happy +=10;
        }
};
#endif // ENEMY_H
