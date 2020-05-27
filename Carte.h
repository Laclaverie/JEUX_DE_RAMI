#ifndef _Carte_
#define _Carte_
#include <string>
#include<iostream>
using namespace std;


class carte
{
public:
	carte(string nom = "undefined", string motif = "Aucun motif");
	string getNom() { return nom_; }
	string getCouleur() { return couleur_; }
	string getMotif() { return motif_; }
	int getValeur() { return valeur_; }
	void afficher();						//Afficher une carte

private:
	string nom_;					   // Dame de coeur, Valet de Pique
	string couleur_;				  // rouge, noir
	string motif_;					 // trèfle, pique,carreau,coeur
	int valeur_;					// 1-2-3-...-13 (à voir si c'est utile )
	//Auteur Pierre Laclaverie

};

#endif