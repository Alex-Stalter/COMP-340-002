//
// Created by Alex Stalter on 2019-02-25.
//

#ifndef TEXTADVENTURE_ENEMY_H
#define TEXTADVENTURE_ENEMY_H
#include<string>
#include <iostream>
#include "Item.h"
//Enemy is a abstract method that has seven different children all of who have the same function, to provide the player with obstacles to loot keys and
//their end goal

class Enemy {
public:
    Enemy(int health,int attack,Item* loot,std::string enemyClass);
    void setHealth(int hp);
    void setAttack(int atk);
    void setClass(std::string Class);
    void setItem(Item* loot);

    int getHealth();
    int getAttack();
    Item* getItem();
    std::string getClass();

    virtual void taunt() = 0;

    virtual void firstGlance() = 0;

private:
    int health;
    int attack;
    Item* loot;
    std::string enemyClass;
};


#endif //TEXTADVENTURE_ENEMY_H
