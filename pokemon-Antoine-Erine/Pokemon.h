#include <string>
#include <vector>
#include <iostream>


#ifndef __POKEMON__
#define __POKEMON__

#include "Objet.h"

class Objet; 

class Attaques;

class Pokemon {
private:
	std::string Nom;
	int Prix;
	std::vector <std::string> type;
	int PV;
	int Niveau;
	int Attaque;
	int Attaquespe;
	int Defense;
	int Defensespe;
	int Vitesse;
	std::vector <Attaques> VectorAttaques;
	Objet objet;

public: 
	Pokemon(std::string Nom, int Prix, std::vector <std::string > type, int PV, int Niveau, int Attaque, int Attaquespe, int Defense, int Defensespe, int Vitesse, std::vector <Attaques> VectorAttaques, Objet objet);
	~Pokemon();

	std::string GetNom();
	int GetPrix();
	std::vector <std::string> GetTypes();
	int GetPV();
	int GetNiveau();
	int GetAttaque();
	int GetAttaquespe();
	int GetDefense();
	int GetDefensespe();
	int GetVitesse();

	void SetPV(int pv);

	void AjouterAttaque(Attaques *attaques);
	void Attaquer(Pokemon& pokemon, Attaques attaques);
	void UtiliserObjet(Objet objet);
	bool EstKO();
	void AfficherAttaques();
	void Afficher(); 

};

#endif

