//
// Created by Alex Stalter on 2019-05-01.
//

#ifndef CLASSEXAMPLE_PLAYER_H
#define CLASSEXAMPLE_PLAYER_H
#include <iostream>


class Player {
public:
    Player(std::string name);
    ~Player();

    std::string getName();
    //std::vector<Item*> getInventory();


    int getHealth();
    int getAttack();
    bool isStunned();

    //functions for changing the health and attack
    void setDamage(int attack);
    void setHealth(int health);
    void damageHealth(int damage);
    //void addItem(Item* loot);
    void setStun(bool stun);
private:
    std::string name;
    //std::vector<Item*> Inventory;
    int health;
    int attackDamage;
    bool stunned;

};


#endif //CLASSEXAMPLE_PLAYER_H