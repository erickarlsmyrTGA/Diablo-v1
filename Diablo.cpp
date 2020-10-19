#include "Diablo.h"

void GenerateDungeon(std::vector<Room>& someRooms, int anAmount, std::vector<Door>& someDoors, int anAmountOfDoors);

int main()
{
	std::vector<Room> rooms;
	std::vector<Door> doors;

	bool gameOver = false;

	while (!gameOver)
	{
		int strength = 5;
		int dexterity = 5;
		int endurance = 5;

		Player player(strength, dexterity, endurance);

		GenerateDungeon(rooms, 7, doors, 8);

		while (true)
		{
			rooms[0].EnterRoom(player, rooms);
		}

		system("pause");
	}
}

void GenerateDungeon(std::vector<Room>& someRooms, int anAmountOfRooms, std::vector<Door>& someDoors, int anAmountOfDoors)
{
	for (size_t i = 0; i < anAmountOfRooms + 1; i++)
	{
		Room room((i + 1));
		someRooms.push_back(room);
	}

	for (size_t i = 0; i < anAmountOfDoors + 1; i++)
	{
		Door door;
		someDoors.push_back(door);
	}

	for (Door& door : someDoors)
	{
		door.SetAddress(door);
	}

	// add the doors to the rooms
	someRooms[0].AddDoor(someDoors[0]);

	someRooms[1].AddDoor(someDoors[0]);
	someRooms[1].AddDoor(someDoors[1]);
	someRooms[1].AddDoor(someDoors[2]);
	someRooms[1].AddDoor(someDoors[3]);

	someRooms[2].AddDoor(someDoors[1]);
	someRooms[2].AddDoor(someDoors[5]);

	someRooms[3].AddDoor(someDoors[3]);
	someRooms[3].AddDoor(someDoors[4]);

	someRooms[4].AddDoor(someDoors[2]);

	someRooms[5].AddDoor(someDoors[4]);
	someRooms[5].AddDoor(someDoors[6]);
	someRooms[5].AddDoor(someDoors[7]);

	someRooms[6].AddDoor(someDoors[5]);
	someRooms[6].AddDoor(someDoors[6]);

	someRooms[7].AddDoor(someDoors[7]);

	/*for (Room& room : someRooms)
	{
		std::cout << room.GetRoomName() << "\n";
		for (Door& door : room.GetDoors())
		{
			std::cout << door.GetAddress() << "\n";
		}
	}

	system("pause");*/
}