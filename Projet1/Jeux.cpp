/* En-tête du programme */
///==================== */
/* Programme:		tutoGitsSFML.cpp
// Auteur:			Jean-Alain Sainton & Olivier Lemay Dostie
// Date création:	16/04/2017
// Description:		Programme des essais SFML et de connection Git pour le projet final en C++
// .				Espace de développement pour l'application.*/

/* Directives au pré-processeur */
///============================ */
#include <saisieSecurisee.h>	//Pour la fonction ouvrirFichier
#include <iomanip>				
#include <locale>				
#include <string>				
#include <vector>				
#include <math.h>				
#include <cstdlib>				
using namespace std;
#include <SFML/Graphics.hpp>	
#include <SFML/Audio.hpp>		
using namespace sf;
#include<client.h>
#include <windows.h>


/* Prototypes des fonctions */

const int NBRNIVEAU = 5;
const int NBRPOUVOIR = 10;

struct joueur
{
	string nomJoueur,
		mdpJoueur;

	int argent = 0,
		score[NBRNIVEAU][2],        // Numero niveau | Score attein
		pouvoir[NBRPOUVOIR][2],		//Numero pouvoir | acheter(1) ou non (2)
		niveauDebloquer = 0;

};

void main() {

	int argc =0;
	char *argv[15];
	int choixMenu = 0,
		choixNiveau = 0,
		mouvement = 0, // (1=haut, 2=bas, 3=gauche 4=droite)
		action = 0, // ()
		typeMonstre = 0,
		niveauChoisie = 0;
	HINSTANCE hInstance =0;
	HINSTANCE hPrevInstance = 0;
	LPSTR lpCmdLine = 0;
	int nCmdShow = 0;

	conectionWinsock(argc, argv);
}

void menuLogIn()
{
	RenderWindow window;
	window.create(VideoMode(700, 700), "Log In");

	

}

