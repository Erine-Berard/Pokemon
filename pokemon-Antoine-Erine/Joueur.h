#ifndef __JOUEUR__
#define __JOUEUR__

#include <string>
#include <vector>
#include <iostream>

class Pokemon;

class Joueur {
private:
	std::string nom;
	int nbVictoire;
	int argent;
	std::vector <Pokemon> pokemon;

public:
	Joueur(std::string nom, int argent);
	~Joueur();

	void setNbVictoire(int nbVictoire);
	void setArgent(int argent);

	Pokemon ChoisirPokemon(std::vector <Pokemon> poke);
	void AjouterPokemon(Pokemon& poke);
	int ChoisirAttaque(Pokemon);
	Pokemon RecupererPokemon();
	void AfficherPokemons();

	void Afficher();

};

#endif// !__JOUEUR__ 

