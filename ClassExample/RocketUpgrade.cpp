//
// Created by Malmberg, Raina on 2019-05-12.
//

#include "RocketUpgrade.h"

RocketUpgrade::RocketUpgrade(std::string description, int modifier,bool armor) : Item(description, modifier, armor){
    //inherited from item base class
}

void RocketUpgrade::attribute() {
    std::cout<<"This rocket mod can be added to your rocket launcher, granting "<< this->getModifier() << "atk." <<std::endl;
}