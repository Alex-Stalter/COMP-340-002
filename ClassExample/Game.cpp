//
// Created by Alex Stalter on 2019-03-04.
//
#include <iostream>
#include "Game.h"

Game::Game(){
    this->currentRoom= nullptr;
    this->userInput = "";
    this->secondInput = "";
    this->newPlayer = new Player();
    this->newMap = new Map(newPlayer);
    int shipChoice = 0;


    //get userInput for player name
    std::cout << "Enter player name:  ";
    std::getline(std::cin, userInput);
    newPlayer->setName(userInput);
    std::cout << "Beware on your adventure, " << newPlayer->getName() << ".\n~~~~~~~\n"<<std::endl;
    std::cout<<"Please enter a number to choose your ship: \n"
               "1:Medium Fighter: Health: 100 BaseAttack: 10\n"
               "2:Small Scout: Health: 80 Base Attack: 25\n"
               "3:Heavy Frigate: Health: 150 Base Attack: 6"<<std::endl;
    std::cin>>shipChoice;
    if(shipChoice==1){
        this->newPlayer->setHealth(100);
        this->newPlayer->setDamage(10);
    }else if (shipChoice == 2){
        this->newPlayer->setHealth(80);
        this->newPlayer->setDamage(25);
    }else if (shipChoice == 3){
        this->newPlayer->setHealth(150);
        this->newPlayer->setDamage(6);
    }


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
        std::cout<<"What would you like to do or where would you like to go? You can always just 'Give Up'. To see a list of commands type "
                   "'Get Help'"<<std::endl;

        std::cin>>userInput>>secondInput;
         if(this->userInput=="Search"){
            if(this->secondInput=="chest"){
                std::cout<<"You found a map"<<std::endl;
            }

        }else if(this->userInput == "Take"){


        }else if(this->userInput == "Open"){


        }else if(this->userInput == "Look"){
            std::cout<<"You are in "<< this->currentRoom->getDescription() << std::endl;

        }else if(this->userInput == "Inventory"){
             if(this->newPlayer->getInventory().size()){
                 std::cout<<"Your inventory is empty."<<std::endl;
             }else {
                 std::cout << "You have: " << std::endl;
                 for (Item *h:this->newPlayer->getInventory()) {
                     std::cout << h->getDescription() << std::endl;
                 }
             }

        }else if(this->userInput=="Give" && this->secondInput=="Up"){
            break;
        }else if(this->userInput=="Use"){
             for (Item *h:this->newPlayer->getInventory()) {
                 if(h->getDescription()==this->secondInput){
                     this->newPlayer->setHealth(this->newPlayer->getHealth()+h->getModifier());
                 }
             }
         }else if(this->userInput=="Get" && this->secondInput=="Help"){
             std::cout<<"Commands:\n"
                        "Go {Cardinal Direction 'North','East','South','West'}\n"
                        "Search {searchable item}\n"
                        "Take {Item}\n"
                        "Open {Used for opening blockades in different sectors when the correct key is held}\n"
                        "Look Around {Displays the room description again}\n"
                        "Give Up {exits the game}\n"
                        "Use {Item in inventory}"<<std::endl;
         }else{
            this->currentRoom = this->currentRoom->getRoom(this->secondInput);
            if(this->currentRoom->getEnemy()!= nullptr) {
                combat();
            }


        }

    }


}
