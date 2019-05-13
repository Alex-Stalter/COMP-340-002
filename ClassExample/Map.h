//
// Created by Alex Stalter on 2019-02-25.
//

#ifndef TEXTADVENTURE_MAP_H
#define TEXTADVENTURE_MAP_H
#include "Room.h"
#include "Player.h"
#include <vector>
#include "ItemContainer.h"
#include "Enemy.h"
#include "Item.h"
#include "Bug.h"
#include "Robot.h"
#include "Rebels.h"
#include "RockPeople.h"
#include "RocketUpgrade.h"
#include "LaserUpgrade.h"
#include "Boss.h"
//Map is a large class that sets up the environment of the entire game and is where enemies items chests and rooms are created
class Map {

public:
    Map(Player* player);
    ~Map();
    void createRooms();
    void setDirection();

    std::vector<Room*> getList();

private:
    Player* player;
    std::vector<Room*> roomList;
    std::vector<Item*> itemList;


};


#endif //TEXTADVENTURE_MAP_H
