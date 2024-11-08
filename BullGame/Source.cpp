//Permet de mettre dans la 
#include <iostream>
#include <string> // Pour manipuler des chaine de caractères
#include "BullCow.h"
using namespace std;

bool playAgain = true;
string playerWord;

//Fonction pour l'introduction
void intro(int number_lettres) 
{
	cout << "Bienvenue dans le jeu BullGame" << endl;
	cout << "Pouvez-vous deviner le mot avec" << number_lettres << "lettres ?" << endl;
}

int main()
{
	//Constante -> CAPS LOCK = convention de nommage avec majuscules
	constexpr int NUMBER_LETTRE = 4;
	
	BullCow game = BullCow();
	
	while (playAgain)
	{
		// Appel de la fonction d'introduction
		intro(NUMBER_LETTRE);

		//Variable pour stocker le mot du joueur
		

		// Demande au joueur de rentrer un mot
		cout << "Entrez un mot de " << NUMBER_LETTRE << "lettre :";
		cin >> playerWord; // LIre la ligne entièrement, pas juste le premier mot

		// Vérifier si la longueur du mot est correcte
		if (playerWord.length() == NUMBER_LETTRE)
		{
			cout << "Vous avez entré le mot :" << playerWord << endl;
		}
		else
		{
			cout << "Erreur : Le mot doit comporter exactement" << NUMBER_LETTRE << "lettres." << endl;
		}
		
		playAgain = game.PlayAgain();
		playerWord = "";

		//Definie la taille de la grille du PowerFour
		const int rows = 6;
		const int cols = 7;

	}

	cout << "Fin du jeu" << endl;
	return 0;

	// Demande au joueur si il veux rejouer



	// Find a solution to let player input his value - Ask for his word

	// Get the entiere expression, not the firts word

	// Check the lengh between my (master) word or "player word
}
int choice()
{
	int choice;
	cout << "Choice a Game\n"; // \n = retour de ligne
	cout << "1 - BullGame\n";
	cout << "2 - PowerFour\n";

	cout << "Choice: ";
	cin >> choice; // cout affiche le texte, cin attend que l'utilisateur tape un nombre appuie sur entrée et est alors stockée dans la variable

	switch (choice)
	{
	case 1:
		cout << "You picked 1\n";
		break;
	case 2 :
		cout << "You picked 2\n";
		break;
	default :
		cout << "Your choise is invalid. \n";
		choice = 0; // Signal une erreur
	}
	return choice;

}