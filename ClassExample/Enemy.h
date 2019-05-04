//
// Created by Alex Stalter on 2019-02-25.
//

#ifndef TEXTADVENTURE_ENEMY_H
#define TEXTADVENTURE_ENEMY_H
#include<string>
#include <iostream>
//Enemy is a abstract method that has seven different children all of who have the same function, to provide the player with obstacles to loot keys and
//their end goal

class Enemy {
public:
    Enemy(int health,int attack);
    void setHealth(int hp);
    void setAttack(int atk);

    int getHealth();
    int getAttack();

    virtual void taunt() = 0;

    virtual void firstGlance() = 0;

private:
    int health;
    int attack;

};


#endif //TEXTADVENTURE_ENEMY_H
