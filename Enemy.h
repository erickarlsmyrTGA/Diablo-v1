#pragma once
#include <iostream>
#include "Utility.h"
#include "Player.h"

class Enemy
{
public:
	Enemy();
	Enemy(int someInitiative);
	~Enemy();
	int& GetStrength();
	int& GetDexterity();
	int& GetEndurance();
	int GetAttack();
	int GetMaxHP();
	int GetCarryingCapacity();
	int GetDefence();
	int GetInitiative();
	void PrintStats();
	void Attack(Player& aPlayer);
	void Hurt(int someDamage);
private:
	int myStrength;
	int myDexterity;
	int myEndurance;
};

