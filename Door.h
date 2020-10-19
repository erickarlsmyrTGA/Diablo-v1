#pragma once
#include <iostream>
#include <string>
#include "Utility.h"

class Door
{
public:
	Door();
	~Door();
	Door* GetAddress();
	void SetAddress(Door& aDoor);
private:
	Door* myAddress;
	std::string myName;
	bool myIsLocked;
};

