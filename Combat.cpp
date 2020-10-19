#include "Combat.h"
#include <algorithm>


Combat::Combat()
{
	myPlayerTurnOrderSet = false;
}

Combat::~Combat()
{

}

void Combat::Encounter(Player& aPlayer, std::vector<Enemy>& someEnemies)
{
	std::cout << "\nCombat!\n\n";

	SortEnemiesByInitiative(someEnemies);

	for (size_t i = 0; i < someEnemies.size(); i++)
	{
		if (aPlayer.GetInitiative() >= someEnemies[i].GetInitiative() && myPlayerTurnOrderSet == false)
		{
			Enemy enemy(69);
			myTurnOrder.push_back(enemy);
			myPlayerTurnOrderSet = true;
			i--;
		}
		else
		{
			myTurnOrder.push_back(someEnemies[i]);
			//std::cout << "Enemy #" << i + 1 << " [INI] " << someEnemies[i].GetInitiative() << "\n";
		}
	}

	bool playerPrinted = false;

	std::cout << myTurnOrder.size() << "\n";

	for (size_t i = 0; i < myTurnOrder.size(); i++)
	{
		if (myTurnOrder[i].GetInitiative() == 0)
		{
			std::cout << "Player [INI] " << aPlayer.GetInitiative() << "\n";
			playerPrinted = true;
		}
		else if (myTurnOrder[i].GetInitiative() != 0)
		{
			if (playerPrinted)
			{
				std::cout << "Enemy #" << i << " [INI] " << myTurnOrder[i].GetInitiative() << "\n";
			}
			else
			{
				std::cout << "Enemy #" << i + 1 << " [INI] " << myTurnOrder[i].GetInitiative() << "\n";
			}
		}
	}

	system("pause");

	for (size_t i = 0; i < someEnemies.size(); i++)
	{
		std::cout << "Enemy #" << i + 1 << "\n";
		someEnemies[i].PrintStats();
	}
}

void Combat::SortEnemiesByInitiative(std::vector<Enemy>& someEnemies)
{
	std::sort(someEnemies.begin(), someEnemies.end(), [](Enemy& lhs, Enemy& rhs)
		{
			return lhs.GetInitiative() > rhs.GetInitiative();
		});
}