#include "MenuJeux.h"


using namespace std;


MenuJeux::MenuJeux() : Menu()
{
	
	combinaisonAposer_ = Combinaison();
	ajouterOption("aide", "Afficher l'aide");
	ajouterOption("quitter", "Fin de la partie");
	tour_ = 1;
}



void MenuJeux::executerOption(const string& nom, bool& fin, int numeroJoueur)
{
	fin = false;
	if (nom == "quitter") fin = quitter();
	else if (nom == "aide") aide();
	else if (nom == "Piocher") piocher(numeroJoueur);
	else if (nom == "Poser une ou plusieurs combinaison(s)") poserCombi();
	else if (nom == "Fin du tour") finTour();  // Je pense qu'il faut mettre un script pour mettre dans un fichier tout ce qu'il c'est pass�
	// donc soit faire �a au fur et � mesure, soit ici, � la fin
	else {
		cout << "Option inexistante" << endl;
		system("pause");
	}
}


void MenuJeux::defOptionDeMenuAcceuil()
{
	ajouterOption("Piocher ", " Piocher une carte : choisir entre talon et defausse  ");
	ajouterOption("Poser une ou plusieurs combinaison(s)", " Vous devez choisir en premier lieu le nombre de combinaisons � poser ");
	ajouterOption("Fin du tour", " vous laissez votre adversaire jouer "); 
	ajouterOption("Abandonner ", "Vous laissez la victoire � votre adversaire");
}


void MenuJeux::afficherMenu()
{
	if (listeOption_.size() == 0)
	{
		defOptionDeMenuAcceuil(); // on cr�� le Menu
	}
	
	for (int i = 0; i < listeOption_.size(); i++)
	{
		cout << " -  " << i << " :  " << listeOption_[i].getNom() << endl;
		cout << "         " << listeOption_[i].getDescription() << endl;
	}
}

void MenuJeux::premierTour()
{
	bool isOk;
	do
	{
		cout << " Vous devez poser 51 points( RAMI 51 !) pour ce premier tour : bonne chance ! " << endl;
		poserCombi();
		isOk = combinaisonAposer_.isValide(combinaisonAposer_.getCombinaison());
	} while (!isOk);


}


/*Joueur MenuJeux::abandon()
{
	if (abandon_ == true)
	{
		cout << "Le joueur" << nom_->getNom() << "a abandonn�" << endl;
		cout << "Vous avez gagn�" << endl;
		quitter();
	}
}*/     //Ici, je comprends pas, il me dit que l'identificateur abandon_ n'est pas d�fini


void MenuJeux::executer()

{
	// pr�voir une fonction d'affichage sympatoche du menu, � faire � la fin
	bool fin = false;
	while (!fin)
	{
		system("cls");
		afficherMenu();
		int choix = demanderChoix();
		if (choix >= 0 && choix < listeOption_.size())
			executerOption(listeOption_[choix].getNom(), fin,numerodujoueuractif_);
		else {
			cout << "Choix incorrect" << endl;
			system("pause");
		}
	}

}

void MenuJeux::piocher(int joueur)
{
	vector<Joueur> ::iterator it;
	it = joueurs_.begin();
	if (joueur == 1) //Joueur1
	{
		(*it).piocherDansPioche(piocheActuelle_);
	}
	if (joueur == 2)
	{
		it++;
		(*it).piocherDansPioche(piocheActuelle_);
	}
	
}

void MenuJeux::poserCombi()
{
	cout << "Il est temps de poser des cartes !" << endl;
	cout << " Combien de combinaisons voulez- vous poser ?" << endl;
	int nb;
	cin >> nb;
	int i = 0;
	char fin = 'n';
	while ((i<nb)&&((fin=='o')||(fin=='O')))
	{
		Combinaison uneCombin;
		uneCombin.saisir();		// on la stocke dans unecombi
		uneCombin.afficher();
		setCombi(uneCombin);      // on la met dans le menuJeux. On s'en fiche qu'il y ai pas un tableau par combinaisons
		// il faut ensuite �crire dans le fichier que la combinaison pos�e
		piocheActuelle_.ajouterDefausse(combinaisonAposer_.getDerniere()); // on ajoute la derni�re carte dans la d�fausse
		// il faut aussi l'�crire dans le fichier
		cout << " Finalement vous n'en posez pas plus ? 'o' pour arr�ter d'en poser 'n' pour continuer" << endl;
		cout << "SI vous n'avez pas fait vos " << nb << " poses de combinaisons de cartes" << endl;
		i++;
	}

	

}

void MenuJeux::afficherJoueurs()
{
	vector<Joueur> ::iterator it;
	cout << " Voil� les joueurs en confrontation ! " << endl;
	for (it = joueurs_.begin(); it != joueurs_.end(); it++)
	{
		cout << (*it).getNom() << endl;
	}
}

void MenuJeux::finTour()
{
	if (numerodujoueuractif_ == 1) { numerodujoueuractif_ = 2; }
	else { numerodujoueuractif_ = 1; }
}

bool MenuJeux::quitter()
{

	return Menu::quitter();
}
