
#include "animal.h"

//une méthode doit être précédée du nom de la classe::
//souvent souce d'erreur

Animal::Animal()
{
	type="";
	nomFamilier = "";
	cri = "";
}

Animal::Animal(string inType, string inNom, string inCri)
{
	type = inType;
	nomFamilier = inNom;
	cri = inCri;
}

Animal::~Animal()
{
	
}

//le constructeur par recopie initialise le nouvel objet
//en utilisant les valeurs de l'objet reçu en paramètre
Animal::Animal(const Animal& inAnimal)
{
	type = inAnimal.type;
	nomFamilier = inAnimal.nomFamilier;
	cri = inAnimal.cri;
}

//les get() permettent de connaitre la valeur d'un attribut en particulier
string Animal::getType() const
{
	return type;
}

string Animal::getNomFamilier() const
{
	return nomFamilier;
}

//les set() permettent de donner une valeur à un attribut
//ils pourront contenir des validations
void Animal::setType(string inType)
{
	type = inType;
}
//
void Animal::setNomFamilier(string inNom)
{
	nomFamilier = inNom;
}
//
void Animal::setCri(string inCri)
{
	if (inCri != "")
	{
		cri = inCri;
	}
}

//autres méthodes
void Animal::AfficherAnimal() const
{
	cout << "Je suis un " << type << " et je me nomme " << nomFamilier;
}

void Animal::Crier() const
{
	cout << cri;
}

void Animal::Crier(int inFois) const
{
	for (int cpt = 0; cpt < inFois; cpt++)
	{
		cout << cri;
		cout << "\n";
	}
}
void Animal::ChangerNom(string inNom)
{
	nomFamilier = inNom;
}

