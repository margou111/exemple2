#include <string>
#include <conio.h>
#include <iostream>
#include "..\screen\screen.h"
using namespace std;

//pour utiliser une classe il faut inclure sa définition
#include "animal.h" 

//section des prototypes des fonctions
void adopterMonAnimal();
void decrireUnAnimal(Animal);
//void decrireUnAnimal(Animal, int ligne, int colonne);

//fonction qui reçoit un paramètre par référence
//void initialiserAnimal(Animal&);
//section des variables globales
//création d'OBJET: il s'agit d'une VARIABLE du type d'une classe
Animal monAnimalPrefere;

//programme principal


//test pour GIT


void main()
{
	Animal tonAnimal;

	adopterMonAnimal();
	cout << "Cours 1 \n";
	decrireUnAnimal(monAnimalPrefere);
	cout << "\n";
	_getch();

	Animal sonAnimal(monAnimalPrefere);
	sonAnimal.Crier();
	//sonAnimal.setCri("ouaff - ouaff");
	//cout << "\nNouveau cri: ";
	//sonAnimal.crier();
	cout << "\n";
	_getch();

	//cours 4
	//appel d'une fonction comportant un paramètre par valeur
	//cout << "Cours 4: parametre par valeur\n";
	//decrireUnAnimal(sonAnimal);
	//_getch();

	////appel d'une fonction comportant un paramètre par référence
	//cout << "\nparametre reference\n";
	//initialiserAnimal(tonAnimal);
	//tonAnimal.afficherAnimal();
	//_getch();

	////création d'un objet à l'aide du constructeur par recopie
	//Animal unNouvelAnimal(sonAnimal);


	//cout << "\n\n\nnouvel animal copie:\n";
	//unNouvelAnimal.afficherAnimal();
	//_getch();

	////appel d'une fonction surchargée
	//cout << "\nFonction surchargee:\n";
	////appelle la 1ère fonction decrireUnAnimal(): celle qui reçoit un seul paramètre de type TAnimal
	//decrireUnAnimal(tonAnimal);
	////appelle la 2ième fonction decrireUnAnimal(): celle recevant un paramètre de type TAnimal et 2 int
	//decrireUnAnimal(tonAnimal, 2, 10);
	////affichera les données aux coordonnées 2,10
	//decrireUnAnimal(tonAnimal,2,10);
	////affichera les données aux coordonnées 5,20 tel que spécifié par les paramètres par défaut
	//decrireUnAnimal(tonAnimal);
}

//------------------------------------------------------------------------------------
void adopterMonAnimal()
{
	string type, nom, cri;
	ClrScr();
	cout << "type d'animal desire: ";
	cin >> type;
	cout << "nom de l'animal: ";
	cin >> nom;
	cout << "cri de cet animal:";
	cin >> cri;
	monAnimalPrefere.setType(type);
	monAnimalPrefere.ChangerNom(nom);
	monAnimalPrefere.setCri(cri);
}

void decrireUnAnimal(Animal inAnimal)
{
	ClrScr();
	cout << "Voici les données de mon animal:\n\n";
	inAnimal.AfficherAnimal();
	cout << "\nSon cri est: ";
	inAnimal.Crier();
	_getch();
}

//aussi, on aurait pu faire l'instruction suivante
//cout << inAnimal.getType() << " qui se nomme " << inAnimal.getNomFamilier();


//cours 4
//fonction recevant un paramètre par RÉFÉRENCE
void initialiserAnimal(Animal& inAnimal)
{
	string type, nom, cri;
	ClrScr();
	cout << "type d'animal: ";
	cin >> type;
	cout << "som nom: ";
	cin >> nom;
	cout << "son cri:";
	cin >> cri;
	inAnimal.setType(type);
	inAnimal.ChangerNom(nom);
	inAnimal.setCri(cri);
}

//fonction surchargée
//fonction qui porte le même nom qu'une autre fonction
//le compilateur exécute la bonne fonction en se basant sur le nombre et le type des paramètres
void decrireUnAnimal(Animal inAnimal, int inLigne, int inColonne)
{
	ClrScr();
	Gotoxy(inColonne, inLigne);
	inAnimal.AfficherAnimal();
	inAnimal.Crier(3);
	_getch();
}
