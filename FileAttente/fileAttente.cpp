// #include <stdio.h>
#include <iostream>
#include "FileAttente.h"
using namespace std;

void afficherListe(maillon* liste)
{
	if (liste == NULL)
	{
		cout << "La liste ne peut pas etre affichee";
		exit(EXIT_FAILURE);
	}
	 
	maillon* actuel = liste;

	do
	{
		cout << (*actuel).numero;
		actuel = (*actuel).suivant;
	} while ((*actuel).suivant != liste);
	cout << (*actuel).numero;
}

int longueurListe(maillon* liste) {

	
	if (liste != NULL){
		if ( (*liste).suivant != NULL )
		{
			int compteur = 0;
			maillon* temp;
			temp = liste;
			while ( (temp != (*liste).suivant )){
				temp = (*temp).suivant;
				compteur = compteur + 1;
			}
			return compteur;
		}
		else{
			return 1;
		}
	}
	else{
		return 0;
	}
}

void rotationListe(maillon* liste) {
	if(liste != NULL)
	{
		liste = (*liste).suivant;
	}
	else{
		cout << "La liste n'existe pas";
		exit(EXIT_FAILURE);
	}

}

void insererMaillon(maillon* liste, int nombre) {
	maillon* nouvMaillon;
	nouvMaillon = new maillon;
	if (longueurListe(liste) == 0) {
		(*liste).numero = nombre;
		(*liste).suivant = liste;
	}
	else {
		(*nouvMaillon).numero = nombre;
		(*nouvMaillon).suivant = liste;
		liste = nouvMaillon;
		while ( (*nouvMaillon).suivant != liste) {
			nouvMaillon = (*nouvMaillon).suivant;
		}
		(*nouvMaillon).suivant = liste;
		liste = nouvMaillon;
	}
}
