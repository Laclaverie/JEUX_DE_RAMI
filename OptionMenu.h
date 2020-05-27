#ifndef _OPTIONMENU_
#define _OPTIONMENU_
#include "Menu.h"
#include<string>
using namespace std;
class Menu;
class OptionMenu                                        
{
    string nom_;                                            // Par exemple : Nouvelle Partie, nombre de parties gagn�es par un joueur, aide ...
    string description_;                                    // "Commencez � jouer au Rami" NOTA : utiliser jpg--> ascii pour une agr�able pr�sentation
public:
    OptionMenu(const string& nom ="nom", const string& description="une description");
    string getNom() const { return nom_; }
    string getDescription() const { return description_; }
    // Classe reprise du TD4, mais adapt�e pour les besoins de la situation par Pierre Laclaverie
};

#endif