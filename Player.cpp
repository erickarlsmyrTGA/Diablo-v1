#include <iostream>
#include "Player.h"


Player::Player(int& someStr, int& someDex, int& someEnd)
{
	myStrength = someStr;
	myDexterity = someDex;
	myEndurance = someEnd;
}

Player::~Player()
{

}

int& Player::GetStrength()
{
	return myStrength;
}

int& Player::GetDexterity()
{
	return myDexterity;
}

int& Player::GetEndurance()
{
	return myEndurance;
}

int Player::GetAttack()
{
	return myStrength * myDexterity;
}

int Player::GetMaxHP()
{
	return myEndurance * 4 + myStrength * 6 + myDexterity * 3;
}

int Player::GetCarryingCapacity()
{
	return myStrength + myDexterity / 3;
}

int Player::GetDefence()
{
	return myEndurance + myDexterity;
}

int Player::GetInitiative()
{
	if (myStrength > myDexterity)
	{
		return myEndurance + myStrength * myEndurance / myDexterity;
	}
	else if (myDexterity > myStrength)
	{
		return myEndurance + myDexterity * myEndurance / myStrength;
	}
	else
	{
		return myEndurance + myStrength * myEndurance / myStrength;
	}
}

void Player::PrintStats()
{
	std::cout << "Strength: "			<< GetStrength() << "\n";
	std::cout << "Dexterity: "			<< GetDexterity() << "\n";
	std::cout << "Endurance: "			<< GetEndurance() << "\n";
	std::cout << "Attack: "				<< GetAttack() << "\n";
	std::cout << "Max HP: "				<< GetMaxHP() << "\n";
	std::cout << "Carrying Capacity: "	<< GetCarryingCapacity() << "\n";
	std::cout << "Defence: "			<< GetDefence() << "\n";
	std::cout << "Initiative: "			<< GetInitiative() << "\n";
}