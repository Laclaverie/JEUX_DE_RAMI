#ifndef _MENUJEUX_
#define _MENUJEUX_
#include<vector>
#include"Joueur.h"
#include<iostream>
#include"Pioche.h"
#include <fstream>
#include <string>
#include "Joueur.h"
#include"Menu.h"
using namespace std;

class MenuJeux : public Menu
{
	vector<Joueur> joueurs_;
	vector<OptionMenu> listeOption_;
	Combinaison combinaisonAposer_;
	Pioche piocheActuelle_;
	int tour_;
	int numerodujoueuractif_;

public:
	MenuJeux();
	int getNumeroJoueur() { return numerodujoueuractif_; }
	void executerOption(const string& nom, bool& fin,int numeroJoueur);
	void defOptionDeMenuAcceuil();
	void afficherMenu();
	void premierTour();				//Premier Tour, règles spéciales--> à finir
	//bool finTour();			// Fin du tour // Pour moi, finTour, il faudrait le mettre qd on demande au joueur ce qu'il veut faire  
								// et s'il faut juste passer son tour, ça annonce la fin du tour mais il doit piocher dans la défausse avant
	//bool finPartie();	  // Fin de la partie en cours  //Pour moi, le quitter correspond déjà à vouloir quitter la partie donc y mettre fin pour le moment
	//Joueur abandon();      // Abandon du joueur  
	void executer();
	void piocher(int joueur);			// On pioche.
	void poserCombi();   // On pose des combinaisons de cartes
	void setCombi(Combinaison unecombi) { combinaisonAposer_ = unecombi; } // poser des cartes
	void afficherJoueurs();
	void finTour();
	bool quitter();   //Quitter la partie et revenir à l'écran d'acceuil
};


#endif // !_MENUJEUX_