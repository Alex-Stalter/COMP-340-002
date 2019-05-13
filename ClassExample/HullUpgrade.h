//
// Created by Malmberg, Raina on 2019-05-13.
//

#ifndef CLASSEXAMPLE_HULLUPGRADE_H
#define CLASSEXAMPLE_HULLUPGRADE_H


#include "Item.h"

class HullUpgrade : public Item {
public:
    HullUpgrade(std::string description,int modifier, bool armor);
    void attribute();
private:

};

#endif //CLASSEXAMPLE_HULLUPGRADE_H