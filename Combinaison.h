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
	void setCombinaison(vector<carte*> combi) { combi_ = combi; }           // On change la valeur du champ priv�
	vector<carte*> getCombinaison() { return combi_; }					// On r�ucp�re la combinaison
	void afficher();		// Afficher la combinaison --> J'ai enlev� le Const qui g�ne pour utiliser l'it�rateur
	void saisir();				// Rentrer les valeurs d'une combinaison pour poser des cartes
	carte* getDerniere();		// AVoir la derni�re carte de la combi pour l'ajouter � la d�fausse
	void demanderCarte(string nom, int nombre = 0);					//On demande les cartes qu'on veut poser
	carte* choisirCarte();											//On demande � l'utilisateur de choisir une carte

	bool isValide(vector<carte*> combinaison, int tour = 0);		//Premier tour notamment et abandon
	bool isBrelan(vector<carte*> combinaison);	   // y a t  il un brelan? --> ensuite changer la main du joueur, si ce n'est pas le cas, envoyer un message d'erreur 
	bool isSequence(vector<carte*> combinaison);		  // y a t il une suite? --> ensuite changer la main du joueur, si ce n'est pas le cas, envoyer un message d'erreur
	bool isCarre(vector<carte*> combinaison);		 // y a t  il un carr�? --> ensuite changer la main du joueur, si ce n'est pas le cas, envoyer un message d'erreur
};


#endif // !_COMBINAISON_


