#include "Objet.h"
#include "Pokemon.h"

using namespace std;

Objet::Objet(std::string Nom, std::string Description, int RestaurationPV)
	:Nom(Nom), Description(Description), RestaurationPV(RestaurationPV)
{}

Objet::~Objet(){}

void Objet::Action(Pokemon &pokemon){
	int pv = pokemon.GetPV();
	pv += RestaurationPV;
	pokemon.SetPV(pv);
	return;
}

void Objet::Afficher(){
	cout << "La baie est :" << Nom << endl 
		<< Description << endl
		<< "PV rendu : " << RestaurationPV << endl;
	return;
}
