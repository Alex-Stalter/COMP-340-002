//
// Created by Alex Stalter on 2019-02-25.
//

#include "Enemy.h"

Enemy::Enemy(int health, int attack, Item* loot) {
    this->health = health;
    this->attack = attack;
    this->loot = loot;
}
void Enemy::setHealth(int hp){
    this->health = hp;
}
void Enemy::setAttack(int atk){
    this->attack = atk;
}

int Enemy::getHealth(){
    return this->health;
}
int Enemy::getAttack(){
    return this->attack;
}

Item *Enemy::getItem() {
    return this->loot;
}
