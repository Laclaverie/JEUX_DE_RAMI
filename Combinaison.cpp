#include "Combinaison.h"

using namespace std;


Combinaison::Combinaison()
{
	vector<carte*> unecombi;
	carte* unecarte;
	unecombi.push_back(unecarte);
	combi_ = unecombi;

}

Combinaison::~Combinaison()
{
	combi_.clear();
}


void Combinaison::afficher()  
{

	cout << "La combinaison proposée est : ";
	vector<carte*> ::iterator it;
	for (it = combi_.begin(); it != combi_.end(); it++)
	{
		(*it)->afficher(); //C'est le afficher de la classe carte ici :)
		cout<< " " << endl; 

	}

}

void Combinaison::saisir() // Vouloir poser des cartes
{
	char c = 'x';
	vector<carte*> aPoser;
	carte* uneCarte;
	bool isOk =0;
	do
	{
		cout << "Quelle combinaison voulez - vous poser ? " << endl;
		cout << " Pour saisir une suite, tapez s \n " << endl;
		cout << "Pour saisir un carré, tapez c \n" << endl;
		cout << "Pour saisir un Brelan, tapez b \n " << endl;
		cout << "Pour ne rien poser, taper a (comme abandonner le coup)" << endl;;
		cout << "Votre choix : ";
		cin >> c;

	} while ((c != 's') && (c != 'c') && (c != 'b') && (c != 'a'));

	if (c=='s')
	{
		demanderCarte("Suite");
		cout << "Combien de cartes voulez - vous poser pour cette suite ?" << endl;
		int nb;
		cin >> nb;
		for (int i = 1; i < nb+1; i++)
		{
			cout << " Carte n° " << i << " : \n";
			uneCarte = choisirCarte();
			uneCarte->afficher() ;
			aPoser.push_back(uneCarte);
			setCombinaison(aPoser);						// On stocke la combinaison dans le champ privé pour quelle puisse être utilisée par une autre fonction
		}

	}
	if (c == 'c')
	{
		demanderCarte("Carré", 4);
		for (int i = 1; i < 5; i++)
		{
			cout << " Carte n° " << i << " : \n";
			uneCarte = choisirCarte();
			uneCarte->afficher();
			aPoser.push_back(uneCarte);
			setCombinaison(aPoser);					// On stocke la combinaison dans le champ privé pour quelle puisse être utilisée par une autre fonction
		}

	}
	if (c == 'b')
	{
		demanderCarte("Brelan", 3);
		for (int i = 1; i < 4; i++)
		{
			cout << " Carte n° " << i << " : \n";
			uneCarte = choisirCarte();
			uneCarte->afficher();
			aPoser.push_back(uneCarte);
			setCombinaison(aPoser);									// On stocke la combinaison dans le champ privé pour quelle puisse être utilisée par une autre fonction
		}
	}
	if (c == 'a')
	{
		carte abandon = carte("abandon");			// une carte abandon
		uneCarte = &abandon;						// on a un pointeur
		aPoser.push_back(uneCarte);					// On va vérifier dans une autre méthode si le joueur abandonne
		setCombinaison(aPoser);			// On stocke la combinaison dans le champ privé pour quelle puisse être utilisée par une autre fonction
	}

}

carte* Combinaison::getDerniere()
{
	return combi_.back();
}

void Combinaison::demanderCarte(string nom , int nombre)
{
	cout << " Veuillez saisir les cartes que vous voulez poser " << endl;
	cout << " Vous avez choisit de poser la combinaison :  " << nom;
	if (nom == "Suite")
	{
		cout << "Vous devez poser au moins 3 cartes  " << endl;
	}
	else
	{
		cout << " Vous devez donc choisir JUDICIEUSEMENT " << nombre << " cartes !" << endl;
	}
}

carte* Combinaison::choisirCarte()
{
	cout << " Quelle carte voulez-vous choisir ?  " << endl;
	cout << " Tapez  nom  motif  : " << endl;
	cout << "Par exemple : la dame de coeur : dame --entrer--coeur " << endl;
	cout << " Tous les chiffres sont en lettres" << endl;
	cout << " Ne mettez pas d'espace " << endl;
	carte choix;
	string nom;
	string motif;
	cout << " Nom de la carte : ";
	cin >> nom;
	cout << nom;
	cout << "Motif : ";
	cin >> motif;
	cout << motif;
	choix = carte(nom, motif);
	carte* toto = &choix;
	return toto;
	
}  //fini

