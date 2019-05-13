//
// Created by Malmberg, Raina on 2019-05-13.
//

#ifndef CLASSEXAMPLE_BOSS_H
#define CLASSEXAMPLE_BOSS_H

#include "Enemy.h"

class Boss : public Enemy {
public:
    Boss(int health, int attack, int shipVal, Item *myItem, std::string Class);

    void taunt();

    void firstGlance();
private:
    Item* myItem;
    int shipVal;
};




#endif //CLASSEXAMPLE_BOSS_H
