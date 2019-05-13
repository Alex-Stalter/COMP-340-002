//
// Created by Malmberg, Raina on 2019-05-12.
//

#include "Robot.h"


//a faction of tin automatons.

Robot::Robot(int health, int attack, int shipVal, Item* myItem,std::string Class) : Enemy(health, attack, myItem,Class) {
    this->shipVal = shipVal;
    this->setItem(myItem);
    if(this->shipVal==1){
        this->setHealth(60);
        this->setAttack(6);
        this->setClass("Scout");
    }else if(this->shipVal==2){
        this->setHealth(55);
        this->setAttack(4);
        this->setClass("Fighter");
    }else if(this->shipVal==3){
        this->setHealth(70);
        this->setAttack(3);
        this->setClass("Destroyer");
    }
}
void Robot::taunt() {
    std::cout<<"*A monotone voice cuts through radio static* We will scrap the ship for useful parts "
              <<  "once the fleshlings are destroyed."<<std::endl;
}


void Robot::firstGlance() {
    std::cout << "An angular titanium ship flies at your ship."
              << " It's lasers are powering up!" << std::endl;
}