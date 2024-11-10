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
	bool JouerCoup(int col, char jeton);
	bool verifierVictoire(char jeton) const; 

private:
	static const int LIGNES = 6; //Nombre de lignes
	static const int COLONNES = 7; // Nombre de colonnes
	std::vector<std::vector<char>> grille; // La grille du jeu
	bool verifierLigne(int ligne, int colonne, char joueur) const;
	bool verifierColonne(int lign, int colonne, char joueur) const;
	bool verifierDiagonaleDescendante(int ligne, int colone, char joueur) const;
	bool verifierDiagonaleMontante(int ligne, int colone, char joueur) const;
};


