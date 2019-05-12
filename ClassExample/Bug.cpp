//
// Created by Malmberg, Raina on 2019-05-11.
//

#include "Bug.h"


Bug::Bug(int health, int attack, int shipVal, Item* myItem) : Enemy(health, attack, myItem) {
    this->setHealth(health);
    this->setAttack(attack);
}
void Bug::taunt() {
    std::cout<<"Your four-limbed race will be exterminated!"<<std::endl;
}

void Bug::firstGlance() {
    std::cout<<"A sleek black and red ship zooms up to face Commander " << myPlayer->getName()<< "'s ship."
                                   << " It's lasers are powering up!" <<std::endl;
}
