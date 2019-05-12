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
    this->enemiesKilled = 0;


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
    bool enemyStunned = false;
    int stunTime = 0;
    std::cout<<"An enemy ship jumps into view, you ready your guns and prepare to battle. Type Get Help to get commands."<<std::endl;
    while(this->newPlayer->getHealth()>=0&&this->currentRoom->getEnemy()->getHealth()>=0){
        if(stunTime>0){
            stunTime--;
        }
        std::cin>>userInput>>secondInput;
        if(this->userInput=="Attack"){
            if(this->secondInput=="Rocket"){
                this->currentRoom->getEnemy()->setHealth(this->currentRoom->getEnemy()->getHealth()-this->newPlayer->getRocket());
                if(!enemyStunned){
                    this->newPlayer->damageHealth(this->currentRoom->getEnemy()->getAttack());
                }
            }else if(this->secondInput=="Laser"){
                this->currentRoom->getEnemy()->setHealth(this->currentRoom->getEnemy()->getHealth()-this->newPlayer->getLaser());
                if(!enemyStunned){
                    this->newPlayer->damageHealth(this->currentRoom->getEnemy()->getAttack());
                }
            }else if(this->secondInput=="Stun"){
                this->currentRoom->getEnemy()->setHealth(this->currentRoom->getEnemy()->getHealth()-this->newPlayer->getStun());
                enemyStunned = true;
                stunTime +=2;

            }
        }else if(this->userInput=="Run"){
            std::default_random_engine generator;
            std::uniform_int_distribution<int> distribution(1,100);
            int escapeChance = distribution(generator);
            if(escapeChance>49){
                this->currentRoom = this->currentRoom->getRoom(this->secondInput);
            }else if(!enemyStunned){
                this->newPlayer->damageHealth(this->currentRoom->getEnemy()->getAttack());
            }

        }else if(this->userInput=="Inventory"){


        }else if(this->userInput=="Get" && this->secondInput=="Help"){
            std::cout<<"Combat Commands:\n"
                       "Attack {Rocket ,Laser ,Stun } \n"
                       "Run {Cardinal}\n"
                       "Inventory {Check, Use}"<<std::endl;
        }
    }


}

void Game::instatiateGame() {
    std::cout
            << "Your ship arrives in the system you only have 12 jumps to ready yourself before you have to face the rebel leader.\n"
               "If you destroy enough enemy ships you'll be able to access the blockaded sectors of this system.\n"
               "Good luck captain!" << std::endl;


    this->currentRoom = this->newMap->getList()[0];
    std::cout << "You are in " << this->currentRoom->getDescription() << std::endl;
    while (this->userInput != "Give Up") {
        if (this->newPlayer->getHealth() <= 0) {
            break;
        }
        std::cout
                << "What would you like to do or where would you like to go? You can always just 'Give Up'. To see a list of commands type "
                   "'Get Help'" << std::endl;
        
        //std::getline(std::cin, this->userInput);
        std::cin >> userInput;
        if (this->userInput == "Search") {

            std::cin >> userInput >> secondInput;
            if (this->userInput == "Search") {
                if (this->secondInput == "Debris") {
                    std::cout << "In the debris of a collision you find an upgrade." << std::endl;
                } else if (this->secondInput == "Ship") {
                    std::cout << "You search through the wreckage of the ship you destroyed and find an upgrade."
                              << std::endl;
                }

            } else if (this->userInput == "Take") {
                if (this->secondInput == "Upgrade") {
                    this->newPlayer->addItem(this->currentRoom->getBox()->getItem());
                    std::cout << "You find a " << this->currentRoom->getBox()->getItem()->getDescription()
                              << " and add it to your inventory." << std::endl;
                }

            } else if (this->userInput == "Open") {
                if (this->secondInput == "Blockade" && this->newMap->getList()[10]->isLocked() &&
                    this->enemiesKilled >= 2) {
                    this->newMap->getList()[10]->setLock(false);
                    std::cout
                            << "Captain, the blockade around sector 11 has been lifted and we are now free to travel there"
                            << std::endl;
                } else if (this->secondInput == "Blockade" && this->newMap->getList()[1]->isLocked() &&
                           this->enemiesKilled >= 4) {
                    this->newMap->getList()[1]->setLock(false);
                    std::cout
                            << "Captain, the blockade around sector 1 has been lifted and we are free to travel there."
                            << std::endl;
                }

            } else if (this->userInput == "Look") {
                std::cout << "You are in " << this->currentRoom->getDescription() << std::endl;

            } else if (this->userInput == "Inventory") {
                if (this->newPlayer->getInventory().empty()) {
                    std::cout << "Your inventory is empty." << std::endl;
                } else {
                    std::cout << "You have: " << std::endl;
                    for (Item *h:this->newPlayer->getInventory()) {
                        std::cout << h->getDescription() << std::endl;
                    }
                }

            } else if (this->userInput == "Give" && this->secondInput == "Up") {


            } else if (this->userInput == "GiveUp") {
                break;
            } else if (this->userInput == "Use") {
                int count = -1;
                for (Item *h:this->newPlayer->getInventory()) {
                    count++;
                    if (h->getModifier() > 0) {
                        if (h->getDescription() == this->secondInput) {

                            this->newPlayer->setHealth(this->newPlayer->getHealth() + h->getModifier());
                            this->newPlayer->getInventory().erase(this->newPlayer->getInventory().begin() + count);
                        }
                    }

                }
            } else if (this->userInput == "Get" && this->secondInput == "Help") {
                std::cout << "Commands:\n"
                             "Go {Cardinal Direction 'North','East','South','West'}\n"
                             "Search {searchable item}\n"
                             "Take {Item}\n"
                             "Open {Used for opening blockades in different sectors when the correct key is held use Blockade as second input}\n"
                             "Look Around {Displays the room description again}\n"
                             "Give Up {exits the game}\n"
                             "Inventory Check"
                             "Use {Item in inventory}" << std::endl;
            } else {
                this->currentRoom = this->currentRoom->getRoom(this->secondInput);
                if (this->currentRoom->getEnemy() != nullptr) {
                    combat();
                }


            }

        }


    }
}

