#include "Dungeon.h"
#include "Utility.h"


Dungeon::Dungeon()
{
	int totalNumberOfDoorsInDungeon = Utility::RandomNumberGenerator(7, 15);

	for (int i = 0; i < 10; i++)
	{
		Room room;
		myRooms.push_back(room);
	}
}

Dungeon::~Dungeon()
{

}

std::vector<Room>& Dungeon::GetRooms()
{
	return myRooms;
}
