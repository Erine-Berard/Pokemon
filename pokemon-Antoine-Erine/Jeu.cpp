#include "Jeu.h"
#include "Joueur.h"
#include "Pokemon.h"
#include "Attaques.h"
#include <iostream>

using namespace std;

Jeu::Jeu(){}
Jeu::~Jeu(){}

void Jeu::Jouer(){

	//creation des pokemons
	Objet Oran("Oran", "Restaure 15 PV", 15);

	vector <string> type1;
	type1.push_back("Plante");

	vector <string> type2;
	type2.push_back("Feu");

	vector <string> type3;
	type3.push_back("Eau");

	vector <Attaques> attaques1;
	vector <Attaques> attaques2;
	vector <Attaques> attaques3;
	vector <Attaques> attaques4;
	vector <Attaques> attaques5;
	vector <Attaques> attaques6;
	vector <Attaques> attaques7;
	vector <Attaques> attaques8;
	vector <Attaques> attaques9;

	Attaques Charge("Charge", "Normal", 0, 1, 5, 4);
	Attaques TranchHerbe("TranchHerbe", "Plante", 1, 1, 10, 4);
	Attaques FouetLianes("FouetLianes", "Plante", 0, 0.95, 14, 3);
	Attaques Belier("Belier", "Normal", 0, 0.5, 25, 1);
	Attaques Griffe("Griffe", "Normal", 0, 1, 5, 4);
	Attaques CrocsFeu("CrocsFeu", "Feu", 0, 0.95, 14, 3);
	Attaques Flammeche("Flammeche", "Feu", 1, 1, 10, 4);
	Attaques FeudEnfer("FeudEnfer", "Feu", 0, 0.5, 25, 1);
	Attaques Ecume("Ecume", "Eau", 1, 1, 12, 3);
	Attaques PistoletaO("PistoletaO", "Eau", 1, 1, 10, 4);
	Attaques Hydrocanon("Hydrocanon", "Eau", 1, 0.5, 25, 1);
	Attaques LanceSoleil("LanceSoleil", "Plante", 1, 0.5, 25, 1);
	Attaques FeuilleMagik("FeuilleMagik", "Plante", 1, 1, 10, 4);
	Attaques FlammeUltime("FlammesUltime", "Feu", 0, 0.5, 25, 1);
	Attaques RouedeFeu("RouedeFeu", "Feu", 1, 0.95, 14, 3);
	Attaques Morsure("Morsure", "Tenebre", 0, 0.95, 14, 3);
	Attaques SuperPuissance("SuperPuissance", "Combat", 0, 0.5, 25, 1);
	Attaques EcrasFace("EcrasFace", "Normal", 0, 1, 5, 4);
	Attaques VoldeVie("VoldeVie", "Plante", 1, 0.95, 14, 3);
	Attaques ViveAttaque("ViveAttaque", "Normal", 0, 1, 10, 4);
	Attaques TempeteVerte("TempeteVerte", "Plante", 1, 0.5, 25, 1);
	Attaques BouteFeu("BouteFeu", "Feu", 1, 0.5, 25, 1);
	Attaques CoudBoue("CoudBoue", "Eau", 0, 0.95, 14, 3);

	attaques1.push_back(Charge);
	attaques1.push_back(TranchHerbe);
	attaques1.push_back(FouetLianes);
	attaques1.push_back(Belier);
	Pokemon Bulbizarre("Bulbizarre", 300, type1, 45, 1, 49, 65, 49, 65, 45, attaques1, Oran);

	attaques2.push_back(Griffe);
	attaques2.push_back(CrocsFeu);
	attaques2.push_back(Flammeche);
	attaques2.push_back(FeudEnfer);
	Pokemon Salameche("Salameche", 300, type2, 39, 1, 52, 60, 43, 60, 65, attaques2, Oran);

	attaques3.push_back(Charge);
	attaques3.push_back(Ecume);
	attaques3.push_back(PistoletaO);
	attaques3.push_back(Hydrocanon);
	Pokemon Carapuce("Carapuce", 300, type3, 44, 1, 48, 50, 65, 64, 43, attaques3, Oran);

	attaques4.push_back(Charge);
	attaques4.push_back(LanceSoleil);
	attaques4.push_back(TranchHerbe);
	attaques4.push_back(FeuilleMagik);
	Pokemon Germignion("Germignion", 300, type1, 45, 1, 49, 59, 65, 65, 45, attaques4, Oran);

	attaques5.push_back(Charge);
	attaques5.push_back(RouedeFeu);
	attaques5.push_back(FlammeUltime);
	attaques5.push_back(Flammeche);
	Pokemon Hericendre("Hericendre", 300, type2, 39, 1, 52, 60, 43, 50, 65, attaques5, Oran);

	attaques6.push_back(Griffe);
	attaques6.push_back(SuperPuissance);
	attaques6.push_back(PistoletaO);
	attaques6.push_back(Morsure);
	Pokemon Kaiminus("Kaiminus", 300, type3, 50, 1, 65, 44, 64, 48, 43, attaques6, Oran);

	attaques7.push_back(EcrasFace);
	attaques7.push_back(TempeteVerte);
	attaques7.push_back(ViveAttaque);
	attaques7.push_back(VoldeVie);
	Pokemon Arcko("Arcko", 300, type1, 40, 1, 45, 64, 35, 55, 70, attaques7, Oran);

	attaques8.push_back(Griffe);
	attaques8.push_back(BouteFeu);
	attaques8.push_back(ViveAttaque);
	attaques8.push_back(Flammeche);
	Pokemon Poussifeu("Poussifeu", 300, type2, 45, 1, 60, 70, 40, 50, 45, attaques8, Oran);

	attaques9.push_back(Charge);
	attaques9.push_back(Hydrocanon);
	attaques9.push_back(PistoletaO);
	attaques9.push_back(CoudBoue);
	Pokemon Gobou("Gobou", 300, type3, 50, 1, 70, 50, 50, 50, 40, attaques9, Oran);



	// creation vecteur avec tout les pokemons
		vector <Pokemon> pokemons;
		pokemons.push_back(Bulbizarre);
		pokemons.push_back(Salameche);
		pokemons.push_back(Carapuce);
		pokemons.push_back(Germignion);
		pokemons.push_back(Hericendre);
		pokemons.push_back(Kaiminus);
		pokemons.push_back(Arcko);
		pokemons.push_back(Poussifeu);
		pokemons.push_back(Gobou);

	// creation des joueurs 
	string nom;

	cout << "Nom du joueur 1 : ";
	cin >> nom;
	Joueur joueur1 (nom, 1000);
		//attribution des pokemons 
			for (int i = 0; i < 3; i++) {
				Pokemon pokemon = joueur1.ChoisirPokemon(pokemons);
				joueur1.AjouterPokemon(pokemon);
			}
	
	cout << "Nom du joueur 2 : ";
	cin >> nom;
	Joueur joueur2 (nom, 1000);
		//attribution des pokemons 
			for (int i = 0; i < 3; i++) {
				Pokemon pokemon = joueur2.ChoisirPokemon(pokemons);
				joueur2.AjouterPokemon(pokemon);
			}

	vector <Joueur> joueur;
	joueur.push_back(joueur1);
	joueur.push_back(joueur2);
	this->joueur = joueur;

	int j;
	int k = 1;
	bool KO1 = false;
	bool KO2 = false;
	bool baie = false;
	bool utilisationBaie1 = false;
	bool utilisationBaie2 = false;


	do{
		cout << endl << endl << "---------- Manche " << k << " ----------" << endl;

		//Choix des pokemons
			cout << "Joueur 1 :" << endl << "    Choix de votre pokemon:" << endl;
			joueur1.AfficherPokemons();
			cout << "Donnez le numero du pokemon choisis : ";
			cin >> j;
			Pokemon pokemon1 = joueur1.RecupererPokemon(j - 1);

			cout << "Joueur 2 :" << endl << "    Choix de votre pokemon:" << endl;
			joueur2.AfficherPokemons();
			cout << "Donnez le numero du pokemon choisis : ";
			cin >> j;
			Pokemon pokemon2 = joueur2.RecupererPokemon(j - 1);
		
		//Combat manche 1
			while ((KO1 == false) || (KO2 == false)) {

				if (pokemon1.GetVitesse() >= pokemon2.GetVitesse()) {

					//joueur 1 joue
					cout << endl << joueur1.GetNom() << " a toi de jouer" << endl
							<< "Choisis ton attaque :" << endl;
						Attaques attaque1 = joueur1.ChoisirAttaque(pokemon1);
						long double degat = attaque1.Calculerdegats(pokemon1, pokemon2);
						double pv2 = pokemon2.GetPV();
						
						//utilisation de la baie
							if (!utilisationBaie2) {
								cout << "Les degats infligé sont de " << degat << "pv, Joueur 2 voullez vous utiliser une baie ?[1/0]";
								cin >> baie;

								if (baie) {
									pokemon2.UtiliserObjet();
									utilisationBaie2 = true;
								}
							}
						//Prise des degats et vérification du KO
							if (pv2 <= degat) {
								pokemon2.SetPV(0);
								KO2 = pokemon2.EstKO();
							}
							else {
								pokemon2.SetPV(pv2 - degat);
								KO2 = pokemon2.EstKO();
							}
							if (KO2) {
								joueur1.setNbVictoire(joueur1.GetNbVictoire()+1);
								break;
							}

					//joueur 2 joue
						cout << endl << joueur2.GetNom() << " a toi de jouer" << endl
							<< "Choisis ton attaque :" << endl;
						Attaques attaque2 = joueur2.ChoisirAttaque(pokemon2);
						degat = attaque2.Calculerdegats(pokemon2, pokemon1);
						double pv1 = pokemon1.GetPV();

						//utilisation de la baie
							if (!utilisationBaie1) {
								cout << "Les degats infligé sont de " << degat << "pv, Joueur 1 voullez vous utiliser une baie ?[1/0]";
								cin >> baie;

								if (baie) {
									pokemon1.UtiliserObjet();
									utilisationBaie1 = true;
								}
							}
						//prise des degats et vérification des KO
							if (pv1 <= degat) {
								pokemon1.SetPV(0);
								KO1 = pokemon1.EstKO();
							}
							else {
								pokemon1.SetPV(pv1 - degat);
								KO1 = pokemon1.EstKO();
							}
							if (KO1) {
								joueur2.setNbVictoire(joueur2.GetNbVictoire() + 1);
								break;
							}
				}
				else {
					//Joeur 2 joue
						cout << endl << joueur2.GetNom() << " a toi de jouer" << endl
							<< "Choisis ton attaque :" << endl;
						Attaques attaque2 = joueur2.ChoisirAttaque(pokemon2);
						long double degat = attaque2.Calculerdegats(pokemon2, pokemon1);
						double pv1 = pokemon1.GetPV();
						
						//utilisation baie
							if (!utilisationBaie1)
							cout << "Les degats infligé sont de " << degat << "pv, Joueur 1 voullez vous utiliser une baie ?[1/0]";
							cin >> baie;

							if (baie) {
								pokemon1.UtiliserObjet();
								utilisationBaie1 = true;
							}
						//prise de dégats et vérification des KO
							if (pv1 <= degat) {
								pokemon1.SetPV(0);
								KO1 = pokemon1.EstKO();
							}
							else {
								pokemon1.SetPV(pv1 - degat);
								KO1 = pokemon2.EstKO();
							}
							if (KO1) {
								joueur2.setNbVictoire(joueur2.GetNbVictoire() + 1);
								break;
							}

					//Joueur 1 joue
						cout << endl << joueur1.GetNom() << " a toi de jouer" << endl
							<< "Choisis ton attaque :" << endl;
						Attaques attaque1 = joueur1.ChoisirAttaque(pokemon2);
						degat = attaque1.Calculerdegats(pokemon1, pokemon2);
						double pv2 = pokemon2.GetPV();

						//utilisation baie
							if (!utilisationBaie2) {
								cout << "Les degats infligé sont de " << degat << "pv, Joueur 2 voullez vous utiliser une baie ?[1/0]";
								cin >> baie;
	
								if (baie) {
									pokemon2.UtiliserObjet();
									utilisationBaie2 = true;
								}
							}
						//prise des dégats vérification KO
							if (pv1 <= degat) {
								pokemon2.SetPV(0);
								KO2 = pokemon2.EstKO();
							}
							else {
								pokemon2.SetPV(pv2 - degat);
								KO2 = pokemon2.EstKO();
							}
							if (KO2) {
								joueur1.setNbVictoire(joueur1.GetNbVictoire() + 1);
							break;
				}
			}
		}
	}while ((joueur1.GetNbVictoire()<2)|| (joueur1.GetNbVictoire() < 2));
	
	if (joueur1.GetNbVictoire() == 2) {
		cout << endl << endl << "!!!!! " << joueur1.GetNom() << " félicitation tu as gagne !!!!!"<< endl << endl;
	}
}





