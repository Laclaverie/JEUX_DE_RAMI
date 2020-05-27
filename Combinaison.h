#ifndef _COMBINAISON_
#define _COMBINAISON_
#include <iostream>
#include"Carte.h"
#include<vector>
class Combinaison 
{
	vector<carte*> combi_;

public:
	Combinaison();      // Constructeur 
	~Combinaison();				// Destructeur 
	void setCombinaison(vector<carte*> combi) { combi_ = combi; }           // On change la valeur du champ privé
	vector<carte*> getCombinaison() { return combi_; }					// On réucpère la combinaison
	void afficher();		// Afficher la combinaison --> J'ai enlevé le Const qui gêne pour utiliser l'itérateur
	void saisir();				// Rentrer les valeurs d'une combinaison pour poser des cartes
	carte* getDerniere();		// AVoir la dernière carte de la combi pour l'ajouter à la défausse
	void demanderCarte(string nom, int nombre = 0);					//On demande les cartes qu'on veut poser
	carte* choisirCarte();											//On demande à l'utilisateur de choisir une carte

	bool isValide(vector<carte*> combinaison, int tour = 0);		//Premier tour notamment et abandon
	bool isBrelan(vector<carte*> combinaison);	   // y a t  il un brelan? --> ensuite changer la main du joueur, si ce n'est pas le cas, envoyer un message d'erreur 
	bool isSequence(vector<carte*> combinaison);		  // y a t il une suite? --> ensuite changer la main du joueur, si ce n'est pas le cas, envoyer un message d'erreur
	bool isCarre(vector<carte*> combinaison);		 // y a t  il un carré? --> ensuite changer la main du joueur, si ce n'est pas le cas, envoyer un message d'erreur
};


#endif // !_COMBINAISON_


