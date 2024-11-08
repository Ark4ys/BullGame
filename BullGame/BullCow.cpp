#include "BullCow.h"

bool BullCow::PlayAgain()
{

	std::cout << "Do you want to play again ? (yes/no): " << std::endl;
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
