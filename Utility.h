#pragma once
#include <string>

class Utility
{
public:
	static void PrintOnColor(const std::string someText, const int aColor);
	static int RandomNumberGenerator(int aMin, int aMax);
	static int GetPlayerInput(int aMin, int aMax);
	static bool CheckIfInputIsInteger(std::string somePlayerInput);
};

