cmake_minimum_required(VERSION 3.13)
project(ClassExample)

set(CMAKE_CXX_STANDARD 14)

add_executable(ClassExample main.cpp Player.cpp Player.h Map.cpp Map.h Room.cpp Room.h Item.cpp Item.h Enemy.cpp Enemy.h Game.cpp Game.h ItemContainer.cpp ItemContainer.h RockPeople.cpp RockPeople.h)