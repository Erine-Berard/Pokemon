#include "Attaques.h"
#include "Pokemon.h"

using namespace std;

Attaques::Attaques(string nom, std::string type, bool attaqueSpecial,double precision, int puissance, int pp)
	: nom(nom), type(type), attaqueSpecial(attaqueSpecial), precision (precision), puissance(puissance), pp(pp) {}

Attaques::~Attaques() {}

// précision !!!!

long double Attaques::Calculerdegats(Pokemon pokemonAttaque, Pokemon pokemonDef){
	long double PVperdu = 0 ;

	vector <string> type = pokemonAttaque.GetTypes();

	if (type.size() == 1) {

		string type1 = type[0];

		if (attaqueSpecial == false) {
			if (type1 == this->type) {
				PVperdu = ((((((pokemonAttaque.GetNiveau() * 0.4 + 2) * pokemonAttaque.GetAttaque() * puissance) / (pokemonDef.GetDefense() * 50)) + 2) * 1.5) / 100) * precision;
			}
			else {
				PVperdu = (((((pokemonAttaque.GetNiveau() * 0.4 + 2) * pokemonAttaque.GetAttaque() * puissance) / (pokemonDef.GetDefense() * 50)) + 2) / 100) * precision;
			}
		}
		else if (attaqueSpecial == true) {
			if (type1 == this->type) {
				PVperdu = ((((((pokemonAttaque.GetNiveau() * 0.4 + 2) * pokemonAttaque.GetAttaquespe() * puissance) / (pokemonDef.GetDefensespe() * 50)) + 2) * 1.5) / 100) * precision;
			}
			else {
				PVperdu = (((((pokemonAttaque.GetNiveau() * 0.4 + 2) * pokemonAttaque.GetAttaquespe() * puissance) / (pokemonDef.GetDefensespe() * 50)) + 2) / 100) * precision;
			}
		}
		else {
			cout << "Erreur dans la fonction Calculerdegats de Attaques " << endl;
			return -1;
		}

	}else if (type.size() == 2) {
		string type1 = type[0];
		string type2 = type[1];

		if (attaqueSpecial == false) {
			if ((type1 == this->type)||(type2 == this->type)){
				PVperdu = ((((((pokemonAttaque.GetNiveau() * 0.4 + 2) * pokemonAttaque.GetAttaque() * puissance) / (pokemonDef.GetDefense() * 50)) + 2) * 1.5) / 100) * precision;
			}
			else {
				PVperdu = (((((pokemonAttaque.GetNiveau() * 0.4 + 2) * pokemonAttaque.GetAttaque() * puissance) / (pokemonDef.GetDefense() * 50)) + 2) / 100) * precision;
			}
		}
		else if (attaqueSpecial == true) {
			if ((type1 == this->type) || (type2 == this->type)) {
				PVperdu = ((((((pokemonAttaque.GetNiveau() * 0.4 + 2) * pokemonAttaque.GetAttaquespe() * puissance) / (pokemonDef.GetDefensespe() * 50)) + 2) * 1.5) / 100) * precision;
			}
			else {
				PVperdu = (((((pokemonAttaque.GetNiveau() * 0.4 + 2) * pokemonAttaque.GetAttaquespe() * puissance) / (pokemonDef.GetDefensespe() * 50)) + 2) / 100) * precision;
			}
		}
		else {
			cout << "Erreur dans la fonction Calculerdegats de Attaques " << endl;
			return -1;
		}

	}else {
		cout << endl << endl<< "Erreur dans le type du pokemon, arretez le programe !" << endl << endl;
		return -1;
	}

	return PVperdu;
}

void Attaques::Afficher(){
	cout << "       Son nom : " << nom << endl
		<< "           Son Type : " << type << endl
		<< "           Sa categorie d'Attaque : ";
	
	if (attaqueSpecial) {
		cout << "Special" << endl;
	}
	else {
		cout << "Physique" << endl;
	}
		
	cout << "           Sa puissance : " << puissance << endl
		<< "           Nombre d'utilisatione encore possible : " << pp << endl << endl;

	return;
}

