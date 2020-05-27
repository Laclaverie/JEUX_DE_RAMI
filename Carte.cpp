#include "carte.h"
using namespace std;

carte::carte(string nom, string motif)
{
	nom_ = nom;
	motif_ = motif;
	if ((nom == "as") &&(( motif_=="carreaux")||(motif_=="coeur")))
	{
		valeur_ = 11;
		couleur_ = "rouge";
	}
	if ((nom == "un") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 1;
		couleur_ = "rouge";
	}
	if ((nom == "deux") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 2;
		couleur_ = "rouge";
	}
	if ((nom == "trois") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 3;
		couleur_ = "rouge";
	}
	if ((nom == "quatre") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 4;
		couleur_ = "rouge";
	}
	if ((nom == "cinq") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 5;
		couleur_ = "rouge";
	}
	if ((nom == "six") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 6;
		couleur_ = "rouge";
	}
	if ((nom == "sept") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 7;
		couleur_ = "rouge";
	}
	if ((nom == "huit") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 8;
		couleur_ = "rouge";
	}
	if ((nom == "neuf") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 9;
		couleur_ = "rouge";
	}
	if ((nom == "dix") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 10;
		couleur_ = "rouge";
	}
	if ((nom == "valet") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 10;
		couleur_ = "rouge";
	}
	if ((nom == "dame") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 10;
		couleur_ = "rouge";
	}
	if ((nom == "roi") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 11;
		couleur_ = "rouge";
	}
	if ((nom == "as") &&(( motif_=="carreaux")||(motif_=="coeur")))
	{
		valeur_ = 11;
		couleur_ = "rouge";
	}
	if ((nom == "un") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 1;
		couleur_ = "rouge";
	}
	if ((nom == "deux") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 2;
		couleur_ = "rouge";
	}
	if ((nom == "trois") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 3;
		couleur_ = "rouge";
	}
	if ((nom == "quatre") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 4;
		couleur_ = "rouge";
	}
	if ((nom == "cinq") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 5;
		couleur_ = "rouge";
	}
	if ((nom == "six") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 6;
		couleur_ = "rouge";
	}
	if ((nom == "sept") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 7;
		couleur_ = "rouge";
	}
	if ((nom == "huit") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 8;
		couleur_ = "rouge";
	}
	if ((nom == "neuf") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 9;
		couleur_ = "rouge";
	}
	if ((nom == "dix") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 10;
		couleur_ = "rouge";
	}
	if ((nom == "valet") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 10;
		couleur_ = "rouge";
	}
	if ((nom == "dame") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 10;
		couleur_ = "rouge";
	}
	if ((nom == "roi") && ((motif_ == "carreaux") || (motif_ == "coeur")))
	{
		valeur_ = 10;
		couleur_ = "rouge";
	}
	if ((nom == "as") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 11;
		couleur_ = "noir";
	}
	if ((nom == "un") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 1;
		couleur_ = "noir";
	}
	if ((nom == "deux") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 2;
		couleur_ = "noir";
	}
	if ((nom == "trois") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 3;
		couleur_ = "noir";
	}
	if ((nom == "quatre") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 4;
		couleur_ = "noir";
	}
	if ((nom == "cinq") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 5;
		couleur_ = "noir";
	}
	if ((nom == "six") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 6;
		couleur_ = "noir";
	}
	if ((nom == "sept") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 7;
		couleur_ = "noir";
	}
	if ((nom == "huit") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 8;
		couleur_ = "noir";
	}
	if ((nom == "neuf") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 9;
		couleur_ = "noir";
	}
	if ((nom == "dix") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 10;
		couleur_ = "noir";
	}
	if ((nom == "valet") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 10;
		couleur_ = "noir";
	}
	if ((nom == "dame") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 10;
		couleur_ = "noir";
	}
	if ((nom == "roi") && ((motif_ == "trefle") || (motif_ == "pique")))
	{
		valeur_ = 10;
		couleur_ = "noir";
	}
}

void carte::afficher()
{
	cout << nom_ << " de " << motif_;
}
