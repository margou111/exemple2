#include <string>
#include <conio.h>
#include <iostream>
#include "..\screen\screen.h"
using namespace std;

//ajout 4 par compteCegep

//ajout 3 par margou 25 mars

//ajout 2 par compteCegep 25 mars


//ajout 25 mars 
//
//
//

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
	cout << "\n";
	_getch();

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
