#include "fichier.h"

void main() {
	string nom;
	int choix;

	do
	{
		cout << "1. Creer un fichier" << endl;
		cout << "2. Lire un fichier" << endl;
		cout << "3. Quitter" << endl << endl;

		cin >> choix;

		switch (choix)
		{
		case 1:cout << "Saisir un nom pour le ficher a creer" << endl;
			cin >> nom;
			CreerFich(nom);
			break;
		case 2:cout << "Saisir le nom du fichier que vous voulez consulter" << endl;
			cin >> nom;
			LireFich(nom);
			break;
		case 3: cout << "Au revoir" << endl;
			break;
		default: cout << "Ceci n'est pas une option de choix" << endl;

		}
	} while (choix != 3);
}