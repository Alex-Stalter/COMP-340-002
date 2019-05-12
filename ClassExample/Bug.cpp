//
// Created by Malmberg, Raina on 2019-05-11.
//

#include "Bug.h"


Bug::Bug(int health, int attack, int shipVal, Item* myItem, std::string enemyClass) : Enemy(health, attack, myItem, enemyClass) {
    this->shipVal = shipVal;
    this->setItem(myItem);
    if(this->shipVal==1){
        this->setHealth(45);
        this->setAttack(6);
        this->setClass("Scout");
    }else if(this->shipVal==2){
        this->setHealth(50);
        this->setAttack(4);
        this->setClass("Fighter");
    }else if(this->shipVal==3){
        this->setHealth(60);
        this->setAttack(3);
        this->setClass("Destroyer");
    }
}
void Bug::taunt() {
    std::cout<<"Your four-limbed race will be exterminated!"<<std::endl;
}

void Bug::firstGlance() {
    std::cout<<"A sleek black and red ship zooms up to face Commander " << myPlayer->getName()<< "'s ship."
                                   << " It's lasers are powering up!" <<std::endl;
}
