#include <string>
#include <conio.h>
#include <iostream>
#include "..\screen\screen.h"
using namespace std;

//pour utiliser une classe il faut inclure sa d�finition
#include "animal.h" 

//section des prototypes des fonctions
void adopterMonAnimal();
void decrireUnAnimal(Animal);
//void decrireUnAnimal(Animal, int ligne, int colonne);

//fonction qui re�oit un param�tre par r�f�rence
//void initialiserAnimal(Animal&);
//section des variables globales
//cr�ation d'OBJET: il s'agit d'une VARIABLE du type d'une classe
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
	//appel d'une fonction comportant un param�tre par valeur
	//cout << "Cours 4: parametre par valeur\n";
	//decrireUnAnimal(sonAnimal);
	//_getch();

	////appel d'une fonction comportant un param�tre par r�f�rence
	//cout << "\nparametre reference\n";
	//initialiserAnimal(tonAnimal);
	//tonAnimal.afficherAnimal();
	//_getch();

	////cr�ation d'un objet � l'aide du constructeur par recopie
	//Animal unNouvelAnimal(sonAnimal);


	//cout << "\n\n\nnouvel animal copie:\n";
	//unNouvelAnimal.afficherAnimal();
	//_getch();

	////appel d'une fonction surcharg�e
	//cout << "\nFonction surchargee:\n";
	////appelle la 1�re fonction decrireUnAnimal(): celle qui re�oit un seul param�tre de type TAnimal
	//decrireUnAnimal(tonAnimal);
	////appelle la 2i�me fonction decrireUnAnimal(): celle recevant un param�tre de type TAnimal et 2 int
	//decrireUnAnimal(tonAnimal, 2, 10);
	////affichera les donn�es aux coordonn�es 2,10
	//decrireUnAnimal(tonAnimal,2,10);
	////affichera les donn�es aux coordonn�es 5,20 tel que sp�cifi� par les param�tres par d�faut
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
	cout << "Voici les donn�es de mon animal:\n\n";
	inAnimal.AfficherAnimal();
	cout << "\nSon cri est: ";
	inAnimal.Crier();
	_getch();
}

//aussi, on aurait pu faire l'instruction suivante
//cout << inAnimal.getType() << " qui se nomme " << inAnimal.getNomFamilier();


//cours 4
//fonction recevant un param�tre par R�F�RENCE
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

//fonction surcharg�e
//fonction qui porte le m�me nom qu'une autre fonction
//le compilateur ex�cute la bonne fonction en se basant sur le nombre et le type des param�tres
void decrireUnAnimal(Animal inAnimal, int inLigne, int inColonne)
{
	ClrScr();
	Gotoxy(inColonne, inLigne);
	inAnimal.AfficherAnimal();
	inAnimal.Crier(3);
	_getch();
}
