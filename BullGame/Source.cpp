#include <iostream>
#include <string> // Pour manipuler des chaine de caractères
#include "BullCow.h"
#include "PowerFour.h"

using namespace std;

bool playAgain = true;
string playerWord;

bool powerFour = true;

//Fonction pour l'introduction
void intro(int number_lettres) 
{
	// Changer l'intro pour dire montrer au joueur qui a le choix entre 2 jeu
	cout << "Bienvenue, a quel jeu voulez vous jouer ?\n";
	cout << "1 = BullGame\n";
	cout << "2 = POwerFour\n";

}

int choixJeu()
{
	int choix;
	cout << "Choississez un jeu (1 ou 2) :";
	cin >> choix;

	//Verifie si l'utilisateur a fait un chooix valide
	switch (choix)
	{
	case 1:
		cout << "Vous avez choisi BullGame.\n";
		break;
	case 2:
		cout << "Vous avez choisie POwerFour.\n";
		break;
	default:
		cout << "Votre choix et invalide. \n";
		choix = 0; // Signal une erreur
	}
	return choix;
}

int main()
{
	//Constante -> CAPS LOCK = convention de nommage avec majuscules
	constexpr int NUMBER_LETTRE = 4;
	
	//Affiche le menu de choix de jeu
	intro(NUMBER_LETTRE);
	int choix = choixJeu();

	//Verifie le choix du joueur
	if (choix == 1)
	{
		BullCow Game = BullCow();

		while (playAgain)
		{
			//Appel de la fonction d'introduction BullGame
			cout << "Bienvenue dans le jeu BullGame !" << endl;
			cout << "Pouvez-vous devinier le mot de " << NUMBER_LETTRE << "lettre ?" << endl;

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
			playAgain = Game.PlayAgain();
			playerWord = "";

		}
	}

	else if (choix == 2)
	{
		PowerFour Game;
		char joueur1 = 'X';
		char joueur2 = 'O';
		char jetonActuel = joueur1;
		bool jeuEnCours = true;

		while (jeuEnCours)
		{
			Game.afficherGrille(); //Affiche grille

			int col;
			cout << "joueur " << jetonActuel << ", choisissez une colonne (0-6) : ";
			cin >> col;

			if (Game.JouerCoup(col, jetonActuel))
			{
				if (Game.verifierVictoire(jetonActuel))
				{
					Game.afficherGrille();
					cout << "Le Joueur " << jetonActuel << " a gagné !\n";
					jeuEnCours = false;
				}
				else
				{
					jetonActuel = (jetonActuel == joueur1) ? joueur2 : joueur1;
				}
			}
		}
		
		cout << "Bienvenue dans le jeu PowerFour !" << endl;
		// Logique du jeu ...
	}

	cout << "Fin du jeu" << endl;
	return 0;

	// Find a solution to let player input his value - Ask for his word

	// Get the entiere expression, not the firts word

	// Check the lengh between my (master) word or "player word
}
