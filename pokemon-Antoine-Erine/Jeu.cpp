#include "Jeu.h"
#include "Joueur.h"
#include "Pokemon.h"

using namespace std;

void Jeu::Jouer(){
	// creation des pokemon
	vector <Pokemon> pokemons;

	// creation des joueurs 
	string nom;

	cout << "Nom du joueur 1 : ";
	cin >> nom;
	Joueur joueur1 (nom, 1000);
		//attribution des pokemons 
			for (int i = 0; i < 3; i++) {
				Pokemon pokemon = joueur1.ChoisirPokemon(pokemons);
				joueur1.AjouterPokemon(pokemon);
			}
	
	cout << "Nom du joueur 2 : ";
	cin >> nom;
	Joueur joueur2 (nom, 1000);
		//attribution des pokemons 
			for (int i = 0; i < 3; i++) {
				Pokemon pokemon = joueur2.ChoisirPokemon(pokemons);
				joueur2.AjouterPokemon(pokemon);
			}
}
