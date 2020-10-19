#pragma once
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
private:
	int myStrength;
	int myDexterity;
	int myEndurance;
};

