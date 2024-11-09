#pragma once
#include <iostream>
#include <string>
#include <vector>

class PowerFour
{
public:
	PowerFour();
	//Methodess
	void afficherGrille() const; 
	bool placerJeton(int col, char jeton);
	bool verifierVictoire(char jeton) const; 

private:
	static const int ROWS = 6; //Nombre de lignes
	static const int COLS = 7; // Nombre de colonnes
	std::vector<std::vector<char>> grille; // La grille du jeu
};

