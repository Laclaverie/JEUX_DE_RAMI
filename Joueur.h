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
	vector<carte*> choisirCarte();					// choisir une carte (afin de former une combinaison ou de la poser en d�fausse) 
	void afficherMain();							// afficher la main du joueur
	void ajouterCarte(carte* unecarte);				 // Le joueur pioche des cartes, il faut donc en ajouter dans sa main

	void piocherDansPioche(Pioche unePioche);		// Piocher dans la d�fausse ou dans le talon
	void setNom();									// Le joueur poss�de un nom
	void setScore(int score);						// Avoir en temps r�el le score du joueur --> Bof suis pas sur que �a serve
	void setPartieGagne() { partiesGagne_ += 1; }    // Pour savoir si le joueur a gagn� cette partie, et incr�menter le nombre total de parties gagn�es (partieGagne) --> On peut partir sur : on supprime cette fonction
	void setAbandon() { abandon_ = 1; }				// Malheuresement, le joueur abandonne --> � revoir, notamment avec MenuJeux
	
	string getNom() { return nom_; }					//R�cuperer le nom du joueur.
	int getScore() { return score_; }                  // R�cuperer le score du joueur.
	vector<carte*> getMain() { return main_; }       //R�cuperer la main du joueur
	int PartieGagne() {return partiesGagne_;}		// Combien de parties a gagn� notre joueur
	bool getAbandon() {return abandon_;}	       // Savoir si le joueur abandonne.
	// faire la fonction poserCarte (� la fin du tour)
private:
	string nom_;						//Nom du joueur
	int score_;						   // Score actuel	
	vector<carte*> main_;			 // Main du joueur
	int partiesGagne_;				// Nombre de parties gagn�es 
	bool abandon_;				   // Es ce qu'il abandonne ?

}; //Auteur Pierre Laclaverie



#endif