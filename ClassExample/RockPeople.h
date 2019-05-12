//
// Created by Angela on 5/11/2019.
//

#ifndef CLASSEXAMPLE_ROCKPEOPLE_H
#define CLASSEXAMPLE_ROCKPEOPLE_H
#include "Enemy.h"

class RockPeople: public Enemy{
public:
    RockPeople(int health, int attack,  int shipVal, Item* myItem);
    void taunt();
    void firstGlance();
private:
    Item* myItem;
    int shipVal;

};


#endif //CLASSEXAMPLE_ROCKPEOPLE_H
