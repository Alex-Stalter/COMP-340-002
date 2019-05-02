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


    Room* one = new Room("a room with nothing of interest but is it a great starting point. The Room has four doors that all seem unlocked.",false,false/*, nullptr, nullptr*/);
    Room* two = new Room("a room with one door leading back to where you came there is moss all over the walls and a slow drip of a red liquid in the corner.",false,false/*, armorChest, nullptr*/);
    Room* three = new Room("a room with a door to the north and to the south. The room is weirdly clean.",false,false/*, nullptr, nullptr*/);
    Room* four = new Room("a room with a door to the east and what appears to be a locked door to the west. The door has strange markings on it.",false,false/*, nullptr, nullptr*/);
    Room* five = new Room("a room with a door in all four directions but the door to the south appears to be locked.",false,false/*, nullptr,newGoblin*/);
    Room* six = new Room("a room with a small lump in the middle of the room and a door leading to where you came from.",false,false/*, strengthChest, nullptr*/);
    Room* seven = new Room("a room with a door to the north and west. there is very little in this room that is significant.",false,false /*,nullptr, newSkeleton*/);
    Room* eight = new Room("a room with two small structures in the very center of the room. You can see strange light coming from each of the four corners.",false,true /*,healthChest, nullptr*/);
    Room* nine = new Room("a room with doors leading to the north and to the south, there is a creature sitting in the middle of the room.",false,false/*, nullptr, newSlime*/);
    Room* ten = new Room("a room with doors in all directions and you can hear a creature moving around in the darkness.",false,false/*, nullptr, newZombie*/);
    Room* eleven = new Room("a room with one door leading back to where you came from. You can feel something watching you from the shadows.",false,false/*, nullptr, newSpecter*/);
    Room* twelve = new Room("a room with a small lump in the center of the room covered in moss.",false,false/*, swordChest, nullptr*/);
    Room* thirteen = new Room("a room with one door leading back north and very little of interest inside, there appears to be a smashed chest in the center and bones of a long dead traveler.",false,false/*, nullptr, newSpider*/);
    Room* fourteen = new Room("a room that appears to be some sort of guards room there are destroyed helmets shields and armor around and a desk up against one wall with the words run etched into the wall.",true,true/*, nullptr, nullptr*/);
    Room* bossRoom = new Room("a room with a giant monster in the center and the door has sealed shut behind you. You feel dread sink in as the beast in front \n"
                              "of you rears its head to greet you. This is your final stand.",true,false/*, nullptr, boss*/);
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
    this->roomList.push_back(bossRoom);

}
void Map::setDirection(){
    this->roomList[0]->setRoom(roomList[1],roomList[4],roomList[2],roomList[3]);
    this->roomList[1]->setRoom(nullptr,nullptr,roomList[0],nullptr);
    this->roomList[2]->setRoom(roomList[0],nullptr,roomList[8],nullptr);
    this->roomList[3]->setRoom(nullptr,roomList[0],nullptr,roomList[14]);
    this->roomList[4]->setRoom(roomList[5],roomList[6],roomList[13],roomList[0]);
    this->roomList[5]->setRoom(nullptr,nullptr,roomList[4],nullptr);
    this->roomList[6]->setRoom(roomList[7],nullptr,nullptr,roomList[4]);
    this->roomList[7]->setRoom(nullptr,nullptr,roomList[6],nullptr);
    this->roomList[8]->setRoom(roomList[2],nullptr,roomList[9],nullptr);
    this->roomList[9]->setRoom(roomList[8],roomList[10],roomList[12],roomList[11]);
    this->roomList[10]->setRoom(nullptr,nullptr,nullptr,roomList[9]);
    this->roomList[11]->setRoom(nullptr,roomList[9],nullptr,nullptr);
    this->roomList[12]->setRoom(roomList[9],nullptr,nullptr,nullptr);
    this->roomList[13]->setRoom(roomList[4],nullptr,nullptr,nullptr);
    this->roomList[14]->setRoom(nullptr,nullptr,nullptr,nullptr);

}

std::vector<Room *> Map::getList() {
    return this->roomList;
}
