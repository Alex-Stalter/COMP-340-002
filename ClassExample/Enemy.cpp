//
// Created by Alex Stalter on 2019-02-25.
//

#include "Enemy.h"

Enemy::Enemy(int health, int attack, Item* loot,std::string enemyClass) {
    this->health = health;
    this->attack = attack;
    this->loot = loot;
    this->enemyClass = enemyClass;
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

std::string Enemy::getClass() {
    return this->enemyClass;
}

void Enemy::setClass(std::string Class) {
    this->enemyClass = Class;
}

void Enemy::setItem(Item *loot) {
    this->loot = loot;
}
