//
// Created by Alex Stalter on 2019-02-25.
//

#ifndef TEXTADVENTURE_ITEM_H
#define TEXTADVENTURE_ITEM_H
#include <string>
#include<iostream>
//Item provides the player with reward that is scattered around the map in chests the children include Sword Armor and potions
//each of which help the player in an essential way

class Item {
public:
    Item(std::string description);
    std::string getDescription();
    virtual void attribute()= 0;


private:
    std::string description;

};


#endif //TEXTADVENTURE_ITEM_H
