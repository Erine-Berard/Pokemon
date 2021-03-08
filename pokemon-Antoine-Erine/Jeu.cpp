#include "Jeu.h"
#include "Joueur.h"
#include "Pokemon.h"
#include "Attaques.h"

using namespace std;

void Jeu::Jouer(){

	vector <Attaques> attaques1;
	Attaques Charge("Charge", "Normal", 0, 1, 5, 4);
	Attaques TranchHerbe("TranchHerbe", "Plante", 1, 1, 10, 4);
	Attaques FouetLianes("FouetLianes", "Plante", 0, 0.95, 14, 3);
	Attaques Belier("Belier", "Normal", 0, 0.5, 25, 1);

	vector <Attaques> attaques2;
	Attaques Griffe("Griffe", "Normal", 0, 1, 5, 4);
	Attaques CrocsFeu("CrocsFeu", "Feu", 0, 0.95, 14, 3);
	Attaques Flammeche("Flammeche", "Feu", 1, 1, 10, 4);
	Attaques FeudEnfer("FeudEnfer", "Feu", 0, 0.5, 25, 1);

	vector <Attaques> attaques3;
	Attaques Ecume("Ecume", "Eau", 1, 1, 12, 3);
	Attaques PistoletaO("PistoletaO", "Eau", 1, 1, 10, 4);
	Attaques Hydrocanon("Hydrocanon", "Eau", 1, 0.5, 25, 1);
	Attaques Charge("Charge", "Normal", 0, 1, 5, 4);

	vector <Attaques> attaques4;
	Attaques Charge("Charge", "Normal", 0, 1, 5, 4);
	Attaques LanceSoleil("LanceSoleil", "Plante", 1, 0.5, 25, 1);
	Attaques FeuilleMagik("FeuilleMagik", "Plante", 1, 1, 10, 4);
	Attaques TranchHerbe("TranchHerbe", "Plante", 1, 1, 10, 4);

	vector <Attaques> attaques5;
	Attaques FlammeUltime("FlammesUltime", "Feu", 0, 0.5, 25, 1);
	Attaques RouedeFeu("RouedeFeu", "Feu", 1, 0.95, 14, 3);
	Attaques Griffe("Griffe", "Normal", 0, 1, 5, 4);
	Attaques Flammeche("Flammeche", "Feu", 1, 1, 10, 4);

	vector <Attaques> attaques6;
	Attaques Griffe("Griffe", "Normal", 0, 1, 5, 4);
	Attaques Morsure("Morsure", "Tenebre", 0, 0.95, 14, 3);
	Attaques SuperPuissance("SuperPuissance", "Combat", 0, 0.5, 25, 1);
	Attaques PistoletaO("PistoletaO", "Eau", 1, 1, 10, 4);

	vector <Attaques> attaques7;
	Attaques EcrasFace("EcrasFace", "Normal", 0, 1, 5, 4);
	Attaques VoldeVie("VoldeVie", "Plante", 1, 0.95, 14, 3);
	Attaques ViveAttaque("ViveAttaque", "Normal", 0, 1, 10, 4);
	Attaques TempeteVerte("TempeteVerte", "Plante", 1, 0.5, 25, 1);

	vector <Attaques> attaques8;
	Attaques BouteFeu("BouteFeu", "Feu", 1, 0.5, 25, 1);
	Attaques Flammeche("Flammeche", "Feu", 1, 1, 10, 4);
	Attaques ViveAttaque("ViveAttaque", "Normal", 0, 1, 10, 4);
	Attaques Griffe("Griffe", "Normal", 0, 1, 5, 4);

	vector <Attaques> attaques9;
	Attaques CoudBoue("CoudBoue", "Eau", 0, 0.95, 14, 3);
	Attaques Hydrocanon("Hydrocanon", "Eau", 1, 0.5, 25, 1);
	Attaques PistoletaO("PistoletaO", "Eau", 1, 1, 10, 4);
	Attaques Charge("Charge", "Normal", 0, 1, 5, 4);

	vector <string> type1;
	type1.push_back("Poison");
	type1.push_back("Plante");
	attaques1.push_back(Charge);
	attaques1.push_back(TranchHerbe);
	attaques1.push_back(FouetLianes);
	attaques1.push_back(Belier);
	Pokemon Bulbizarre("Bulbizarre", 300, type1, 45, 1, 49, 65, 49, 65, 45, attaques1, );

	vector <string> type2;
	type2.push_back("Feu");
	vector <Attaques> attaques2;
	attaques2.push_back(Griffe);
	attaques2.push_back(CrocsFeu);
	attaques2.push_back(Flammeche);
	attaques2.push_back(FeudEnfer);
	Pokemon Salameche("Salameche", 300, type2, 39, 1, 52, 60, 43, 60, 65, attaques2, );


	vector <string> type3;
	type3.push_back("Eau");
	vector <Attaques> attaques3;
	attaques3.push_back(Charge);
	attaques3.push_back(Ecume);
	attaques3.push_back(PistoletaO);
	attaques3.push_back(Hydrocanon);
	Pokemon Carapuce("Carapuce", 300, type3, 44, 1, 48, 50, 65, 64, 43, attaques3, );


	vector <string> type4;
	type4.push_back("Plante");
	vector <Attaques> attaques4;
	attaques4.push_back(Charge);
	attaques4.push_back(LanceSoleil);
	attaques4.push_back(TranchHerbe);
	attaques4.push_back(FeuilleMagik);
	Pokemon Germignion("Germignion", 300, type4, 45, 1, 49, 59, 65, 65, 45, attaques4, );


	vector <string> type5;
	type5.push_back("Feu");
	vector <Attaques> attaques5;
	attaques5.push_back(Charge);
	attaques5.push_back(RouedeFeu);
	attaques5.push_back(FlammeUltime);
	attaques5.push_back(Flammeche);
	Pokemon Hericendre("Hericendre", 300, type5, 39, 1, 52, 60, 43, 50, 65, attaques5, );


	vector <string> type6;
	type6.push_back("Eau");
	vector <Attaques> attaques6;
	attaques6.push_back(Griffe);
	attaques6.push_back(SuperPuissance);
	attaques6.push_back(PistoletaO);
	attaques6.push_back(Morsure);
	Pokemon Kaiminus("Kaiminus", 300, type6, 50, 1, 65, 44, 64, 48, 43, attaques6, );


	vector <string> type7;
	type7.push_back("Plante");
	vector <Attaques> attaques7;
	attaques7.push_back(EcrasFace);
	attaques7.push_back(TempeteVerte);
	attaques7.push_back(ViveAttaque);
	attaques7.push_back(VoldeVie);
	Pokemon Arcko("Arcko", 300, type7, 40, 1, 45, 64, 35, 55, 70, attaques7, );


	vector <string> type8;
	type8.push_back("Feu");
	vector <Attaques> attaques8;
	attaques8.push_back(Griffe);
	attaques8.push_back(BouteFeu);
	attaques8.push_back(ViveAttaque);
	attaques8.push_back(Flammeche);
	Pokemon Poussifeu("Poussifeu", 300, type8, 45, 1, 60, 70, 40, 50, 45, attaques8, );


	vector <string> type9;
	type9.push_back("Eau");
	vector <Attaques> attaques9;
	attaques9.push_back(Charge);
	attaques9.push_back(Hydrocanon);
	attaques9.push_back(PistoletaO);
	attaques9.push_back(CoudBoue);
	Pokemon Gobou("Gobou", 300, type9, 50, 1, 70, 50, 50, 50, 40, attaques9, );

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
	bool KO1 = false;
	bool KO2 = false;

	while ((KO1 = false) || (KO2 = false)) {

		cout << endl << endl << "---------- Manche 1 ----------" << endl;

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



		if (pokemon1.GetVitesse() >= pokemon2.GetVitesse()) {
			cout << endl << joueur1.GetNom() << " commence :" << endl
				<< "Choisis ton attaque :" << endl;
			Attaques attaque1 = joueur1.ChoisirAttaque(pokemon1);
			double degat = attaque1.Calculerdegats(pokemon1, pokemon2);
			double pv2 = pokemon2.GetPV();
			
			bool baie = false;
			cout << "Les degats infligé sont de " << degat << "pv, Joueur 2 voullez vous utiliser une baie ?[1/0]";
			cin >> baie;

			if (baie) {
				pokemon2.UtiliserObjet();
			}

			if (pv2 <= degat) {
				pokemon2.SetPV(0);
				KO2 = pokemon2.EstKO();
			}
			else {
				pokemon2.SetPV(pv2 - degat);
				KO2 = pokemon2.EstKO();
			}
			if (KO2) {
				break;
			}

			cout << endl << joueur2.GetNom() << " a toi de jouer" << endl
				<< "Choisis ton attaque :" << endl;
			Attaques attaque2 = joueur2.ChoisirAttaque(pokemon2);
			double degat = attaque2.Calculerdegats(pokemon2, pokemon1);
			double pv1 = pokemon1.GetPV();

			bool baie = false;
			cout << "Les degats infligé sont de " << degat << "pv, Joueur 1 voullez vous utiliser une baie ?[1/0]";
			cin >> baie;

			if (baie) {
				pokemon1.UtiliserObjet();
			}

			if (pv1 <= degat) {
				pokemon1.SetPV(0);
				KO1 = pokemon1.EstKO();
			}
			else {
				pokemon1.SetPV(pv1 - degat);
				KO1 = pokemon1.EstKO();
			}
			if (KO1) {
				break;
			}
		}
		else {
			cout << endl << joueur2.GetNom() << " commence :" << endl
				<< "Choisis ton attaque :" << endl;
			Attaques attaque2 = joueur2.ChoisirAttaque(pokemon2);
			double degat = attaque2.Calculerdegats(pokemon2, pokemon1);
			double pv1 = pokemon1.GetPV();

			bool baie = false;
			cout << "Les degats infligé sont de " << degat << "pv, Joueur 1 voullez vous utiliser une baie ?[1/0]";
			cin >> baie;

			if (baie) {
				pokemon1.UtiliserObjet();
			}

			if (pv1 <= degat) {
				pokemon1.SetPV(0);
				KO1 = pokemon1.EstKO();
			}
			else {
				pokemon1.SetPV(pv1 - degat);
				KO1 = pokemon2.EstKO();
			}
			if (KO1) {
				break;
			}

			cout << endl << joueur1.GetNom() << " a toi de jouer" << endl
				<< "Choisis ton attaque :" << endl;
			Attaques attaque1 = joueur1.ChoisirAttaque(pokemon2);
			double degat = attaque1.Calculerdegats(pokemon1, pokemon2);
			double pv2 = pokemon2.GetPV();

			bool baie = false;
			cout << "Les degats infligé sont de " << degat << "pv, Joueur 2 voullez vous utiliser une baie ?[1/0]";
			cin >> baie;

			if (baie) {
				pokemon2.UtiliserObjet();
			}

			if (pv1 <= degat) {
				pokemon2.SetPV(0);
				KO2 = pokemon2.EstKO();
			}
			else {
				pokemon2.SetPV(pv2 - degat);
				KO2 = pokemon2.EstKO();
			}
			if (KO2) {
				break;
			}
		}
	}
	
	

}





