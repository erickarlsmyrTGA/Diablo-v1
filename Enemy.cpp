#include "Enemy.h"

Enemy::Enemy()
{
	int maxAttributePoints = 4;

	myStrength = Utility::RandomNumberGenerator(1, maxAttributePoints);
	myDexterity = Utility::RandomNumberGenerator(1, maxAttributePoints);
	myEndurance = Utility::RandomNumberGenerator(1, maxAttributePoints);
}

Enemy::Enemy(int someValueToChangeSignature)
{
	myStrength = 0 * someValueToChangeSignature;
	myDexterity = 0 * someValueToChangeSignature;
	myEndurance = 0 * someValueToChangeSignature;
}

Enemy::~Enemy()
{

}

void Enemy::Attack(Player& aPlayer)
{

}

void Enemy::Hurt(int someDamage)
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
	if ((myStrength || myDexterity || myEndurance) != 0)
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
	else
	{
		return 0;
	}
}

void Enemy::PrintStats()
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