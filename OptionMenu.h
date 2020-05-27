#ifndef _OPTIONMENU_
#define _OPTIONMENU_
#include "Menu.h"
#include<string>
using namespace std;
class Menu;
class OptionMenu                                        
{
    string nom_;                                            // Par exemple : Nouvelle Partie, nombre de parties gagnées par un joueur, aide ...
    string description_;                                    // "Commencez à jouer au Rami" NOTA : utiliser jpg--> ascii pour une agréable présentation
public:
    OptionMenu(const string& nom ="nom", const string& description="une description");
    string getNom() const { return nom_; }
    string getDescription() const { return description_; }
    // Classe reprise du TD4, mais adaptée pour les besoins de la situation par Pierre Laclaverie
};

#endif