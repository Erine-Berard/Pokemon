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
	bool attaqueSpecial; // true si sp�cial 
	double precision;
	int puissance;
	int pp;

public:
	Attaques(std::string nom, std::string type, bool attaqueSpecial ,double precision, int puissance, int pp);
	~Attaques();

	int Calculerdegats(Pokemon pokemonAttaque, Pokemon pokemonDef);
	void Afficher();
};

#endif

