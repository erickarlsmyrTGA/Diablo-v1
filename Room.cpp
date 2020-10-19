#include "Room.h"

Room::Room(const int anIndex)
{
	myIsCleared = false;

	myName = "Room #" + std::to_string(anIndex);

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

void Room::AddDoor(Door& aDoor)
{
	myDoors.push_back(aDoor);
}

std::vector<Enemy>& Room::GetEnemies()
{
	return myEnemies;
}

std::vector<Door>& Room::GetDoors()
{
	return myDoors;
}

std::string& Room::GetRoomName()
{
	return myName;
}

void Room::EnterRoom(Player& aPlayer, std::vector<Room>& someRooms)
{
	system("cls");
	PrintName();

	if (myIsCleared)
	{
		std::cout << "You have cleared this room already\n";
	}
	else
	{
		std::cout << "You see " << myEnemies.size() << " enemies in this room\n";
		Combat combat;
		combat.Encounter(aPlayer, myEnemies);
	}

	system("pause");

	UseDoor(aPlayer, someRooms);
}

void Room::UseDoor(Player& aPlayer, std::vector<Room>& someRooms)
{
	int doorToEnter = 1;
	auto doorAddress = myDoors[0].GetAddress();

	for (Room& room : someRooms)
	{
		for (Door& door : room.GetDoors())
		{
			if (doorAddress == door.GetAddress() && room.GetRoomName() != myName)
			{
				room.EnterRoom(aPlayer, someRooms);
			}
		}
	}
}

bool& Room::GetCleared()
{
	return myIsCleared;
}

void Room::PrintName()
{
	std::cout << myName << "\n\n";
}