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


    Room* one = new Room("",false,false);
    Room* two = new Room("",false,false);
    Room* three = new Room("",false,false);
    Room* four = new Room("",false,false);
    Room* five = new Room("",false,false);
    Room* six = new Room("",false,false);
    Room* seven = new Room("",false,false );
    Room* eight = new Room("",false,true );
    Room* nine = new Room("",false,false);
    Room* ten = new Room("",false,false);
    Room* eleven = new Room("",false,false);
    Room* twelve = new Room("",false,false);
    Room* thirteen = new Room("",false,false);
    Room* fourteen = new Room("",true,true);
    Room* bossRoom = new Room("",true,false);
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
