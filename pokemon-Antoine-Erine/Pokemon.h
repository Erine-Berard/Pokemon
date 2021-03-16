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
	long double PV;
	int Niveau;
	long double Attaque;
	long double Attaquespe;
	long double Defense;
	long double Defensespe;
	int Vitesse;
	std::vector <Attaques> VectorAttaques;
	std::vector <Attaques*> VectorPtrAttaques;
	Objet objet;

public: 
	Pokemon(std::string Nom, int Prix, std::vector <std::string > type, long double PV, int Niveau, long double Attaque, long double Attaquespe, long double Defense, long double Defensespe, int Vitesse, std::vector <Attaques> VectorAttaques, Objet objet);
	~Pokemon();

	std::string GetNom();
	int GetPrix();
	std::vector <std::string> GetTypes();
	double GetPV();
	int GetNiveau();
	long double GetAttaque();
	long double GetAttaquespe();
	long double GetDefense();
	long double GetDefensespe();
	int GetVitesse();
	std::vector <Attaques> GetAttaques();
	std::vector <Attaques*> GetBisAttaques();


	void SetPV(double pv);

	void AjouterAttaque(Attaques attaques);
	void Attaquer(Pokemon& pokemon, Attaques attaques);
	void UtiliserObjet();
	bool EstKO();

	void Afficherbis();
	void AfficherAttaques();
	void Afficher(); 

};

#endif

