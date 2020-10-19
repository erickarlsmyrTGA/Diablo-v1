#pragma once
#include <iostream>
#include <vector>
#include <random>
#include <Windows.h>
#include <string>
#include "Utility.h"
#include "Player.h"
#include "Dungeon.h"
#include "Room.h"
#include "Door.h"

void GenerateDungeon(std::vector<Room>& someRooms, int anAmount, std::vector<Door>& someDoors, int anAmountOfDoors);