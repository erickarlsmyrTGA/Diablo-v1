#include "Door.h"

Door::Door()
{
	myAddress = nullptr;
	int temp = Utility::RandomNumberGenerator(0, 100);
	if (temp >= 20)
	{
		myIsLocked = true;
	}
	else
	{
		myIsLocked = false;
	}
}

Door::~Door()
{

}

Door* Door::GetAddress()
{
	return myAddress;
}

void Door::SetAddress(Door& aDoor)
{
	aDoor.myAddress = this;
}