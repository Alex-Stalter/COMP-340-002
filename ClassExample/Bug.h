//
// Created by Malmberg, Raina on 2019-05-11.
//

#ifndef CLASSEXAMPLE_BUGSCOUT_H
#define CLASSEXAMPLE_BUGSCOUT_H

#include "Enemy.h"
#include "Player.h"

//of the humanoid Scorpion race

class Bug : public Enemy {
public:
    Bug(int health, int attack, int shipVal, Item* myItem);

    void taunt();
    void firstGlance();

private:
    Item* myItem;
    Player* myPlayer;
    int shipVal;
};


#endif //CLASSEXAMPLE_BUGSCOUT_H
