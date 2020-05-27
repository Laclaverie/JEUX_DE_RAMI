#ifndef _Pioche_
#define _Pioche_

#include"Carte.h"
#include<vector>
#include <fstream>
#include <iostream>
#include <string>

class Pioche 
{
	vector<carte*> defausse_;
	vector<carte*> talon_;
	vector<carte*> carteposees;    // les cartes qui ont �t� pos�es (la deuxi�me solution est de les supprimer apres la pose, si elle n'est pas mise dans la d�fausse)


public:
	Pioche();
	carte* PiocherCartes();		// On pioche des cartes � chaque tour !
	void ajouterDefausse(carte* carte);				//Ajouter une carte � la d�fausse avant de finir son tour
	void afficherDefausse() const;				   //Afficher la carte que la joueur � ajouter � la d�fausse
	void setTalon(vector<carte*> talon);          // Au premier tour, il faut set le talon (voir si �a peut changer, notamment avec init deck)
	vector<carte*> getTalon() {return talon_;}					// On sait jamais, si on a envi de r�cup�rer l'ensemble des cartes dans le talon
	vector<carte*> getDefausse() { return defausse_; }

}; // Sarah Ben Barek & Pierre Laclaverie


#endif // !_Pioche_