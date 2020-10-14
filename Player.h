#pragma once
class Player
{
public:
	Player(int& someStr, int& someDex, int& someEnd);
	~Player();
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

