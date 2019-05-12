//
// Created by Malmberg, Raina on 2019-05-12.
//

#ifndef CLASSEXAMPLE_ROCKETUPGRADE_H
#define CLASSEXAMPLE_ROCKETUPGRADE_H


#include "Item.h"

class RocketUpgrade : public Item{
public:
    RocketUpgrade(std::string description,int modifier);
    void attribute();
};


#endif //CLASSEXAMPLE_ROCKETUPGRADE_H
