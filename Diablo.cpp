#include "Diablo.h"

int main()
{
	bool gameOver = false;

	while (!gameOver)
	{
		int strength = 5;
		int dexterity = 5;
		int endurance = 5;

		Player player(strength, dexterity, endurance);

		/*Room room;

		for (size_t i = 0; i < room.GetEnemies().size(); i++)
		{
			std::cout << "Enemy #" << i + 1 << ")\n";
			room.GetEnemies()[i].PrintStats();
		}*/

		//player.PrintStats();
		//system("pause");

		Dungeon dungeon;

		dungeon.GetRooms()[0].EnterRoom(player);

		for (size_t i = 0; i < dungeon.GetRooms().size(); i++)
		{
			std::cout << "Room #" << i + 1 << ") Number of enemies: " << dungeon.GetRooms()[i].GetEnemies().size() << "\n";
		}
	}
}