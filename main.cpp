#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"jeux.h"
#include"Carte.h"
#include"Combinaison.h"
#include"Pioche.h"
#include"Joueur.h"
#include"MenuJeux.h"
#include"Menu.h"
#include"Odrive.h"
#include"MenuAccueil.h"


using namespace std;

int main()
{

	/*string baseDir = "Jeu du Rami";   //On d�finit le r�pertoire 

	cout << "Bienvenue, vous allez jouer au jeu du Rami" << endl;

	string roomId;
	cout << "Quel est le num�ro de votre salle?" << endl;		//On demande � l'utilisateur dans quelle salle il veut jouer, ce qui va d�finir  le dossier
	getline(cin, roomId);

	string roomDir = baseDir + '/' + roomId;		//Mise en place du r�pertoire de jeu
	string commFile = roomDir + "/commFile.txt";	//Mise en place du chemin de communication

	cout << "Chargement du jeu du Rami" << endl;

	ODrive od;								//Initialisation du r�pertoire de jeu
	od.refresh(baseDir);


	if (!od.isDir(roomDir))   //Cr�ation du r�pertoire s'il n'existe pas
	{
		od.mkDir(roomDir);
		od.refresh(baseDir);

		cout << "Vous etes le joueur 1" << endl;
		cout << "En recherche d'un adversaire, veuillez patienter..." << endl;
	}
	else					//S'il existe d�j�, on regarde si le fichier de communication existe d�j� pour la salle demand�e par la joueur 
	{						//Et on synchronise le r�pertoire et le fichier de communication
		od.sync(roomDir);
		od.sync(commFile);
		if (!ifstream(od.getFullName(commFile)).good())  //Si le fichier n'existe pas, alors c'est la premi�re fois que cette salle est demand�e, donc c'est le joueur 1
			cout << "Vous �tes le joueur 1" << endl;
		else
		{
			cout << "Vous �tes le joueur 2" << endl; //Sinon, le joueur 1 l'a dej� demand�, et c'est la 2e personnne � la demander, c'est donc le joueur 2
					//Quand les 2 joueurs sont rep�r�s, on peut m�langer et distribuer les carte
	    }
	}
	////////////////// 
	deckRami mondeck;
	mondeck.initDeck();   //On a un unique deck pour les 2 joueurs (variable globale)
	mondeck.melangerDeck();
	////////////////////////*/
	MenuAccueil unMenu;
	unMenu.afficherMenu();
		
		// Il faut voir comment se rencontrent les joueurs : Il faudrait qu'ils contr�lent chacun la classe joueur
	// Je pense que c'est toi Sarah qui peut peut-�tre bidouiller pour cr�er les deux joueurs, il faudrait qu'ils soient
	// des joueurs qui soient d�finis soit en variable globale, soit en sortie d'une de tes fonctions 
	// Ex : Joueur CreerJoueur ();  dans Odrive (ou un truc qui peut faire la m�me, car je peux pas cr�er 2 joueurs moi (sinon ils jouent sur le m�me �cran)

	





	



	//Ici, on va mettre la condition que lorsque le joueur abandonne ou qu'il quitte l'application, le fichier de communication est supprim� (mais pas le r�pertoire attention)
	//if ( || ) od.delFile(commFile);



}

