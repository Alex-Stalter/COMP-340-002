//
// Created by Malmberg, Raina on 2019-05-11.
//

#ifndef CLASSEXAMPLE_ROBOT_H
#define CLASSEXAMPLE_ROBOT_H

#include "Enemy.h"
#include "Player.h"


class Robot : public Enemy{
public:
    Robot(int health, int attack, int shipVal, int itemVal);

    void taunt();
    void firstGlance();

private:
    Item* myItem;
    Player* myPlayer;
    int shipVal;
    int itemVal;
};


#endif //CLASSEXAMPLE_ROBOT_H
