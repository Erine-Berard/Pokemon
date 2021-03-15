#include <string>
#include <vector>
#include <iostream>


#ifndef __ATTAQUES__
#define __ATTAQUES__

class Pokemon;

class Attaques {
private:
	std::string nom;
	std::string type;
	bool attaqueSpecial; // true si spécial 
	double precision;
	int puissance;
	int pp;

public:
	Attaques(std::string nom, std::string type, bool attaqueSpecial ,double precision, int puissance, int pp);
	~Attaques();

	void SetPP(int pp);
	int GetPP();

	long double Calculerdegats(Pokemon pokemonAttaque, Pokemon pokemonDef);
	void Afficher();
};

#endif

