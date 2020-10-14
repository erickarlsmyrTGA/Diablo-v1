#include "Diablo.h"


int Utility::RandomNumberGenerator(int aMin, int aMax)
{
	std::random_device seedForSeed;
	std::mt19937 seed(seedForSeed());
	std::uniform_int_distribution<> randomNumber(aMin, aMax);
	return randomNumber(seed);
}

int Utility::GetPlayerInput(int aMin, int aMax)
{
	bool isValidInput = false;
	bool isInteger = false;
	int inputValue = 0;
	std::string input;

	while (isValidInput == false)
	{
		std::cin >> input;

		isInteger = CheckIfInputIsInteger(input);

		if (isInteger)
		{
			inputValue = stoi(input);
		}

		if (inputValue >= aMin && inputValue <= aMax)
		{
			isValidInput = true;
		}
		else
		{
			std::cout << "Please enter a value between " << aMin << " and " << aMax << "\n";
		}
	}

	return inputValue;
}

bool Utility::CheckIfInputIsInteger(std::string somePlayerInput)
{
	for (int i = 0; i < static_cast<int>(somePlayerInput.length()); i++)
	{
		if (isdigit(somePlayerInput[i]) == false)
		{
			return false;
		}
	}

	return true;
}