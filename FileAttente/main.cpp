#include <iostream>
#include "FileAttente.h"
using namespace std;

int main() {

	int choix;
	int nombre;
	maillon* liste;
	liste = new maillon;
	(*liste).suivant = new maillon;
	do {
		system("cls");

		cout << " 1. Afficher la liste \n";
		cout << " 2. Faire une rotation d'un cran \n";
		cout << " 3. Inserer nouveau maillon\n";
		cout << " 4. Savoir le nombre de maillon\n";
		cout << " 5. Quitter \n";
		cout << " Votre choix : ";
		cin >> choix;


		switch (choix) {
		case 1:
			cout << "Liste actuelle : " << endl;
			afficherListe(liste);
			system("pause");
			break;
		case 2:
			rotationListe(liste);
			cout << "Liste après permutation : " << endl;
			afficherListe(liste);
			system("pause");
			break;
		case 3:
			cout << " Quel est le nombre à ajouter ? ";
			cin >> nombre;
			insererMaillon(liste, nombre);
			system("pause");
			break;
		case 4:
			cout << "Il y a actuellement " << longueurListe(liste) << " dans la liste." << endl;
			system("pause");
			break;
		case 5:
			cout << "Au revoir ! \n";
			system("pause");
			break;
		default:
			cout << " Vous avez fait une erreur de saisie\nVeuillez recommencer\n";
			system("pause");
			break;
		}
		cout << "\n";
	} while (choix != 5);
}
