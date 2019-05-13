//
// Created by Malmberg, Raina on 2019-05-11.
//

#include "Bug.h"


Bug::Bug(int health, int attack, int shipVal, Item* myItem, std::string Class) : Enemy(health, attack, myItem, Class) {
    this->shipVal = shipVal;
    this->setItem(myItem);
    if(this->shipVal==1){
        this->setHealth(40);
        this->setAttack(6);
        this->setClass("Scout");
    }else if(this->shipVal==2){
        this->setHealth(45);
        this->setAttack(4);
        this->setClass("Fighter");
    }else if(this->shipVal==3){
        this->setHealth(55);
        this->setAttack(3);
        this->setClass("Destroyer");
    }
}
void Bug::taunt() {
    std::cout<<"Your four-limbed race will be exterminated!"<<std::endl;
}

void Bug::firstGlance() {
    std::cout<<"A sleek black and red ship zooms up to face the Commander's ship.\n"
                                   << " It's lasers are powering up!" <<std::endl;
}
