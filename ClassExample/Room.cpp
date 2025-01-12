//
// Created by Alex Stalter on 2019-02-25.
//

#include "Room.h"

Room::Room(std::string description, bool locked,Enemy* enemy, ItemContainer* lootBox){
    this->description = description;
    this->locked = locked;
    this->enemy = enemy;
    this->lootBox = lootBox;


}
Room::~Room(){}
std::string Room::getDescription(){
    return this->description;
}
Room* Room::getRoom(std::string direction){
    if(direction == "North"&& this->northRoom!= nullptr && !this->northRoom->isLocked()){
        std::cout<<"You enter "<< this->northRoom->getDescription() << std::endl;
        return this->northRoom;
    }else if(direction=="East"&& this->eastRoom!= nullptr && !this->eastRoom->isLocked()){
        std::cout<<"You enter "<< this->eastRoom->getDescription() << std::endl;
        return this->eastRoom;
    }else if(direction=="West"&& this->westRoom!= nullptr && !this->westRoom->isLocked()){
        std::cout<<"You enter "<< this->westRoom->getDescription() << std::endl;
        return this->westRoom;
    }else if(direction=="South"&& this->southRoom!= nullptr && !this->southRoom->isLocked()){
        std::cout<<"You enter "<< this->southRoom->getDescription() << std::endl;
        return this->southRoom;
    }else if(direction == "North"&& this->northRoom!= nullptr && this->northRoom->isLocked()){
        std::cout<<"That door is locked!"<<std::endl;
        return this;
    }else if(direction=="East"&& this->eastRoom!= nullptr && this->eastRoom->isLocked()){
        std::cout<<"That door is locked!"<<std::endl;
        return this;
    }else if(direction=="West"&& this->westRoom!= nullptr && this->westRoom->isLocked()){
        std::cout<<"That door is locked!"<<std::endl;
        return this;
    }else if(direction=="South"&& this->southRoom!= nullptr && this->southRoom->isLocked()){
        std::cout<<"That door is locked!"<<std::endl;
        return this;
    }else{
        std::cout<<"You can't go that way!"<<std::endl;
        return this;
    }
}

void Room::setRoom(Room *northRoom, Room *eastRoom, Room *southRoom, Room *westRoom) {
    this->northRoom = northRoom;
    this->eastRoom = eastRoom;
    this->southRoom = southRoom;
    this->westRoom = westRoom;

}

bool Room::isLocked() {
    return this->locked;
}

void Room::setLock(bool lock) {
    this->locked = lock;
}

void Room::killEnemy() {
    ItemContainer* newContainer = new ItemContainer(this->enemy->getItem());
    this->lootBox = newContainer;
    this->enemy = nullptr;
}

Enemy *Room::getEnemy() {
    return this->enemy;
}

void Room::setContainer(ItemContainer * box) {
    this->lootBox = box;

}

ItemContainer *Room::getBox() {
    return this->lootBox;
}

