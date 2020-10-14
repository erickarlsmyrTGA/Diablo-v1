#include "Diablo.h"

int main()
{
	int strength = 5;
	int dexterity = 5;
	int endurance = 5;

	Player player(strength, dexterity, endurance);

	Room room;

	for (size_t i = 0; i < room.GetEnemies().size(); i++)
	{
		std::cout << "Enemy #" << i + 1 << ")\n";
		room.GetEnemies()[i].PrintStats();
	}

	//player.PrintStats();

	system("pause");

	Dungeon newDungeon;

	for (size_t i = 0; i < newDungeon.GetRooms().size(); i++)
	{
		std::cout << "Room #" << i+1 << ") " << newDungeon.GetRooms()[i].GetCleared() << "\n";
	}
}