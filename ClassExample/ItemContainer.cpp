//
// Created by Alex Stalter on 2019-05-11.
//

#include "ItemContainer.h"

ItemContainer::ItemContainer(Item *loot) {
    this->loot = loot;
}

ItemContainer::~ItemContainer() {

}

Item* ItemContainer::getItem() {
    return this->loot;
}
