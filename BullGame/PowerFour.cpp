#include "PowerFour.h"
#include <windows.h>
#include <iostream>

PowerFour::PowerFour()
{
	grille = std::vector<std::vector<char>>(LIGNES, std::vector<char>(COLONNES, ' '));
}

void PowerFour::afficherGrille() const
{
	system("cls");//donne l'insruction de clear la console
	// Parcours chaque ligne de la grille
	for (int i = 0; i < LIGNES; ++i)
	{
		// Parcours chaque colonne
		for (int j = 0; j < COLONNES; ++j)
		{
			// Affiche une cellule de la grille
			std::cout << "|" << grille[i][j] << " ";
		}
		std::cout << "|\n";  // Fin de la ligne
	}

	// Affiche la ligne de séparation en bas
	for (int j = 0; j < COLONNES; ++j)
	{
		std::cout << "---";
	}
	std::cout << "-\n"; // Fin de ligne de séparation
}
	//for (int i = 0; i < LIGNES; ++i)
	//{
	//	for (int j = 0; j < COLONNES; ++j)
	//	{
	//		std::cout << "|" << grille[i][j] << " ";
	//	}
	//	std::cout << "|\n";
	//}
	//std::cout <<"-----------------------------\n";
	//std::cout << "0 1 2 3 4 5 6 \n"; //Affiche les colonne

bool PowerFour::JouerCoup(int colonne, char joueur)
{
	if (colonne < 0 || colonne >= COLONNES) return false;

	for (int i = LIGNES - 1; i >= 0; --i)
	{
		if (grille[i][colonne] == ' ')
		{
			grille[i][colonne] = joueur;
			return true;
		}
	}
	return false; // Colonne pleine
}

bool PowerFour::verifierVictoire(char joueur) const
{
	for (int ligne = 0; ligne < LIGNES; ++ligne)
	{
		for (int colonne = 0; colonne < COLONNES; ++colonne)
		{
			if (grille[ligne][colonne] == joueur)
			{
				if (verifierLigne(ligne, colonne, joueur) ||
					verifierColonne(ligne, colonne, joueur) ||
					verifierDiagonaleDescendante(ligne, colonne, joueur) ||
					verifierDiagonaleMontante(ligne, colonne, joueur))
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool PowerFour::verifierLigne(int ligne, int colonne, char joueur) const
{
	if (colonne <= COLONNES - 4)
	{
		return grille[ligne][colonne] == joueur && grille[ligne][colonne + 1] == joueur &&
			grille[ligne][colonne + 2] == joueur && grille[ligne][colonne + 3] == joueur;
	}
	return false;
}

bool PowerFour::verifierColonne(int ligne, int colonne, char joueur) const
{
	if (ligne <= LIGNES - 4)
	{
		return grille[ligne][colonne] == joueur && grille[ligne + 1][colonne] == joueur &&
			grille[ligne + 2][colonne] == joueur && grille[ligne + 3][colonne] == joueur;
	}
	return false;
}

bool PowerFour::verifierDiagonaleDescendante(int ligne, int colonne, char joueur) const
{
	if (ligne <= LIGNES - 4 && colonne <= COLONNES - 4)
	{
		return grille[ligne][colonne] == joueur && grille[ligne + 1][colonne + 1] == joueur &&
			grille[ligne + 2][colonne + 2] == joueur && grille[ligne + 3][colonne + 3] == joueur;
	}
	return false;
}

bool PowerFour::verifierDiagonaleMontante(int ligne, int colonne, char joueur) const
{
	if (ligne >= 3 && colonne <= COLONNES - 4)
	{
		return grille[ligne][colonne] == joueur && grille[ligne - 1][colonne + 1] == joueur &&
			grille[ligne - 2][colonne + 2] == joueur && grille[ligne - 3][colonne + 3] == joueur;
	}
	return false;
}
