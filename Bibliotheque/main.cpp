#include <iostream>
#include <string>
#include "Livre.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int choix;
	biblio bib;
	bib.nb_livres = 0;
	bib.nb_auteurs = 0;

	cout << " Programme bibliothèque" << endl << endl;
	do
	{
		cout << " Menu principal " << endl << endl;
		cout << " Voici les différentes opérations possibles : " << endl << endl;
		cout << " 1 - Afficher les livres de la bibliothèque. " << endl;
		cout << " 2 - Ajouter un nouveau livre. " << endl;
		cout << " 3 - Supprimer un livre." << endl;
		cout << " 4 - Afficher un livre." << endl;
		cout << " 5 - Afficher un auteur." << endl;
		cout << " 6 - Afficher le nombre de livres écrits par un auteur." << endl;
		cout << " 7 - Quitter." << endl << endl;
		cout << " Saissisez votre choix : ";
		cin >> choix;
		cout << endl;
		switch (choix)
		{
		case 1:
			AfficherBiblio(bib);
			system("CLS");
			break;
		case 2:
			AjouterLivre(bib);
			system("CLS");
			break;
		case 3:
			SupprimerLivre(bib);
			system("CLS");
			break;
		case 4:
			RechercherLivre(bib);
			system("CLS");
			break;
		case 5:
			AfficherAuteur(bib);
			system("CLS");
			break;
		case 6:
			AfficherNombreLivreAuteur(bib);
			system("CLS");
			break;
		case 7:
			cout << " Au revoir !" << endl;
			break;
		default: 
			cout << " Erreur : Choix incorrect." << endl << endl;
			break;
		}
	} while (choix != 7);
}