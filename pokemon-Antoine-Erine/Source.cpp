#include "Jeu.h"


#include <vector>
#include <iostream>



using namespace std;

// type : feu, eau, normal, plante, electrik, glace, combat, poison, sol, vol, psy, insecte, roche, spectre, dragon, tenebres, acier

int main() {

	bool jouer = false;

	do {
		Jeu partie;
		partie.Jouer();

		
		cout << endl << endl << "Voulez vous rejouer ? [1/0]";
		cin >> jouer;
		cout << endl << endl;
	} while (jouer);

}