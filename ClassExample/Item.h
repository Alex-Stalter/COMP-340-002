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
    Item(std::string description,int modifier,bool armor);
    std::string getDescription();
    int getModifier();
    bool getArmor();
    virtual void attribute()= 0;
    void setModifier(int mod);
    void setArmor(bool armor);

private:
    std::string description;
    int modifier;
    bool armor;

};


#endif //TEXTADVENTURE_ITEM_H
