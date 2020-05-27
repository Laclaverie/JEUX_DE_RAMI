#include"Menu.h"
using namespace std;



OptionMenu::OptionMenu( string nom,  string description)
{
    nom_ = nom;
    description_ = description;
}

/*
Menu::Menu(const string& titre)
{
    titre_ = titre;
}
*/


Menu::Menu()
{
    titre_ = "Menu D'acceuil ";
}

void Menu::setTitre(const string& titre)
{
    titre_ = titre;
}

/*
void Menu::ajouterOption(const string& nom, const string& description)
{
    listeOptions_.push_back(OptionMenu(nom, description));
}*/
/*
void Menu::defOptionDeMenuAcceuil()
{
    ajouterOption("Nouvelle Partie ", " Débutons une partie de Rami avec un camrade !");
    ajouterOption("Quitter ", "Au revoir !");
}
*/
/*
void Menu::afficherMenu()
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
}*/

int Menu::demanderChoix()
{
    int choix;
    cout << " Que voulez-vous faire ? ";
    cout << "Rentrez le numéro correspond à votre choix" << endl;
    cin >> choix;
    cout << endl;
    return choix;
}

/* 
void Menu::executer() // on va lancer l'application avec cela 
{
    // prévoir une fonction d'affichage sympatoche du menu, à faire à la fin
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

}*/

void Menu::NouvellePartie()
{
    cout << " Bienvenue, vous allez commencer une partie de Rami" << endl;
   
}


void Menu::executerOption(const string& nom, bool& fin)
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
/*
void Menu::afficherImageTxt(string image)
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
}// quand pb fixé, le supprimer d'ici

*/

bool Menu::quitter()
{
    bool fin = false;
    char reponse;
    cout << "Voulez-vous vraiment sortir de l'application (o/n) ?";
    cin >> reponse;
    if ((reponse == 'o') || (reponse == 'O'))  // Si on veut quitter le jeu, il faut sauvegarder la partie pour pouvoir la continuer
    {
        //sauver();
        fin = true;
    }
    return fin;
}


/*void Menu::sauver() const
{
    ofstream sauv("sauvegarde.txt"); // Ouvre le fichier "sauvegarde.txt" en mode écriture
    for (int i = 0; i < (int)main_.size(); i++)
    {
        sauv << main_[i] << endl;
    }
    for (int j = 0; j < (int)defausse_.size(); j++)
    {
        sauv << defausse_[j] << endl;
    }
    for (int k = 0; k < (int)talon_.size(); k++)
    {
        sauv << talon_[k] << endl;
    }
    cout << "Sauvegarde reussie" << endl; // Affiche ce message si la sauvegarde est réussie
}





void Menu::charger()
{
    ifstream sauv("sauvegarde.txt"); // On ouvre le fichier "sauvegarde.txt" en mode lecture // Mais je crois que comme ça, il ne se mettra pas à jour la partie si on revient pour la continuer
}
*/


void Menu::aide()
{
    cout << "Lorsque c'est à vous de jouer, vous devez commencer par piocher une carte :" << endl;
    cout << "   -de la pioche" << endl;
    cout << "   -de la défausse" << endl;
    cout << "Ensuite, vous pouvez soit:" << endl;
    cout << "   -poser 3 cartes de même valeur pour former un BRELAN" << endl;
    cout << "   -poser 4 cartes de même valeur pour former un CARRE" << endl;
    cout << "   -poser 3 cartes minimum de même couleur pour former une SEQUENCE" << endl;
    cout << "   -ne rien faire" << endl;
    cout << "Attention, il ne faut pas oublier de se défausser d'une carte" << endl;
    system("pause");
}