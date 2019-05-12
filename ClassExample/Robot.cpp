//
// Created by Malmberg, Raina on 2019-05-11.
//

#include "Robot.h"

//a faction of tin automatons.

Robot::Robot(int health, int attack, int shipVal, int itemVal) : Enemy(health, attack, myItem) {
    this->setHealth(health);
    this->setAttack(attack);
}
void Robot::taunt() {
    std::cout<<"*A monotone voice cuts through radio static* We will scrap the ship for useful parts once the fleshlings are destroyed."<<std::endl;
}

void Robot::firstGlance() {
    std::cout << "An angular titanium ship flies at " << myPlayer->getName() << "'s ship."
              << " It's lasers are powering up!" << std::endl;
}