#include "Pioche.h"

using namespace std;


Pioche::Pioche()
{
	
}

carte* Pioche::PiocherCartes()
{
	char c = 'x';
	carte uneCarte;
	carte* aPiocher=&uneCarte;
	
	do
	{
		cout << "Voulez s- vous piocher dans la pioche ou dans la d�fausse ? " << endl;
		cout << " Tapez p pour pioche ou d pour d�fausse " << endl;
		cin >> c;
		if (c=='p')
		{
			if (talon_.size() != 0)
			{
				aPiocher = talon_.back(); // On r�cup�re la derni�re carte 
				talon_.pop_back();		// On l'enl�ve du deck
				return aPiocher;      //On retourne ce qui nous interesse
			}
			else
			{
				cout << "Il n'y a pas de cartes dans le talon, tu ne piocheras rien !" << endl;
				return aPiocher;
			}
		}
		if (c=='d')
		{
			if (defausse_.size() != 0)
			{
				aPiocher = defausse_.back();				// On r�cup�re la derni�re carte 
				defausse_.pop_back();					   // On l'enl�ve du deck
				return aPiocher;				     	  //On retourne ce qui nous interesse
			}
			else
			{
				cout << " Il n'y a aucune carte dans le talon, tu n'as rien pioch�, pioche dans le talon!";
				c = 'x';																			// On donne une chance au joueur de piocher au bon endroit
			}
		}
	} while ((c != 'p') && (c != 'd'));

} //Pierre Laclaverie


void Pioche::ajouterDefausse(carte* carte)
{
	defausse_.push_back(carte);

}//Sarah Ben Barek


void Pioche::afficherDefausse() const
{

	cout << defausse_.back()->getNom() << " de " << defausse_.back()->getMotif() << endl;;
}// Sarah Ben Barek

void Pioche::setTalon(vector<carte*> talon)
{
	talon_ = talon;
} //Pierre Laclaverie


