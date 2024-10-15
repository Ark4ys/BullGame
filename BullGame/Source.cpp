//Permet de mettre dans la 
#include <iostream>
#include <string> // Pour manipuler des chaine de caractères
using namespace std;

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

	// Appel de la fonction d'introduction
	intro(NUMBER_LETTRE);

	//Variable pour stocker le mot du joueur
	string playerWord;

	// Demande au joueur de rentrer un mot
	cout << "Entrez un mot de " << NUMBER_LETTRE << "lettre :";
	getline(cin, playerWord); // LIre la ligne entièrement, pas juste le premier mot

	// Vérifier si la longueur du mot est correcte
	if (playerWord.length() == NUMBER_LETTRE) 
	{
		cout << "Vous avez entré le mot :" << playerWord << endl;
	}
	else
	{
		cout << "Erreur : Le mot doit comporter exactement" << NUMBER_LETTRE << "lettres." << endl;
	}

	cout << "Fin du jeu" << endl;
	return 0;


	// Find a solution to let player input his value - Ask for his word

	// Get the entiere expression, not the firts word

	// Check the lengh between my (master) word or "player word
}
