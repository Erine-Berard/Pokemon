#ifndef __OBJET__
#define __OBJET__

#include <string>
#include <vector>
#include <iostream>

class Pokemon;

class Objet {
private:
	std::string Nom;
	std::string Description;
	int RestaurationPV;

public:
	Objet(std::string Nom, std::string Description, int RestaurationPV);
	~Objet();
	void Action(Pokemon &pokemon);
	void Afficher();

};
#endif
