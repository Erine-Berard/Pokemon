#include "Pokemon.h"
//#include "Objet.h"
#include "Attaques.h"

using namespace std;

Pokemon::Pokemon(string Nom, int Prix, vector <string> type, int PV, int Niveau, int Attaque, int Attaquespe, int Defense, int Defensespel, int Vitesse, vector <Attaques> VectorAttaques ,Objet objet)
	: Nom(Nom), Prix(Prix), type(type), PV(PV), Niveau(Niveau), Attaque(Attaque), Attaquespe(Attaquespe), Defense(Defense), Defensespe(Defensespe), Vitesse(Vitesse), VectorAttaques(VectorAttaques),objet(objet)
{
}

Pokemon::~Pokemon() {}

string Pokemon::GetNom(){
	return Nom;
}

int Pokemon::GetPrix(){
	return Prix;
}

vector<string> Pokemon::GetTypes(){
	return type;
}

int Pokemon::GetPV(){
	return PV;
}

int Pokemon::GetNiveau(){
	return Niveau;
}

int Pokemon::GetAttaque(){
	return Attaque;
}

int Pokemon::GetAttaquespe(){
	return Attaquespe;
}

int Pokemon::GetDefense(){
	return Defense;
}

int Pokemon::GetDefensespe(){
	return Defensespe;
}

int Pokemon::GetVitesse(){
	return Vitesse;
}

void Pokemon::SetPV(int pv){
	this->PV = pv;
	return; 
}



void Pokemon::AjouterAttaque(Attaques *attaques){
	this->VectorAttaques.push_back(*attaques);
	return;
}

void Pokemon::Attaquer(Pokemon& pokemon, Attaques attaques){
	int degats = attaques.Calculerdegats(*this, pokemon);

	if (pokemon.PV <= degats) {
		pokemon.PV = 0;
	}
	else {
		pokemon.PV -= degats;
	}

	return;
}

void Pokemon::UtiliserObjet(Objet objet){
	objet.Action(*this);
	return;
}

   
bool Pokemon::EstKO(){
	if (PV > 0) {
		return false;
	}
	else {
		return true;
	}	
}

void Pokemon::AfficherAttaques(){
	int tail (VectorAttaques.size());

	for (int i = 0; i < tail; ++i) {
		VectorAttaques[i].Afficher();
	}
	return;
}

void Pokemon::Afficher(){
	cout << "Information sur le pokemon " << Nom << " :" << endl
	    << "Son prix : " << Prix << endl
		<< "Son/ses type/s : ";

	int tail(type.size());
	for (int i = 0; i < tail; ++i) {
		cout << type[i] << ", ";
	}

	cout << endl << "Son nombre de PV : " << PV << endl
		<< "Son niveau : " << Niveau << endl
		<< "Sa valeur d'attaque : " << Attaque << endl
		<< "Sa valeur d'attaque special : " << Attaquespe << endl
		<< "Sa valeur de defense : " << Defense << endl
		<< "Sa valeur de defense special : " << Defensespe << endl
		<< "Sa vitesse d'attaque : " << Vitesse << endl
		<< "Ses attaques :" << endl; 

	this->AfficherAttaques();

	objet.Afficher(); 
	return;
}