bool Combinaison::isValide(vector<carte*> combinaison, int tour)    //finit
{
	bool estValide = 0;
	estValide = isBrelan(combinaison);
	if (estValide) {
		return 1;
		cout << " Vous avez bien posé un Brelan" << endl;
	}
	estValide = isCarre(combinaison);
	if (estValide) {
		return 1;
		cout << " Vous avez bien posé un Carre" << endl;
	}
	estValide = isSequence(combinaison);
	if (estValide) { return 1;
	cout << " Vous avez bien posé une suite" << endl;
	}
	
	
	if (tour == 1)
	{
		int somme=0;
		vector<carte*> ::iterator it;
		for (it = combinaison.begin(); it != combinaison.end(); it++)
		{
			somme = ((*it)->getValeur())+somme;
		}
		if (somme > 50)
		{
			cout << " Vous avez posé " << somme << " points, votre premier tour est accepté " << endl;
			return 1;
		}
		else
		{
			cout << " Vous avez posé " << somme << " points, votre premier tour n'est pas accepté " << endl;
			return 0;
		}
	}
	cout << "Combinaison non valide " << endl;
	return 0;
}//finit
bool Combinaison ::  isBrelan(vector<carte*> combi)
{
	vector<carte*> ::iterator it;
	int nbtestsok = 0;
	if (combi.size() != 3)
	{
		cout << "La combinaison n'a pas le bon nombre de cartes !" << endl;
		return 0;
	}
	else 
	{
		for (it = combi.begin()+1; it != combi.end(); it++)
		{
			if (((*it - 1)->getValeur()) == ((*it)->getValeur()))
			{
				nbtestsok += 1;
			}
		}
		if (nbtestsok == 2)
		{
			cout << "Vous avez bien rentré un brelan" << endl;
			return 1;
		}
	}
	
}
bool Combinaison::isCarre(vector<carte*> combi)
{
	vector<carte*> ::iterator it;
	int nbtestsok = 0;
	if (combi.size() != 4)
	{
		cout << "La combinaison n'a pas le bon nombre de cartes !" << endl;
		return 0;
	}
	else
	{
		for (it = combi.begin() + 1; it != combi.end(); it++)
		{
			if (((*it - 1)->getValeur()) == ((*it)->getValeur()))
			{
				nbtestsok += 1;
			}
		}
		if (nbtestsok == 2)
		{
			return 1;
		}
	}

}
bool Combinaison::isSequence(vector<carte*> combi)
{
	int nbtestok = 0;
	vector<carte*> ::iterator it;
	for (it = combi.begin()+1; it != combi.end(); it++)
	{
		if ((*it - 1)->getCouleur() == (*it)->getCouleur())
		{
			if ((*it - 1)->getValeur() == (*it)->getValeur())
			{
				nbtestok += 1;
			}
		}
	}
	if (nbtestok == (combi.size() - 1))
	{
		cout << "Vous avez bien rentré une suite de " << combi.size() << " cartes" << endl;
		return 1;
	}
	else
	{
		cout << " Vous vous êtes trompé ! Ce n'est pas une suite au sens des règles du Rami " << endl;
		return 0;
	}
}
/*
bool Combinaison::isBrelan()
{
	
	for (int i = 1; i < taille_ ; i++)
	{
		if (taille_ ==3 && (combinaison_[i-1] == combinaison_[i]))         // On veut 3 cartes de même valeur donc on regarde si toutes les valeurs de notre tableau sont les mêmes et qu'on en ait bien 3
		{
			cout << "La combinaison est valide" << endl;
			return 1;
			
		}
		else
		{
			cout << "La combinaison n'est pas valide, veuillez réessayez" << endl;
			return 0;
			
		}
	}
 }
 */
/*
bool Combinaison::isCarre()
{
	for (int i = 1; i < taille_ ; i++)           // On veut 4 cartes de même valeur donc on regarde si toutes les valeurs de notre tableau sont les mêmes et qu'on en ait bien 4
	{
		if (taille_==4 &&(combinaison_[i-1] == combinaison_[i]))
		{
			cout << "La combinaison est valide" << endl;
			return 1;
			
		}
		else
		{
			cout << "La combinaison n'est pas valide, veuillez réessayez" << endl;
			return 0;
			
		}
	}
}



bool Combinaison::isSequence()
{
	for (int i = 1; i < taille_; i++)
	{
		if (taille_ > 2 && (combinaison_ == 100 ^ combinaison_[i] == 200) && (combinaison_[i - 1] = combinaison_[i])) // On veut 3 cartes de même couleur MINIMUM donc on regarde si les valeurs de notre tableau sont soit 100 (rouge) soit 200 (noir) sont les mêmes et qu'on en ait au moins 3
		{
			cout << "La combinaison est valide" << endl;
			return 1;
			
		}
		else
		{
			cout << "La combinaison n'est pas valide, veuillez réessayez" << endl;
			return 0;
			
		}
	}
}


bool Combinaison::isValide()
{
	 
	for (int i = 0; i < taille_; i++)
	{
		somme_ += combinaison_[i];
		if (somme_>51) // On veut au premier tour 51 points minimum pour que la combinaison soit valide
		{
			cout << "La combinaison est valide" << endl;
			return 1;
			
		}
		else
		{
			cout << "La combinaison n'est pas valide, veuillez réessayez" << endl;
			return 0;
			
		}
	}
}
*/