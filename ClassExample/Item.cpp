//
// Created by Alex Stalter on 2019-02-25.
//

#include "Item.h"

Item::Item(std::string description,int modifier) {
    this->description = description;
    this->modifier = modifier;

}

std::string Item::getDescription() {
    return this->description;
}

int Item::getModifier() {
    return this->modifier;
}

