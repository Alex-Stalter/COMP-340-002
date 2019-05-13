//
// Created by Alex Stalter on 2019-02-25.
//

#include "Map.h"

Map::Map(Player* player){
    this->player = player;
    this->createRooms();
    this->setDirection();

}
Map::~Map(){

}
void Map::createRooms(){
<<<<<<< HEAD
=======
    Item* lzr5 = new LaserUpgrade("sLaser", 5,false);
    Item* lzr10 = new LaserUpgrade("mLaser", 10,false);
    Item* lzr15 = new LaserUpgrade("gLaser", 15,false);
    Item* rkt5 = new RocketUpgrade("sRocket", 5,false);
    Item* rkt10 = new RocketUpgrade("mRocket", 10,false);
    Item* rkt15 = new RocketUpgrade("gRocket", 15,false);
>>>>>>> master

    this->itemList.push_back(rkt15);

    Enemy* scoutBug = new Bug(0,0,1, this->itemList.back(),"");
    this->itemList.pop_back();
    Enemy* fighterBug = new Bug(0,0,2, nullptr,"");
    Enemy* destroyerBug = new Bug(0,0,3, nullptr,"");
    Enemy* scoutRobot = new Robot(0,0,1, nullptr,"");
    Enemy* fighterRobot = new Robot(0,0,2, nullptr,"");
    Enemy*  heavyRobot= new Robot(0,0,3, nullptr,"");
    Enemy* scoutRebel = new Rebels(0,0,1, nullptr,"");
    Enemy* fighterRock = new RockPeople(0,0,2, nullptr,"");
    Enemy* heavyRebel = new Rebels(0,0,3, nullptr,"");
    Enemy* scoutRock = new RockPeople(0,0,1, nullptr,"");

    Enemy* boos = new Boss(0,0,3,nullptr,"");

    LaserUpgrade* lzr5 = new LaserUpgrade("sLaser", 5,false);
    LaserUpgrade* lzr10 = new LaserUpgrade("mLaser", 10,false);
    LaserUpgrade* lzr15 = new LaserUpgrade("gLaser", 15,false);
    RocketUpgrade* rkt5 = new RocketUpgrade("sRocket", 5,false);


    ItemContainer* box = new ItemContainer(lzr10);
    ItemContainer* crate = new ItemContainer(rkt5);
    ItemContainer* barrel = new ItemContainer(nullptr);
    ItemContainer* debris = new ItemContainer(nullptr);
    ItemContainer* debris1 = new ItemContainer(lzr5);

    Room* one = new Room("Sector 1: Planet X. There is a small cluster of asteroids, and they are orbiting and crashing into one another, bits and pieces are flying everywhere.",false, nullptr, debris1);
    Room* two = new Room("Sector 2: Callisto. You see a big piece of space junk floating by the ship.",true, nullptr, box);
    Room* three = new Room("Sector 3: Geminids",false, fighterBug, nullptr);
    Room* four = new Room("Sector 4: Titan",false, destroyerBug, nullptr);
    Room* five = new Room("Sector 5: Orion Nebula. What looks like half of an exploded spaceship is up ahead. ",false, nullptr, crate);
    Room* six = new Room("Sector 6: Enceladus",false, heavyRebel, nullptr);
    Room* seven = new Room("Sector 7: Horesehead Nebula",false, nullptr, nullptr );
    Room* eight = new Room("Sector 8: Helix",false, scoutRebel, nullptr);
    Room* nine = new Room("Sector 9: Perseus. You've never seen such a shiny asteroid! It looks rare. ",false, nullptr, debris);
    Room* ten = new Room("Sector 10: Andromeda galaxy",false, fighterRobot, nullptr);
    Room* eleven = new Room("Sector 11: Big dipper. It looks like there is something in the the dip of the dipper..",true, nullptr, barrel);
    Room* twelve = new Room("Sector 12: Black Hole!!",false, scoutRock, nullptr);
    Room* thirteen = new Room("Sector 13: Astroid field",false, fighterRock, nullptr);
    Room* fourteen = new Room("Sector 14: Orion's Belt",false, heavyRobot, nullptr);
    Room* fifteen = new Room("Sector 15: Phobos",false, scoutRobot, nullptr);
    Room* sixteen = new Room("Sector 16: Kepler 452b",false, scoutBug, nullptr);
    Room* bossRoom = new Room("Unkown Sector",false, boos, nullptr);
    this->roomList.push_back(one);
    this->roomList.push_back(two);
    this->roomList.push_back(three);
    this->roomList.push_back(four);
    this->roomList.push_back(five);
    this->roomList.push_back(six);
    this->roomList.push_back(seven);
    this->roomList.push_back(eight);
    this->roomList.push_back(nine);
    this->roomList.push_back(ten);
    this->roomList.push_back(eleven);
    this->roomList.push_back(twelve);
    this->roomList.push_back(thirteen);
    this->roomList.push_back(fourteen);
    this->roomList.push_back(fifteen);
    this->roomList.push_back(sixteen);
    this->roomList.push_back(bossRoom);

}
void Map::setDirection(){
    //Room Directions(north east south west)
    this->roomList[0]->setRoom(roomList[7], nullptr, nullptr,roomList[1]);
    this->roomList[1]->setRoom(roomList[6],roomList[0], nullptr,roomList[2]);
    this->roomList[2]->setRoom(roomList[5],roomList[1], nullptr,roomList[3]);
    this->roomList[3]->setRoom(roomList[4],roomList[2],nullptr, nullptr);
    this->roomList[4]->setRoom(roomList[11],roomList[5],roomList[3], nullptr);
    this->roomList[5]->setRoom(roomList[10],roomList[6],roomList[2],roomList[4]);
    this->roomList[6]->setRoom(roomList[9],roomList[7],roomList[1],roomList[5]);
    this->roomList[7]->setRoom(roomList[8],nullptr,roomList[0],roomList[6]);
    this->roomList[8]->setRoom(roomList[15], nullptr,roomList[7],roomList[9]);
    this->roomList[9]->setRoom(roomList[14],roomList[8],roomList[6],roomList[10]);
    this->roomList[10]->setRoom(roomList[13],roomList[9],roomList[5],roomList[11]);
    this->roomList[11]->setRoom(roomList[12],roomList[10],roomList[9],nullptr);
    this->roomList[12]->setRoom(nullptr,roomList[13],roomList[11], nullptr);
    this->roomList[13]->setRoom(nullptr,roomList[14],roomList[10],roomList[12]);
    this->roomList[14]->setRoom(nullptr,roomList[15],roomList[9],roomList[13]);
    this->roomList[15]->setRoom(nullptr,nullptr,roomList[8],roomList[14]);

}

std::vector<Room *> Map::getList() {
    return this->roomList;
}
