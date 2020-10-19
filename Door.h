#pragma once
#include <iostream>
#include <string>

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
};

