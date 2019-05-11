//
// Created by Alex Stalter on 2019-02-25.
//

#ifndef TEXTADVENTURE_ROOM_H
#define TEXTADVENTURE_ROOM_H
#include <string>
#include <iostream>
#include "Enemy.h"
#include "ItemContainer.h"
//Rooms are an essential building block to the advneture they hold values such as chests enemies and pointers to the other rooms in the dungeon

class Room {
public:
    Room(std::string description, bool locked,Enemy* enemy, ItemContainer* lootBox);
    ~Room();
    std::string getDescription();
    Room* getRoom(std::string direction);
    Enemy* getEnemy();
    ItemContainer* getBox();
    bool isLocked();
    void setRoom(Room* northRoom, Room* eastRoom, Room* southRoom, Room* westRoom);
    void setLock(bool lock);
    void killEnemy();
    void setContainer(ItemContainer* box);




private:
    std::string description;
    bool locked;
    bool hasKey;
    Room* northRoom;
    Room* eastRoom;
    Room* southRoom;
    Room* westRoom;
    Enemy* enemy;
    ItemContainer* lootBox;
};


#endif //TEXTADVENTURE_ROOM_H
