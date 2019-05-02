//
// Created by Alex Stalter on 2019-02-25.
//

#ifndef TEXTADVENTURE_MAP_H
#define TEXTADVENTURE_MAP_H
#include "Room.h"
#include "Player.h"
/*#include "Enemy.h"
#include "Goblin.h"
#include "Spider.h"
#include "Skeleton.h"
#include "Slime.h"
#include "Zombie.h"
#include "Specter.h"
#include "Boss.h"
#include "Item.h"
#include "Potion.h"
#include "Sword.h"
#include "Armor.h"*/
#include <vector>
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


};


#endif //TEXTADVENTURE_MAP_H
