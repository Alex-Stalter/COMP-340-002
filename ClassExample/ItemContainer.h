//
// Created by Alex Stalter on 2019-05-11.
//

#ifndef CLASSEXAMPLE_ITEMCONTAINER_H
#define CLASSEXAMPLE_ITEMCONTAINER_H
#include "Item.h"


class ItemContainer {
public:
    ItemContainer(Item* loot);
    ~ItemContainer();
    Item* getItem();

private:
    Item* loot;

};


#endif //CLASSEXAMPLE_ITEMCONTAINER_H
