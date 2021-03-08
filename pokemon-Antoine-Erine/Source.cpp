#include "Pokemon.h"
S

#include <vector>
#include <iostream>



using namespace std;

// type : feu, eau, normal, plante, electrik, glace, combat, poison, sol, vol, psy, insecte, roche, spectre, dragon, tenebres, acier

int main() {



	vector <string> type;
	type.push_back("eau");
	type.push_back("feu");

	int tail = type.size();

	cout << tail << endl << type[0] << endl << type[1];
}