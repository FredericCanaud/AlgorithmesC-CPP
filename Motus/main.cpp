#include <iostream>
#include <string>
using namespace std;

const int MAX_NOM = 50;

int main()
{
	void Majuscule(string nom[MAX_NOM], int nb_nom);
	void Palindrome(string nom[MAX_NOM], int nb_nom);
	void NombreVoyelles(string nom[MAX_NOM], int nb_nom);
	void SaisieNoms(string nom[MAX_NOM], int &nb_nom);
	string nom[MAX_NOM];
	int choix;
	int nb_nom;
	string mot;
	nb_nom = 0;
	cout << " Programme noms :" << endl << endl;
	do {
		cout << " 1 - Saisir le tableau de noms." << endl;
		cout << " 2 - Afficher le nombre de voyelles de chaque nom." << endl;
		cout << " 3 - Verifier si les noms sont des palindromes." << endl;
		cout << " 4 - Mettre toutes les lettres de chaque mot en majuscules." << endl;
		cout << " 5 - Quitter." << endl << endl;
		cout << " Entrez votre choix : ";
		cin >> choix;
		cout << endl;
		switch (choix)
		{
		case 1:
			SaisieNoms(nom, nb_nom);
			cout << endl;
			break;
		case 2:
			if (nb_nom == 0)
			{
				cout << " Erreur : il n'y a aucun nom saisi dans le tableau. " << endl << endl;
				break;
			}
			else
			{
				NombreVoyelles(nom, nb_nom);
				cout << endl;
				break;
			}
		case 3:
			if (nb_nom == 0)
			{
				cout << " Erreur : il n'y a aucun nom saisi dans le tableau. " << endl << endl;
				break;
			}
			else
			{
				Palindrome(nom, nb_nom);
				cout << endl;
				break;
			}
		case 4:
			if (nb_nom == 0)
			{
				cout << " Erreur : il n'y a aucun nom saisi dans le tableau. " << endl << endl;
				break;
			}
			else
			{
				Majuscule(nom, nb_nom);
				cout << endl;
				break;
			}
		case 5:
			cout << " Au revoir !" << endl;
			break;
		default:
			cout << " Erreur : choix." << endl;
		}
	} while (choix != 5);
	system("PAUSE");
}