#ifndef __JEUX__
#define __JEUX__
#include"Carte.h"
#include<ctime>
#include<cstdlib>
#include <random>
#include <algorithm>
#include<vector>
using namespace std;
//Ici on va mettre en place les éléments de jeux et l'aide pour "comment jouer"
class Joueur;
class deckRami 
{
public:
	~deckRami();
	void initDeck();                                                                      // Initialisation du deck, pour qu'on en ai un 
	void melangerDeck();												 // On doit mélanger les cartes quand même 
	int getTaille() { return deck_.size(); }											// Toujours utile de l'avoir
	void ajouterCartes(carte* carte);									  // Se sera plus facile que de taper 54 classes cartes à la main, et si on veut rajouter des cartes car oubli, c'est facile.
	void afficherDeck();												// Utiliser le afficher de cartes.
	string getNom() { return nom_; }
	void setMain(Joueur joueur1, Joueur joueur2);
	vector<carte*> getDeck() { return deck_; }
private :
	string nom_;														//jeux de rami
	vector<carte*>  deck_;
};


#endif // !_JEUX_