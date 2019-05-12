//
// Created by Malmberg, Raina on 2019-05-12.
//

#ifndef CLASSEXAMPLE_ROBOT_H
#define CLASSEXAMPLE_ROBOT_H


#include "Enemy.h"
#include "Player.h"


class Robot : public Enemy{
public:
    Robot(int health, int attack, int shipVal, Item* myItem,std::string Class);


    void taunt();
    void firstGlance();

private:

    Item* myItem;
    int shipVal;
    int itemVal;
};




#endif //CLASSEXAMPLE_ROBOT_H
