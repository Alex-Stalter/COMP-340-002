//
// Created by Malmberg, Raina on 2019-05-13.
//

#include "Boss.h"

Boss::Boss(int health, int attack, int shipVal, Item* myItem,std::string Class) : Enemy(health, attack, myItem,Class) {
    this->shipVal = shipVal;
    this->setItem(myItem);
    if(this->shipVal==1){
        this->setHealth(60);
        this->setAttack(8);
        this->setClass("Scout");
    }else if(this->shipVal==2){
        this->setHealth(65);
        this->setAttack(6);
        this->setClass("Fighter");
    }else if(this->shipVal==3){
        this->setHealth(75);
        this->setAttack(5);
        this->setClass("Star Destroyer");
    }
}
void Boss::taunt() {
    std::cout<<"You have come so far only to be blasted across the stars."<<std::endl;

}

void Boss::firstGlance() {
    std::cout << "A spaceship, larger than the rest and with more weapons, waits across this strange sector.\n" <<
                 "" << std::endl;
}