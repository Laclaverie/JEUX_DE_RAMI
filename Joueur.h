#ifndef _JOUEUR_
#define _JOUEUR_
#include"combinaison.h"
#include"jeux.h"
#include "Pioche.h"
using namespace std;
class deckRami;
class Joueur
{
public:
	Joueur( string nom= "Undefined",int score=0,int partieGagne =0,bool abandon =0);
	~Joueur();
	vector<carte*> choisirCarte();					// choisir une carte (afin de former une combinaison ou de la poser en défausse) 
	void afficherMain();							// afficher la main du joueur
	void ajouterCarte(carte* unecarte);				 // Le joueur pioche des cartes, il faut donc en ajouter dans sa main

	void piocherDansPioche(Pioche unePioche);		// Piocher dans la défausse ou dans le talon
	void setNom();									// Le joueur possède un nom
	void setScore(int score);						// Avoir en temps réel le score du joueur --> Bof suis pas sur que ça serve
	void setPartieGagne() { partiesGagne_ += 1; }    // Pour savoir si le joueur a gagné cette partie, et incrémenter le nombre total de parties gagnées (partieGagne) --> On peut partir sur : on supprime cette fonction
	void setAbandon() { abandon_ = 1; }				// Malheuresement, le joueur abandonne --> à revoir, notamment avec MenuJeux
	
	string getNom() { return nom_; }					//Récuperer le nom du joueur.
	int getScore() { return score_; }                  // Récuperer le score du joueur.
	vector<carte*> getMain() { return main_; }       //Récuperer la main du joueur
	int PartieGagne() {return partiesGagne_;}		// Combien de parties a gagné notre joueur
	bool getAbandon() {return abandon_;}	       // Savoir si le joueur abandonne.
	// faire la fonction poserCarte (à la fin du tour)
private:
	string nom_;						//Nom du joueur
	int score_;						   // Score actuel	
	vector<carte*> main_;			 // Main du joueur
	int partiesGagne_;				// Nombre de parties gagnées 
	bool abandon_;				   // Es ce qu'il abandonne ?

}; //Auteur Pierre Laclaverie



#endif