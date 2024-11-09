#include "PowerFour.h"
#include <iostream>

PowerFour::PowerFour()
{
	grille = std::vector<std::vector<char>>(ROWS, std::vector<char>(COLS, ' '));
}

void PowerFour::afficherGrille() const
{
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			std::cout << "|" << grille[i][j];
		}
	}
	std::cout << "0 1 2 3 4 5 6 \n"; //Affiche les colonne
}

bool PowerFour::placerJeton(int col, char jeton)
{
	if (col < 0 || col >= COLS)
	{
		std::cout << "Colonne Invalide. Choisissez une colonne entre 0 et 6.\n";
		return false;
	}
	for (int row = ROWS - 1; row >= 0; --row)
	{
		if (grille[row][col] == ' ')
		{
			grille[row][col] = jeton;
			return true;
		}
	}
	std::cout << "Colonne pleine. Choisissez une autre colonne.\n";
	return false;
}

bool PowerFour::verifierVictoire(char jeton) const
{
	//Verifie les lignes
	for (int row = 0; row < ROWS; ++row)
	{
		for (int col = 0; col <= COLS - 4; ++col)
		{
			if (grille[row][col] == jeton && grille[row][col + 1] == jeton && grille[row][col + 2] == jeton && grille[row][col + 3] == jeton)
			{
				return true;
			}
		}
	}
	// Verifie les colonnes
	for (int col = 0; col < COLS; ++col)
	{
		for (int row = 0; row <= ROWS - 4; ++row)
		{
			if (grille[row][col] == jeton && grille[row + 1][col] == jeton && grille[row + 2][col] == jeton && grille[row + 3][col] == jeton)
			{
				return true;
			}
		}
	}
	// Verifie les diagonales montantes
	for (int row = 3; row < ROWS; ++row)
	{
		for (int col = 0; row <= COLS - 4; ++row)
		{
			if (grille[row][col] == jeton && grille[row - 1][col + 1] == jeton && grille[row - 2][col + 2] == jeton && grille[row - 3][col + 3] == jeton)
			{
				return true;
			}
		}
	}
	return false;
}
