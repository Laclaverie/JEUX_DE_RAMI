#include "Joueur.h"

Joueur::Joueur( string nom, int score,  int partieGagne, bool abandon)
{
	nom_ = nom;
	score_ = score;
	partiesGagne_ = partieGagne;
	abandon_ = abandon;
}

Joueur::~Joueur()
{
	main_.clear();
}

vector<carte*> Joueur::choisirCarte() // choisir cartes à poser
{
	cout << " Il est temps de poser des cartes" << endl;
	Combinaison carteAposer;
	carteAposer.saisir();
	return carteAposer.getCombinaison();
}

void Joueur::afficherMain()
{
	vector<carte*> ::iterator it;
	cout << " Votre main " << endl;
	for (it = main_.begin(); it != main_.end(); it++)
	{
		cout << (*it)->getNom() << " de " << (*it)->getMotif() << endl;
	}

}

void Joueur::ajouterCarte(carte* unecarte)
{
	main_.push_back(unecarte);
}

void Joueur::piocherDansPioche(Pioche unePioche) 

{
	char choix ='n';
	do
	{
		cout << "Où voulez- vous piocher ? " << endl;
		cout << " Vous avez le choix : Talon ou défausse ? --> 't' ou 'd'" << endl;
		cout << " Dans la  défausse se trouve le " << ((unePioche.getDefausse()).back())->getNom();
		cout << " de " << ((unePioche.getDefausse()).back())->getMotif() << endl;
		cin >> choix;
	} while ((choix != 't') && (choix != 'T') &&(choix != 'd') && (choix != 'D'));  
	if ((choix == 't') || (choix == 'T'))
	{
		if(unePioche.getTalon().size()==0)
		{
			cout << "Talon vide, vous n'avez pioché aucune carte" << endl;
		}
		else
		{
			ajouterCarte((unePioche.getTalon()).back()); // on pioche la carte
			unePioche.getTalon().pop_back(); // on la supprime de la pioche
		}
	}
	if ((choix == 'd') || (choix == 'D'))
	{
		if (unePioche.getTalon().size() == 0)
		{
			cout << "Défause vide, vous n'avez pioché aucune carte" << endl;
		}
		else
		{
			ajouterCarte((unePioche.getDefausse()).back()); // on pioche la carte
			unePioche.getDefausse().pop_back(); // on la supprime de la défausse.
		}
	}

	
}

void Joueur::setNom()
{
	cout << " Quel est votre nom / pseudonyme  ? " << endl;
	string nom;
	getline(cin, nom);
	nom_ = nom;
	cout << " Bienvenue " << nom << " ! "<< endl;
}

void Joueur::setScore(int score)
{
	score_ = score;
}







