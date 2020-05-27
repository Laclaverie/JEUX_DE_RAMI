#ifndef _MENU_
#define _MENU_
#include<iostream>
#include "Joueur.h"
#include "Pioche.h"
#include <fstream>
using namespace std;

class OptionMenu
{
    string nom_;                                            // Par exemple : Nouvelle Partie, nombre de parties gagn�es par un joueur, aide ...
    string description_;                                    // "Commencez � jouer au Rami" NOTA : utiliser jpg--> ascii pour une agr�able pr�sentation
public:
    OptionMenu(string  nom = "nom",string description = "une description");
    string getNom() const { return nom_; }
    string getDescription() const { return description_; }
    // Classe reprise du TD4, mais adapt�e pour les besoins de la situation par Pierre Laclaverie
};
class Menu 
{
    string titre_;
    vector<OptionMenu> listeOptions_;
    
public:
    Menu();
    //Menu(const string& titre= "Menu d'acceuil");
    void setTitre(const string& titre);
    void ajouterOption(const string& nom, const string& description);        // car on va tendre � faire quelque chose de complet et modulable
    void defOptionDeMenuAcceuil();
    //void afficherMenu();                                                    //� paufiner
    int demanderChoix();                                                   // demander quelle option de menu prendre
    void executer();                                                      // d�marrer l'application
    void NouvellePartie();
    virtual void executerOption(const string& nom, bool& fin);           // Programme de test pour voir si un joueur a fait une combinaison
    void afficherImageTxt(string image);                            // Afficher l'image de d�part --> code : cl�ment maubant & Thibault girardin
    bool quitter();    // quitter l'application
    virtual void aide();  // On va s'�clater sur �a   //Pour moi, ce serait une aide qui rappelle les r�gles du jeu --> oui
    // Classe reprise du TD4, mais adapt�e pour les besoins de la situation par Pierre Laclaverie
};



#endif // !_MENU_
