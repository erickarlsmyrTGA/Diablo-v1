#include "Combat.h"

Combat::Combat()
{
	myPlayerTurnOrderSet = false;
}

Combat::~Combat()
{

}

void Combat::Encounter(Player& aPlayer, std::vector<Enemy>& someEnemies)
{
	std::cout << "\n[COMBAT]\n\n";

	SortEnemiesByInitiative(someEnemies);

	SetTurnOrder(aPlayer, someEnemies);
	
	PrintTurnOrder(aPlayer);



	//system("pause");
}

void Combat::SortEnemiesByInitiative(std::vector<Enemy>& someEnemies)
{
	std::sort(someEnemies.begin(), someEnemies.end(), [](Enemy& lhs, Enemy& rhs)
		{
			return lhs.GetInitiative() > rhs.GetInitiative();
		});
}

void Combat::PrintTurnOrder(Player& aPlayer)
{
	bool playerPrinted = false;
	std::cout << "[TURN ORDER]\n\n";
	for (size_t i = 0; i < myTurnOrder.size(); i++)
	{
		std::cout << "[" << (i + 1) << "] ";
		if (myTurnOrder[i].GetInitiative() == 0)
		{
			std::cout << "Player \t[INI] " << aPlayer.GetInitiative() << "\n";
			playerPrinted = true;
		}
		else if (myTurnOrder[i].GetInitiative() != 0)
		{
			if (playerPrinted)
			{
				std::cout << "Enemy #" << i << " \t[INI] " << myTurnOrder[i].GetInitiative() << "\n";
			}
			else
			{
				std::cout << "Enemy #" << i + 1 << " \t[INI] " << myTurnOrder[i].GetInitiative() << "\n";
			}
		}
	}
}

void Combat::SetTurnOrder(Player& aPlayer, std::vector<Enemy>& someEnemies)
{
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
		}
	}
}