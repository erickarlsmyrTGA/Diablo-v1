#pragma once
#include <iostream>
#include <vector>
#include "Utility.h"
#include "Door.h"
#include "Player.h"
#include "Enemy.h"

class Room
{
public:
	Room();
	~Room();
	void EnterRoom(Player& player);
	bool& GetCleared();
	std::vector<Enemy>& GetEnemies();

private:
	bool myIsCleared;
	std::vector<Enemy> myEnemies;
	std::vector<Door> myDoors;
};

