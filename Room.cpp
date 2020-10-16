#include "Room.h"

Room::Room()
{
	myIsCleared = false;

	int enemyCount = Utility::RandomNumberGenerator(1, 10);

	//std::cout << enemyCount << " enemies\n";

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
	if (myIsCleared)
	{
		system("cls");
		std::cout << "You have cleared this room already\n";
	}
	else
	{
		std::cout << "You see " << myEnemies.size() << " enemies in this room\n";
		Combat combat;
		combat.Encounter(player, myEnemies);
	}
}


bool& Room::GetCleared()
{
	return myIsCleared;
}