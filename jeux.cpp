#include "jeux.h"
#include "Joueur.h"


random_device rd;
mt19937 g(rd());
void deckRami::ajouterCartes(carte * carte)
{
	deck_.push_back(carte);
}

void deckRami::afficherDeck()
{
	cout << "Voici le deck  : \n";
	vector<carte*> ::iterator it;
	for (it = deck_.begin(); it != deck_.end(); it++)
	{
		cout << (*it)->getNom() << " de " << (*it)->getMotif() << endl; // à retravailler avec les changements --> Utiliser (et creer) une fonction afficher cartes
	}
}
void deckRami::initDeck()
{

	carte* a = new carte("as", "coeur");
	deck_.push_back(a);
	carte* b = new carte("deux", "coeur");
	deck_.push_back(b);
	carte* c = new carte("trois", "coeur");
	deck_.push_back(c);
	carte* d = new carte("quatre", "coeur");
	deck_.push_back(d);
	carte* e = new carte("cinq", "coeur");
	deck_.push_back(e);
	carte* f = new carte("six", "coeur");
	deck_.push_back(f);
	carte* g = new carte("sept", "coeur");
	deck_.push_back(g);
	carte* h = new carte("huit", "coeur");
	deck_.push_back(h);
	carte* i = new carte("neuf", "coeur");
	deck_.push_back(i);
	carte* j = new carte("dix", "coeur");
	deck_.push_back(j);
	carte* jjj = new carte("valet", "coeur");
	deck_.push_back(jjj);
	carte* k = new carte("dame", "coeur");
	deck_.push_back(k);
	carte* l = new carte("roi", "coeur");
	deck_.push_back(l);

	carte* m = new carte("as", "carreaux");
	deck_.push_back(m);
	carte* n = new carte("deux", "carreaux");
	deck_.push_back(n);
	carte* o = new carte("trois", "carreaux");
	deck_.push_back(o);
	carte* p = new carte("quatre", "carreaux");
	deck_.push_back(p);
	carte* q = new carte("cinq", "carreaux");
	deck_.push_back(q);
	carte* r = new carte("six", "carreaux");
	deck_.push_back(r);
	carte* s = new carte("sept", "carreaux");
	deck_.push_back(s);
	carte* t = new carte("huit", "carreaux");
	deck_.push_back(t);
	carte* u = new carte("neuf", "carreaux");
	deck_.push_back(u);
	carte* v = new carte("dix", "carreaux");
	deck_.push_back(v);
	carte* w = new carte("valet", "carreaux");
	deck_.push_back(w);
	carte* x = new carte("dame", "carreaux");
	deck_.push_back(x);
	carte* y = new carte("roi", "carreaux");
	deck_.push_back(y);

	carte* z = new carte("as", "pique");
	deck_.push_back(z);
	carte* ca = new carte("deux", "pique");
	deck_.push_back(ca);
	carte* cb = new carte("trois", "pique");
	deck_.push_back(cb);
	carte* cc = new carte("quatre", "pique");
	deck_.push_back(cc);
	carte* cd = new carte("cinq", "pique");
	deck_.push_back(cd);
	carte* ce = new carte("six", "pique");
	deck_.push_back(ce);
	carte* cf = new carte("sept", "pique");
	deck_.push_back(cf);
	carte* cg = new carte("huit", "pique");
	deck_.push_back(cg);
	carte* ch = new carte("neuf", "pique");
	deck_.push_back(ch);
	carte* ci = new carte("dix", "pique");
	deck_.push_back(ci);
	carte* cj = new carte("valet", "pique");
	deck_.push_back(cj);
	carte* ck = new carte("dame", "pique");
	deck_.push_back(ck);
	carte* cl = new carte("roi", "pique");
	deck_.push_back(cl);

	carte* cm = new carte("as", "trefle");
	deck_.push_back(cm);
	carte* cn = new carte("deux", "trefle");
	deck_.push_back(cn);
	carte* co = new carte("trois", "trefle");
	deck_.push_back(co);
	carte* cp = new carte("quatre", "trefle");
	deck_.push_back(cp);
	carte* cq = new carte("cinq", "trefle");
	deck_.push_back(cq);
	carte* cr = new carte("six", "trefle");
	deck_.push_back(cr);
	carte* cs = new carte("sept", "trefle");
	deck_.push_back(cs);
	carte* ct = new carte("huit", "trefle");
	deck_.push_back(ct);
	carte* cu = new carte("neuf", "trefle");
	deck_.push_back(cu);
	carte* cv = new carte("dix", "trefle");
	deck_.push_back(cv);
	carte* cw = new carte("valet", "trefle");
	deck_.push_back(cw);
	carte* cx = new carte("dame", "trefle");
	deck_.push_back(cx);
	carte* cy = new carte("roi", "trefle");
	deck_.push_back(cy);

}

void deckRami::setMain(Joueur joueur1, Joueur joueur2) //à retravailler
{
	deckRami mondeck;
	mondeck.initDeck();
	mondeck.melangerDeck();
	vector<carte*> ::iterator it;
	
		for ( it = deck_.begin(); it != deck_.begin() +14 ; it++) // 14 cartes par personnes
		{
			joueur1.ajouterCarte(*it);

		}
	
	// main du joueur1 ok

		for (it = deck_.begin()+15; it != deck_.begin() + 29; it++) // 14 cartes par personnes
		{
			joueur2.ajouterCarte(*it);

		}
	
		// main du joueur 2 ok
}


deckRami::~deckRami()
{
	deck_.clear();
}
void deckRami::melangerDeck()
{
	shuffle(deck_.begin(), deck_.end(), g); //https://en.cppreference.com/w/cpp/algorithm/random_shuffle
}



/*void deckRami::melangerDeck(deckRami mondeck) // Note aux devellopeurs : on utilisera pas initDeck dans le main
{// Juste melangerDeck, car il initialise le deck aussi (et on  a pas besoin d'un deck initialisé, juste d'un mélangé
	srand((unsigned int)time(0));
	bool verif=true;
	vector<int> liste;
	liste.push_back(55555);
	vector<int> ::iterator it;
	int t;
	mondeck.initDeck(); // On a nos cartes dans le bon ordre
	for (int i = 0; i < 52; i++)
	{
		do
		{
			verif = true;
			t = rand() % 52;  // on choisit une position 
			for (it= liste.begin(); it!=liste.end(); it++) // on regarde toutes les positions enregistrées
			{
				if (t == (*it)) // Es  ce qu'on a 2 cartes identiques?
				{
					verif = false; // On ne veut pas 2 cartes identiques dans le jeu.
				}
			}

		} while (verif == false);
		deck_.push_back(chercherCarte(mondeck, t)); // Le deck mélangé sera dans le châmps privé
		liste.push_back(t); // on stocke le numéro de la carte
	}
	liste.clear(); // on détruit ce qui nous est plus utile pour la suite

}*/

/*carte* deckRami::chercherCarte(deckRami unDeck,int emplacementCarte) //On veut retrouver l'emplacement d'une carte dans un deck
{//Cette fonction ne sert que pour melangerDeck afin de choisir une carte
	vector<carte*> ::iterator iterateur =(unDeck.getDeck()).begin() ;
	iterateur += emplacementCarte-1;
	return (*iterateur);
}
*/

