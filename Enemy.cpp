#include <iostream>
#include "Enemy.h"
#include "Utility.h"

Enemy::Enemy()
{
	int totalAttributePoints = 14;

	myStrength = Utility::RandomNumberGenerator(1, totalAttributePoints / 3);
	totalAttributePoints -= myStrength;
	myDexterity = Utility::RandomNumberGenerator(1, totalAttributePoints / 2);
	totalAttributePoints -= myDexterity;
	myEndurance = Utility::RandomNumberGenerator(1, totalAttributePoints);
}

Enemy::~Enemy()
{

}

int& Enemy::GetStrength()
{
	return myStrength;
}

int& Enemy::GetDexterity()
{
	return myDexterity;
}

int& Enemy::GetEndurance()
{
	return myEndurance;
}

int Enemy::GetAttack()
{
	return myStrength * myDexterity;
}

int Enemy::GetMaxHP()
{
	return myEndurance * 4 + myStrength * 6 + myDexterity * 3;
}

int Enemy::GetCarryingCapacity()
{
	return myStrength + myDexterity / 3;
}

int Enemy::GetDefence()
{
	return myEndurance + myDexterity;
}

int Enemy::GetInitiative()
{
	if (myStrength > myDexterity)
	{
		return myEndurance + (myStrength * myEndurance / myDexterity);
	}
	else if (myDexterity > myStrength)
	{
		return myEndurance + (myDexterity * myEndurance / myStrength);
	}
	else
	{
		return myEndurance + (myStrength * myEndurance / myStrength);
	}
}

void Enemy::PrintStats()
{
	std::cout << "[STR] " << GetStrength() << "\n";
	std::cout << "[DEX] " << GetDexterity() << "\n";
	std::cout << "[END] " << GetEndurance() << "\n";
	std::cout << "[ATT] " << GetAttack() << "\n";
	std::cout << "[MHP] " << GetMaxHP() << "\n";
	std::cout << "[CAR] " << GetCarryingCapacity() << "\n";
	std::cout << "[DEF] " << GetDefence() << "\n";
	std::cout << "[INI] " << GetInitiative() << "\n\n";
}