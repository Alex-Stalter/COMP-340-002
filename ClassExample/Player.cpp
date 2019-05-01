//
// Created by Alex Stalter on 2019-05-01.
//

#include "Player.h"

Player::Player(std::string playerName) {
    this->name = playerName;
    this->health = 100;
    this->attackDamage = 15;
}
Player::~Player(){

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
}
void Player::setHealth(int health){
    this->health = health;
}
void Player::damageHealth(int damage){
    this->health =-damage;
}
bool Player::isStunned(){
    return this->stunned;
}
void Player::setStun(bool stun){
    this->stunned = stun;
}
