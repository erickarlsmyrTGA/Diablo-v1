#pragma once
#include <vector>
#include <iostream>
#include "Player.h"
#include "Enemy.h"

class Combat
{
public:
	Combat();
	~Combat();
	void Encounter(Player& aPlayer, std::vector<Enemy>& someEnemies);
};

