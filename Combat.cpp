#include "Combat.h"

Combat::Combat()
{

}

Combat::~Combat()
{

}

void Combat::Encounter(Player& aPlayer, std::vector<Enemy>& someEnemies)
{
	std::cout << "\nCombat!\n\n";

	for (size_t i = 0; i < someEnemies.size(); i++)
	{
		std::cout << "Enemy #" << i + 1 << "\n";
		someEnemies[i].PrintStats();
	}
}