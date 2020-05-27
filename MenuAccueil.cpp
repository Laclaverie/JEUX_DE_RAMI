#include "MenuAccueil.h"

using namespace std;


MenuAccueil::MenuAccueil()
{
	titre_ = "Menu d'acceuil";
	ajouterOption("nouvellePartie", "Nouvelle partie");
	ajouterOption("aide", "Afficher l'aide");
	ajouterOption("quitter", "Quitter l'application");

}



void MenuAccueil::executerOption(const string& nom, bool& fin)
{
    fin = false;
    if (nom == "quitter") fin = quitter();
    else if (nom == "aide") aide();
    else if (nom == "Nouvelle Partie") NouvellePartie();
    else {
        cout << "Option inexistante" << endl;
        system("pause");
    }
}

void MenuAccueil::ajouterOption(string nom, string description)
{
    listeOptions_.push_back(OptionMenu(nom, description));
}
/*
void MenuAccueil::nouvellePartie()
{
	ofstream sauv("sauvegarde.txt", ios::out | ios::trunc);     //Ouverture du fichier en mode écriture avec effacement à l'ouverture du contenu
}
*/

void MenuAccueil::executer()
{
    bool fin = false;
    while (!fin)
    {
        system("cls");
        afficherMenu();
        int choix = demanderChoix();
        if (choix >= 0 && choix < listeOptions_.size())
            executerOption(listeOptions_[choix].getNom(), fin);
        else {
            cout << "Choix incorrect" << endl;
            system("pause");
        }
    }
}



void MenuAccueil::afficherMenu()
{
    afficherImageTxt("RAMI.txt");
    if (listeOptions_.size() == 0)
    {
        ajouterOption("Nouvelle Partie", " Débutons une partie de Rami avec un camarade !");
        ajouterOption("aide", " Pour vous aider dans vos premiers pas");
        ajouterOption("quitter", "Au revoir !");
    }
    cout << titre_ << endl;
    for (int i = 0; i < listeOptions_.size(); i++)
    {
        cout << " -  " << i << " :  " << listeOptions_[i].getNom() << endl;
        cout << "         " << listeOptions_[i].getDescription() << endl;
    }
}

void MenuAccueil::afficherJoueurs()
{
    vector<Joueur> ::iterator it;
    cout << " Voilà les joueurs en confrontation ! " << endl;
    for (it = joueurs_.begin(); it != joueurs_.end(); it++)
    {
        cout << (*it).getNom() << endl;
    }
}

void MenuAccueil::afficherImageTxt(string image)
{
    ifstream file(image);
    if (!file.good())
    {
        exit(EXIT_FAILURE);
    }
    else
    {
        string ligne;  // On lit lignes pas lignes
        while (getline(file, ligne))
        {
            if (ligne.size() > 0)
            {
                cout << ligne << endl;
            }
        }
    }
}

