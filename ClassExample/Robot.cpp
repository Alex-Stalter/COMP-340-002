//
// Created by Malmberg, Raina on 2019-05-12.
//

#include "Robot.h"


//a faction of tin automatons.

Robot::Robot(int health, int attack, int shipVal, int itemVal, int shields, int turns) : Enemy(health, attack, myItem) {

    this->shields = shields;
    this->getShields();
}
void Robot::taunt() {
    std::cout<<"*A monotone voice cuts through radio static* We will scrap the ship for useful parts "
              <<  "once the fleshlings are destroyed."<<std::endl;
}

int Robot::getShields() {
    return this->shields;
}

void Robot::setShields(int s){
    this->shields = s;
}

void Robot::firstGlance(Player& myPlayer) {
    std::cout << "An angular titanium ship flies at " << myPlayer.getName() << "'s ship."
              << " It's lasers are powering up!" << std::endl;
}