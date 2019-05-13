//
// Created by Malmberg, Raina on 2019-05-12.
//

#include "LaserUpgrade.h"

LaserUpgrade::LaserUpgrade(std::string description, int modifier,bool armor) : Item(description, modifier, armor){
    //inherited from item base class
}

void LaserUpgrade::attribute() {
    std::cout<<"This small infrared filter can be added to your ship's lasers, granting "<< this->getModifier() << "atk." <<std::endl;
}