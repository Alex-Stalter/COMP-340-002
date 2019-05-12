//
// Created by Angela on 5/12/2019.
//

#ifndef CLASSEXAMPLE_REBELS_H
#define CLASSEXAMPLE_REBELS_H
#include "Enemy.h"

class Rebels: public Enemy{
public:
    Rebels(int health, int attack,  int shipVal, Item* myItem);
    void taunt();
    void firstGlance();
private:
    Item* myItem;
    int shipVal;

};




#endif //CLASSEXAMPLE_REBELS_H
