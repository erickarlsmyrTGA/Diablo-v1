#include "Door.h"

Door::Door()
{
	myAddress = nullptr;
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
	//myAddressAsString = ""+aDoorAddress;
	//aDoor.myAddressAsString = std::to_string(myAddress);
}