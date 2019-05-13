//
// Created by Alex Stalter on 2019-02-25.
//

#include "Item.h"

Item::Item(std::string description,int modifier,bool armor) {
    this->description = description;
    this->modifier = modifier;
    this->armor = armor;

}

std::string Item::getDescription() {
    return this->description;
}

int Item::getModifier() {
    return this->modifier;
}

bool Item::getArmor() {
    return this->armor;
}

void Item::setModifier(int mod) {
    this->modifier = mod;

}

