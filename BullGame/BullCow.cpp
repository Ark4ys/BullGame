#include "BullCow.h"
#include <iostream>

bool BullCow::PlayAgain()
{

	std::cout << "Voules-vous rejouer ? (yes/no): " << std::endl;
	std::string answer;
	std::cin >> answer;

	//Condition de relance
	if (answer == "yes")
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
