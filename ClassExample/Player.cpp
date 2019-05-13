//
// Created by Alex Stalter on 2019-05-01.
//

#include "Player.h"

Player::Player() {
    this->health = 100;
    this->attackDamage = 10;
    this->calcGuns();
}
Player::~Player(){
}
void Player::setName(std::string name) {
    this->name = name;
}

std::string  Player::getName(){
    return this->name;
}
int Player::getHealth(){
    return this->health;
}
int Player::getAttack(){
    return this->attackDamage;
}
void Player::setDamage(int attack){
    this->attackDamage = attack;
    this->calcGuns();
}
void Player::setHealth(int health){
    this->health = health;
}
void Player::damageHealth(int damage){
    this->health = this->health - damage;
}
bool Player::isStunned(){
    return this->stunned;
}
void Player::setStun(bool stun){
    this->stunned = stun;
}

std::vector<Item*> Player::getInventory() {
    return this->Inventory;
}

void Player::addItem(Item *loot) {
    this->Inventory.push_back(loot);

}

void Player::calcGuns() {
    this->rocketAttack = this->attackDamage+10;
    this->laserAttack = this->attackDamage+5;
    this->stunAttack = this->attackDamage-5;
}

int Player::getLaser() {
    return this->laserAttack;
}

int Player::getRocket() {
    return this->rocketAttack;
}

int Player::getStun() {
    return this->stunAttack;
}
