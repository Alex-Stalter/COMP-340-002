//
// Created by Angela on 5/12/2019.
//

#include "Rebels.h"
Rebels::Rebels(int health, int attack, int shipVal, Item* myItem,std::string Class) : Enemy(health, attack, myItem,Class) {
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
void Rebels::taunt() {
    std::cout<<"You have no chance against the Rebels. We're the cool kids of the galaxy."<<std::endl;

}

void Rebels::firstGlance() {
    std::cout << "A funky looking ship approaches, doing back and front flips, and swerving side to side." << std::endl;
}

