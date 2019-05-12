//
// Created by Angela on 5/11/2019.
//

#include "RockPeople.h"
#include "Game.h"

RockPeople::RockPeople(int health, int attack, int shipVal, Item* myItem) : Enemy(health, attack, myItem) {
    this->setHealth(health);
    this->setAttack(attack);
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

