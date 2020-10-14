#include <iostream>
#include "Enemy.h"
#include "Utility.h"

Enemy::Enemy()
{
	int totalAttributePoints = 12;

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
	std::cout << "Strength: " << GetStrength() << "\n";
	std::cout << "Dexterity: " << GetDexterity() << "\n";
	std::cout << "Endurance: " << GetEndurance() << "\n";
	std::cout << "Attack: " << GetAttack() << "\n";
	std::cout << "Max HP: " << GetMaxHP() << "\n";
	std::cout << "Carrying Capacity: " << GetCarryingCapacity() << "\n";
	std::cout << "Defence: " << GetDefence() << "\n";
	std::cout << "Initiative: " << GetInitiative() << "\n\n";
}