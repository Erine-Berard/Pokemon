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

Pokemon Joueur::Getpokemon(int i){
	return pokemon[i];
}

void Joueur::setNbVictoire(int nbVictoire) {
	this->nbVictoire = nbVictoire;
	return;
}

void Joueur::setArgent(int argent) {
	this->argent = argent;
	return;
}

void Joueur::ChoisirPokemon(vector <Pokemon> poke) {
	cout << endl << "Les pokemons proposer :" << endl;
	// Affiche tout les pokemons 
	for (int i = 0; i < poke.size(); i++) {
		cout << "     Pokemon " << i + 1 << endl;
		poke[i].Afficherbis();
	}

	//choix du pokemon
	int num;
	for (int i = 0; i < 3; i++) {
		int a;
		do {
			cout << "Rentrez le numero du pokemon voulut : ";
			cin >> num;
			num -= 1;
			Pokemon lala = poke[num];

			a = this->AjouterPokemon(poke[num]);
		} while (a == 0);
	}

	return;
}
//faire boucle while 

int Joueur::AjouterPokemon(Pokemon poke){

	int prix = poke.GetPrix();

	if (prix > argent) {
		cout << endl << "Le pokemon est trop cher selectione en un autre !" << endl;
		return 0;
	}
	else {
		argent -= prix;
		pokemon.push_back(poke);
		return 1;
	}
}

Attaques Joueur::ChoisirAttaque(Pokemon poke){
	vector<Attaques> attaques = poke.GetAttaques();

	int tail = attaques.size();

	for (int i = 0; i < tail; i++) {
		cout << "Attaque "<< i+1 << " :" << endl;
		attaques[i].Afficher();
	}

	int num;
	int pp;

	do {
		cout << "Rentrez le numéro de l'attaque voulut : ";
		cin >> num;	
		num -= 1;

		pp = attaques[num].GetPP();
		if (pp <= 0) {
			cout << "Vous pouvez pas l'utilser vous avez plus de PP" << endl;
		}
	} while (pp <= 0);

	attaques[num].SetPP(pp-1);

	return attaques[num];
}

Pokemon Joueur::RecupererPokemon(int i){
	return pokemon[i];
}

void Joueur::AfficherPokemons() {
	for (int i = 0; i < 3; i++) {
		cout << "Pokemon " << i + 1 << " :" << endl;
		cout << i; 
		Pokemon poke = pokemon[1];

		poke.Afficher();
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

