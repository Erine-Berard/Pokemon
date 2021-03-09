#include "Joueur.h"
#include "Pokemon.h"
#include "Attaques.h"

using namespace std;

Joueur::Joueur(std::string nom, int argent)
	: nom(nom), argent(argent) {
	this->nbVictoire = 0;
}

Joueur::~Joueur() {}

string Joueur::GetNom(){
	return nom;
}

int Joueur::GetNbVictoire(){
	return nbVictoire;
}

void Joueur::setNbVictoire(int nbVictoire) {
	this->nbVictoire = nbVictoire;
	return;
}

void Joueur::setArgent(int argent) {
	this->argent = argent;
	return;
}

Pokemon Joueur::ChoisirPokemon(vector <Pokemon> poke) {
	cout << endl << "Les pokemons proposer :" << endl;
	// Affiche tout les pokemons 
	int tail = poke.size();
	for (int i = 0; i < tail; i++) {
		cout << "Pokemon " << i + 1 << endl;
		pokemon[i].Afficher();
	}

	//choix du pokemon
	int num;
	cout << "Rentrez le numéro du pokemon voulut : ";
	cin >> num;

	return poke[num - 1];
}

void Joueur::AjouterPokemon(Pokemon& poke){
	for (int i = 2; i < 1; i++) {
		int prix = poke.GetPrix();
		if (prix > argent) {
			cout << endl << "Le pokemon est trop cher selectioner un autre !" << endl;
		}
		else {
			argent -= prix;
			pokemon.push_back(poke);
			i = -3;
		}
	}
	return;
}

Attaques Joueur::ChoisirAttaque(Pokemon poke){
	vector<Attaques> attaques = poke.GetAttaques();

	int tail = attaques.size();

	for (int i = 0; i < tail; i++) {
		cout << "Attaque "<< i+1 << " :" << endl;
		attaques[i].Afficher();
	}

	int num;
	cout << "Rentrez le numéro de l'attaque voulut : ";
	cin >> num;
	return attaques[num-1];
}

Pokemon Joueur::RecupererPokemon(int i){
	return pokemon[i];
}

void Joueur::AfficherPokemons() {
	for (int i = 0; i < 3; i++) {
		cout << "Pokemon " << i + 1 << " :" << endl;
		pokemon[i].Afficher();
	}
	return;
}

void Joueur::Afficher()
{
	cout << "Information sur le joueur " << nom << " :" << endl
		<< "Nombre de manche gagnee : " << nbVictoire << endl
		<< "Son argents : " << argent << " pokedollars" << endl
		<< "Les pokemon détenue : " << endl;

	for (int i = 0; i < 3; i++) {
		string nom = pokemon[i].GetNom();
		cout << "    - " << nom << endl;
	}
}

