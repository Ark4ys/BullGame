#include <iostream>
#include <string>

using namespace std;
void PrintIntro(); //Forward Declaration

void GetGuessAndPrint();//Declaration

int NumberOfTry = 5;

int main()// Entrée programme
{
	PrintIntro();
	// !! \\ Work only for the first word
	// Find a solution to let player input his value - Ask for his word
	
	for (int i = 0; i < NumberOfTry; i++)
	{
		GetGuessAndPrint();
	}

	// Get the entiere expression, not the firts word
	

	//Check the lengh between my (master) word or "player word

	cout << "fin" << endl;
	return 0;
}

//Definition de fonction
void PrintIntro() 
{

	constexpr int NUMBER_LETTRE = 4;

	cout << "Bienvenuee dans le jeu BullGame" << endl;
	cout << "Pouvez vous deviner le mot avec" << NUMBER_LETTRE;
	cout << "lettre" << endl;
	return;
}

//
void GetGuessAndPrint()
{
	string Guess = "";
	getline(cin, Guess); // Get inpot word player
	cout << Guess.length() << endl; //Print la longueur du mot
	cout << Guess << endl; // Print variable
	return;
}
