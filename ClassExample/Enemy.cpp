//
// Created by Alex Stalter on 2019-02-25.
//

#include "Enemy.h"

Enemy::Enemy(int health, int attack) {
    this->health = health;
    this->attack = attack;
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
