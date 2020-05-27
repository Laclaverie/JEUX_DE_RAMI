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

	/*string baseDir = "Jeu du Rami";   //On définit le répertoire 

	cout << "Bienvenue, vous allez jouer au jeu du Rami" << endl;

	string roomId;
	cout << "Quel est le numéro de votre salle?" << endl;		//On demande à l'utilisateur dans quelle salle il veut jouer, ce qui va définir  le dossier
	getline(cin, roomId);

	string roomDir = baseDir + '/' + roomId;		//Mise en place du répertoire de jeu
	string commFile = roomDir + "/commFile.txt";	//Mise en place du chemin de communication

	cout << "Chargement du jeu du Rami" << endl;

	ODrive od;								//Initialisation du répertoire de jeu
	od.refresh(baseDir);


	if (!od.isDir(roomDir))   //Création du répertoire s'il n'existe pas
	{
		od.mkDir(roomDir);
		od.refresh(baseDir);

		cout << "Vous etes le joueur 1" << endl;
		cout << "En recherche d'un adversaire, veuillez patienter..." << endl;
	}
	else					//S'il existe déjà, on regarde si le fichier de communication existe déjà pour la salle demandée par la joueur 
	{						//Et on synchronise le répertoire et le fichier de communication
		od.sync(roomDir);
		od.sync(commFile);
		if (!ifstream(od.getFullName(commFile)).good())  //Si le fichier n'existe pas, alors c'est la première fois que cette salle est demandée, donc c'est le joueur 1
			cout << "Vous êtes le joueur 1" << endl;
		else
		{
			cout << "Vous êtes le joueur 2" << endl; //Sinon, le joueur 1 l'a dejà demandé, et c'est la 2e personnne à la demander, c'est donc le joueur 2
					//Quand les 2 joueurs sont repérés, on peut mélanger et distribuer les carte
	    }
	}
	////////////////// 
	deckRami mondeck;
	mondeck.initDeck();   //On a un unique deck pour les 2 joueurs (variable globale)
	mondeck.melangerDeck();
	////////////////////////*/
	MenuAccueil unMenu;
	unMenu.afficherMenu();
		
		// Il faut voir comment se rencontrent les joueurs : Il faudrait qu'ils contrôlent chacun la classe joueur
	// Je pense que c'est toi Sarah qui peut peut-être bidouiller pour créer les deux joueurs, il faudrait qu'ils soient
	// des joueurs qui soient définis soit en variable globale, soit en sortie d'une de tes fonctions 
	// Ex : Joueur CreerJoueur ();  dans Odrive (ou un truc qui peut faire la même, car je peux pas créer 2 joueurs moi (sinon ils jouent sur le même écran)

	





	



	//Ici, on va mettre la condition que lorsque le joueur abandonne ou qu'il quitte l'application, le fichier de communication est supprimé (mais pas le répertoire attention)
	//if ( || ) od.delFile(commFile);



}

