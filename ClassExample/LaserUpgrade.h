//
// Created by Malmberg, Raina on 2019-05-12.
//

#ifndef CLASSEXAMPLE_LASERUPGRADE_H
#define CLASSEXAMPLE_LASERUPGRADE_H


#include "Item.h"

class LaserUpgrade : public Item {
public:
    LaserUpgrade(std::string description,int modifier, bool armor);
    void attribute();
private:



};


#endif //CLASSEXAMPLE_LASERUPGRADE_H
