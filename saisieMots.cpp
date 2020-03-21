#include <iostream>
#include <string>
using namespace std;
const int MAX_NOM = 50;

void SaisieNoms(string nom[MAX_NOM], int &nb_nom)
{
	char choice = 'n';
	cout << " Saisie des noms : " << endl << endl;
	do
	{
		cout << " Encore un nom ? ('o' pour oui, sinon autre chose pour quitter) : ";
		cin >> choice;
		if (choice == 'o')
		{
			cout << " Entrez le " << nb_nom+1 << "eme nom : ";
			cin >> nom[nb_nom];
			nb_nom = nb_nom + 1;
		}
	} while (choice == 'o');
}

