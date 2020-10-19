#pragma once
#include <iostream>
#include <vector>
#include "Utility.h"
#include "Door.h"
#include "Player.h"
#include "Enemy.h"
#include "Combat.h"

class Room
{
public:
	Room(int anIndex);
	Room() = default;
	~Room();
	void EnterRoom(Player& aPlayer, std::vector<Room>& someRooms);
	bool& GetCleared();
	std::vector<Enemy>& GetEnemies();
	std::vector<Door>& GetDoors();
	std::string& GetRoomName();
	void AddDoor(Door& aDoor);

private:
	bool myIsCleared;
	std::string myName;
	std::vector<Door> myDoors;
	std::vector<Enemy> myEnemies;
	void PrintName();
	void UseDoor(Player& aPlayer, std::vector<Room>& someRooms);
};

