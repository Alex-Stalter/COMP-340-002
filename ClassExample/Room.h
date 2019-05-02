//
// Created by Alex Stalter on 2019-02-25.
//

#ifndef TEXTADVENTURE_ROOM_H
#define TEXTADVENTURE_ROOM_H
#include <string>
#include <iostream>
//#include "Chest.h"
//#include "Enemy.h"
//Rooms are an essential building block to the advneture they hold values such as chests enemies and pointers to the other rooms in the dungeon

class Room {
public:
    Room(std::string description, bool locked, bool hasKey, /*Chest* chest, Enemy* enemy*/);
    ~Room();
    std::string getDescription();
    Room* getRoom(std::string direction);
    //Enemy* getEnemy();
    //Chest* getChest();
    bool isLocked();
    bool key();
    void setRoom(Room* northRoom, Room* eastRoom, Room* southRoom, Room* westRoom);
    void setLock(bool lock);
    void setKey(bool key);
    //void setChest(Chest* chest);
    void killEnemy();




private:
    std::string description;
    bool locked;
    bool hasKey;
    Room* northRoom;
    Room* eastRoom;
    Room* southRoom;
    Room* westRoom;
    //Chest* chest;
    //Enemy* enemy;
};


#endif //TEXTADVENTURE_ROOM_H
