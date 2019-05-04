//
// Created by Alex Stalter on 2019-02-25.
//

#include "Item.h"

Item::Item(std::string description) {
    this->description = description;

}

std::string Item::getDescription() {
    return this->description;
}

