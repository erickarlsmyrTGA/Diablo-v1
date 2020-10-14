#include "Utility.h"
#include "Room.h"


Room::Room()
{
	myIsCleared = false;

	int enemyCount = Utility::RandomNumberGenerator(1, 10);

	for (int i = 0; i < static_cast<int>(enemyCount); i++)
	{
		Enemy enemy;
		myEnemies.push_back(enemy);
	}
}

Room::~Room()
{

}

std::vector<Enemy>& Room::GetEnemies()
{
	return myEnemies;
}

void Room::EnterRoom(Player& player)
{

}


bool& Room::GetCleared()
{
	return myIsCleared;
}