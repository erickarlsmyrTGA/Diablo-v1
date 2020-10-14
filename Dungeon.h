#pragma once
#include <vector>
#include "Room.h"

class Dungeon
{
public:
	Dungeon();
	~Dungeon();
	std::vector<Room>& GetRooms();

private:
	std::vector<Room> myRooms;
};

