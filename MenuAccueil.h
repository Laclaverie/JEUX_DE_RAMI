#ifndef _MENUACCUEIL_
#define _MENUACCUEIL_
#include<string>
#include<vector>
#include"Menu.h"
#include"Joueur.h"


using namespace std;

class MenuAccueil : public Menu
{
	string titre_;
	vector<OptionMenu> listeOptions_;
	vector<Joueur> joueurs_;
public:
	MenuAccueil();
	void executerOption(const string& nom, bool& fin);
	void ajouterOption(string nom,string description);
	//void nouvellePartie();
	void executer();
	void afficherMenu();
	void afficherJoueurs();
	void afficherImageTxt(string image);
};


#endif // !_MENUACCUEIL
