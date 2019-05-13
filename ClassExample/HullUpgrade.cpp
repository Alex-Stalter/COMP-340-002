//
// Created by Malmberg, Raina on 2019-05-13.
//

#include "HullUpgrade.h"
HullUpgrade::HullUpgrade(std::string description, int modifier,bool armor) : Item(description, modifier, armor){
//inherited from item base class
    this->setArmor(true);
}

void HullUpgrade::attribute() {
    std::cout << "This package contains hull repair equipment, adding +" << this->getModifier() << " to your armor."
              << std::endl;
}