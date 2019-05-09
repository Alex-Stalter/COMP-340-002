//
// Created by Alex Stalter on 2019-03-04.
//

#ifndef TEXTADVENTURE_GAME_H
#define TEXTADVENTURE_GAME_H
#include "Map.h"
//Game is the central working method of the entire program it is where the players inputs ae taken in and decided what to do with them
class Game {
public:
    Game();
    ~Game();
    void combat();
    void instatiateGame();

private:
    Room* currentRoom;
    std::string userInput;
    Player* newPlayer;
    Map* newMap;
    bool hasStrength;
    bool hasHealthPot;
};


#endif //TEXTADVENTURE_GAME_H
