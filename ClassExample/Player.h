//
// Created by Alex Stalter on 2019-05-01.
//

#ifndef CLASSEXAMPLE_PLAYER_H
#define CLASSEXAMPLE_PLAYER_H
#include <iostream>
#include <vector>
#include "Item.h"


class Player {
public:
    Player();
    ~Player();

    void setName(std::string name);
    std::string getName();
    //std::vector<Item*> getInventory();


    int getHealth();
    int getAttack();
    bool isStunned();
    int getLaser();
    int getRocket();
    int getStun();
    std::vector<Item*> getInventory();

    //functions for changing the health and attack
    void setDamage(int attack);
    void calcGuns();
    void setHealth(int health);
    void damageHealth(int damage);
    void addItem(Item* loot);
    void setStun(bool stun);
private:
    std::string name;
    std::vector<Item*> Inventory;
    int health;
    int attackDamage;
    bool stunned;
    int rocketAttack;
    int laserAttack;
    int stunAttack;

};


#endif //CLASSEXAMPLE_PLAYER_H
