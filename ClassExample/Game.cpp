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
    this->jumpsLeft = 12;


    //get userInput for player name
    std::cout << "Enter player name:  ";
    std::getline(std::cin, userInput);
    newPlayer->setName(userInput);
    std::cout << "Beware on your adventure, " << newPlayer->getName() << ".\n~~~~~~~\n"<<std::endl;
    std::cout<<"Please enter a number to choose your ship: \n"
               "1:Medium Fighter: Health: 100 BaseAttack: 10\n"
               "2:Small Scout: Health: 80 Base Attack: 20\n"
               "3:Heavy Frigate: Health: 150 Base Attack: 6"<<std::endl;
    std::cin>>shipChoice;
    if(shipChoice==1){
        this->newPlayer->setHealth(100);
        this->newPlayer->setDamage(100);
    }else if (shipChoice == 2){
        this->newPlayer->setHealth(80);
        this->newPlayer->setDamage(20);
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
    int rocketsLeft = 2;
    std::cout<<"An enemy ship jumps into view, you ready your guns and prepare to battle. Type Get Help to get commands."<<std::endl;
    this->currentRoom->getEnemy()->firstGlance();
    this->currentRoom->getEnemy()->taunt();

    while(this->newPlayer->getHealth()>=0&&this->currentRoom->getEnemy()->getHealth()>=0){
        if(this->currentRoom->getEnemy()== nullptr) {
            break;
        }
        if(stunTime>0){
            stunTime--;
        }
        std::cout<<"Your Health is: "<<this->newPlayer->getHealth()<<std::endl;
        std::cout<<"The enemy has "<<this->currentRoom->getEnemy()->getHealth()<<" health."<<std::endl;
        std::cin>>userInput>>secondInput;
        if(this->userInput=="Attack"){
            if(this->secondInput=="Rocket"&&rocketsLeft>0){
                this->currentRoom->getEnemy()->setHealth(this->currentRoom->getEnemy()->getHealth()-this->newPlayer->getRocket());
                rocketsLeft--;
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

            }else{
                std::cout<<"That attack is unavailible"<<std::endl;
            }
        }else if(this->userInput=="Run"){

                this->currentRoom = this->currentRoom->getRoom(this->secondInput);
            if(this->currentRoom->getEnemy()!= nullptr) {
                combat();
            }else{
                break;
            }



        }else if(this->userInput=="Ship"){
            if(this->secondInput=="Inventory"){
                if (this->newPlayer->getInventory().empty()) {
                    std::cout << "Your inventory is empty." << std::endl;
                } else {
                    std::cout << "You have: " << std::endl;
                    for (Item *h:this->newPlayer->getInventory()) {
                        std::cout << h->getDescription()<<" :"<<std::endl;
                        h->attribute();
                    }
                }
            }else if(this->secondInput=="Check"){
                std::cout<<"Your health is: "<<this->newPlayer->getHealth()<<std::endl;
                std::cout<<"Your rocket attack is: "<<this->newPlayer->getRocket()<<std::endl;
                std::cout<<"Your laser attack is: "<<this->newPlayer->getLaser()<<std::endl;
                std::cout<<"Your stun attack is: "<<this->newPlayer->getStun()<<std::endl;
            }else{
                for (Item *h:this->newPlayer->getInventory()) {

                    if (h->getModifier() > 0) {
                        if (h->getDescription() == this->secondInput) {
                            if(h->getArmor()){
                                this->newPlayer->setHealth(this->newPlayer->getHealth() + h->getModifier());
                                h->setModifier(0);
                            }else{
                                this->newPlayer->setDamage(this->newPlayer->getAttack() + h->getModifier());
                                std::cout<<"Attack is now: "<<this->newPlayer->getAttack()<<std::endl;
                                this->newPlayer->calcGuns();
                                h->setModifier(0);
                            }


                        }
                    }else{
                        std::cout<<"This upgrade is spent."<<std::endl;
                    }


                }
                if(!enemyStunned){
                    this->newPlayer->damageHealth(this->currentRoom->getEnemy()->getAttack());
                }
            }


        }else if(this->userInput=="Get" && this->secondInput=="Help"){
            std::cout<<"Combat Commands:\n"
                       "Attack {Rocket ,Laser ,Stun } \n"
                       "Run {Cardinal}\n"
                       "Ship {Inventory, Item(enter usable item), Check(displays ships current health)}"<<std::endl;
        }
    }
    if(this->currentRoom->getEnemy()==nullptr){
        std::cout<<"You have escaped from the enemy."<<std::endl;
    }else if(this->newPlayer->getHealth()<=0){
        std::cout<<"You have been defeated!"<<std::endl;
    }else if(this->currentRoom->getEnemy()->getHealth()<=0){
        this->enemiesKilled++;
        std::cout<<"The ship breaks apart and leaves some loot for you to search"<<std::endl;
        this->currentRoom->killEnemy();
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

        std::cout<< "What would you like to do or where would you like to go? You can always just 'Give Up'. To see a list of commands type "
                   "'Get Help'" << std::endl;
        if(this->jumpsLeft>0){
            std::cout<<"You have: "<<this->jumpsLeft<<" jumps left."<<std::endl;
        }
        std::cout<<"You have destroyed "<<this->enemiesKilled<<" enemy ships"<<std::endl;

        
        //std::getline(std::cin, this->userInput);
        std::cin >> userInput>>secondInput;


            if (this->userInput == "Search") {
                if(this->currentRoom->getBox()== nullptr){
                    std::cout<<"you find nothing of interest here"<<std::endl;
                }else if (this->secondInput == "Debris"||this->secondInput=="Station"||this->secondInput=="Junk"||this->secondInput=="Asteroid") {
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
                }else{
                    std::cout<<"You cannot open the blockade yet you have to kill more enemy ships"<<std::endl;
                }

            } else if (this->userInput == "Look") {
                std::cout << "You are in " << this->currentRoom->getDescription() << std::endl;

            } else if (this->userInput == "Inventory") {
                if (this->newPlayer->getInventory().empty()) {
                    std::cout << "Your inventory is empty." << std::endl;
                } else {
                    std::cout << "You have: " << std::endl;
                    for (Item *h:this->newPlayer->getInventory()) {
                        std::cout << h->getDescription()<<" :"<<std::endl;
                        h->attribute();
                    }
                }

            } else if (this->userInput == "Give" && this->secondInput == "Up") {
                break;
            }else if (this->userInput == "Use") {

                for (Item *h:this->newPlayer->getInventory()) {

                    if (h->getModifier() > 0) {
                        if (h->getDescription() == this->secondInput) {
                                if(h->getArmor()){
                                    this->newPlayer->setHealth(this->newPlayer->getHealth() + h->getModifier());
                                    std::cout<<"Your health is now: "<<this->newPlayer->getHealth()<<std::endl;
                                    h->setModifier(0);
                                }else{
                                    this->newPlayer->setDamage(this->newPlayer->getAttack() + h->getModifier());
                                    std::cout<<"Attack is now: "<<this->newPlayer->getAttack()<<std::endl;
                                    this->newPlayer->calcGuns();
                                    h->setModifier(0);
                                }


                        }
                    }else{
                        std::cout<<"This upgrade is spent."<<std::endl;
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
            } else if(this->userInput=="Go"){
                this->jumpsLeft--;
                if(this->jumpsLeft<=0){
                    this->currentRoom = this->newMap->getList()[16];
                    std::cout<<"You have been warped to an unknown sector not on any maps and in front of you lies the flagship of the rebel fleet."<<std::endl;
                }
                this->currentRoom = this->currentRoom->getRoom(this->secondInput);


                if (this->currentRoom->getEnemy() != nullptr) {
                    combat();
                }



            }else{
                std::cout<<"that is not a valid command!"<<std::endl;
            }




    }
    if(this->newPlayer->getHealth()>0&&this->userInput!="Give"&&this->secondInput!="Up"){
        std::cout<<"You have defeated the rebel flagship and freed the solar system from their evil reign! \n"
                   " You can finally tak your ship back home after saving the system."<<std::endl;
    }else{
        std::cout<<"Your ship breaks apart and you are sucked out into space dying immediately."<<std::endl;
    }

}

