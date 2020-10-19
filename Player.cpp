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

void Player::Attack(Enemy& anEnemy)
{

}

void Player::Hurt(int someDamage)
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
	std::cout << "\n[STR] " << GetStrength() << "\n";
	std::cout << "[DEX] " << GetDexterity() << "\n";
	std::cout << "[END] " << GetEndurance() << "\n";
	std::cout << "[ATT] " << GetAttack() << "\n";
	std::cout << "[MHP] " << GetMaxHP() << "\n";
	std::cout << "[CAR] " << GetCarryingCapacity() << "\n";
	std::cout << "[DEF] " << GetDefence() << "\n";
	std::cout << "[INI] " << GetInitiative() << "\n\n";
}