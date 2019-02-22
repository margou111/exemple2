
//pour éviter d'inclure la définition de la classe plus d'une fois
#ifndef Animal_H 
#define Animal_H

#include "..\screen\screen.h"
//librairie contenant le type string 
#include <string>
#include <iostream>
using namespace std;

class Animal
{
private:
	string type;
	string nomFamilier;
	string cri;
public:
	Animal();
	Animal(string inType, string inNom, string inCri);  
	Animal(const Animal &inAnimal);
	~Animal();

	string getType() const; 
	string getNomFamilier() const;
	void setType(string inType);
	//void setNomFamilier(string inNom);
	void setCri(string inCri);
	void ChangerNom(string);
	void AfficherAnimal() const;
	void Crier() const;
	void Crier(int) const;
}; 

#endif