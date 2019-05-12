//
// Created by Angela on 5/11/2019.
//

#include "RockPeople.h"
#include "Game.h"

RockPeople::RockPeople(int health, int attack, int shipVal, Item* myItem, std::string Class) : Enemy(health, attack, myItem, Class) {
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
void RockPeople::taunt() {
    std::cout<<"You   think "<<std::endl;
    std::cout<<"you  can  defeat our "<<std::endl;
    std::cout<<"boulders? You shall be pulverized to a mere pebble."<<std::endl;
}

void RockPeople::firstGlance() {
    std::cout << "The radar starts beeping, detecting an astroid coming straight at your ship." << std::endl;
    std::cout << " Strangly, there's lights on the giant mass of rock, and it stops abruptly in front of you." << std::endl;

}

