//
// Created by Malmberg, Raina on 2019-05-12.
//

#ifndef CLASSEXAMPLE_ROBOT_H
#define CLASSEXAMPLE_ROBOT_H


#include "Enemy.h"
#include "Player.h"


class Robot : public Enemy{
public:
    Robot(int health, int attack, int shipVal, int itemVal, int shields, int turns);
    int getShields();

    void setShields(int s);

    void taunt();
    void firstGlance(Player& myPlayer);

private:
    int shields;
    int turns;
    Item* myItem;
    int shipVal;
    int itemVal;
};




#endif //CLASSEXAMPLE_ROBOT_H
