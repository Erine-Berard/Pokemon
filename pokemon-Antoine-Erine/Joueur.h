#ifndef __JOUEUR__
#define __JOUEUR__

#include <string>
#include <vector>
#include <iostream>

class Pokemon;

class Attaques;

class Joueur {
private:
	std::string nom;
	int nbVictoire;
	int argent;
	std::vector <Pokemon> pokemon;

public:
	Joueur(std::string nom, int argent);
	~Joueur();

	std::string GetNom();
	int GetNbVictoire();
	Pokemon Getpokemon(int i);

	void setNbVictoire(int nbVictoire);
	void setArgent(int argent);

	void ChoisirPokemon(std::vector <Pokemon> poke);
	int AjouterPokemon(Pokemon poke);
	Attaques ChoisirAttaque(Pokemon);
	Pokemon RecupererPokemon(int i);
	void AfficherPokemons();

	void Afficher();

};

#endif// !__JOUEUR__ 

