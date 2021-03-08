#ifndef __JEU__
#define __JEU__


#include <vector>
#include <iostream>
#include <string>

class Joueur;

class Jeu {
private:
	std::vector <Joueur> joueur;
public: 
	void Jouer();
};

#endif 
