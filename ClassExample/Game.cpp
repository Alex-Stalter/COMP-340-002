//
// Created by Alex Stalter on 2019-03-04.
//
#include <iostream>
#include "Game.h"

Game::Game(){
    this->currentRoom= nullptr;
    this->userInput = "";
    this->newPlayer = new Player("Alex");
    this->newMap = new Map(newPlayer);

    instatiateGame();

}
Game::~Game(){

}

void Game::combat() {




}

void Game::instatiateGame() {
    std::cout<<"Your ship jumps into the sector and the radar lights up with obstacles throughout the system. \n"
               "Your mission is to reach the blockade in this sector and free the sector from rebel control before \n"
               "the system is drained of its resources."<<std::endl;
    this->currentRoom = this->newMap->getList()[0];
    std::cout<<"You are in "<< this->currentRoom->getDescription() << std::endl;
    while(this->userInput != "Give Up"){
        if(this->newPlayer->getHealth()<=0){
            break;
        }
        std::cout<<"What would you like to do or where would you like to go? You can always just 'Give Up'."<<std::endl;
        std::getline(std::cin, this->userInput);
         if(this->userInput=="Search"){


        }else if(this->userInput == "Take"){


        }else if(this->userInput == "Open"){


        }else if(this->userInput == "Look"){
            std::cout<<"You are in "<< this->currentRoom->getDescription() << std::endl;

        }else if(this->userInput == "Inventory"){


        }else if(this->userInput=="Give Up"){
            break;
        }else{
            this->currentRoom = this->currentRoom->getRoom(this->userInput);
            /*if(this->currentRoom->getEnemy()!= nullptr) {
                combat();
            }*/


        }

    }


}
