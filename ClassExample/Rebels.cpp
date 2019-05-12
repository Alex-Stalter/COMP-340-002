//
// Created by Angela on 5/12/2019.
//

#include "Rebels.h"
Rebels::Rebels(int health, int attack, int shipVal, Item* myItem) : Enemy(health, attack, myItem) {
    this->setHealth(health);
    this->setAttack(attack);
}
void Rebels::taunt() {
    std::cout<<"You have no chance against the Rebels. We're the cool kids of the galaxy."<<std::endl;

}

void Rebels::firstGlance() {
    std::cout << "A funky looking ship approaches, doing back and front flips, and swerving side to side." << std::endl;
}

