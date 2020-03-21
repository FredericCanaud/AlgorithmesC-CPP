#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////
//
//	Procédure permettant la saisie de la classe, les eleves sont saisis un par un
//	Entree : nb_eleves de type int, le nombre d'eleves dans la classe, Matrice tab de type float pour leurs notes
//	Sortie : nb_eleves de type int, le nombre d'eleves dans la classe, Matrice tab de type float pour leurs notes
//
///////////////////////////////////////////////////////


void SaisirClasse(int& nb_eleves, float tab[6][29], string nom[29][1])
{
	int i, j;
	cout << " Saisie des eleves et des notes de la classe : " << endl;
	do
	{
		cout << " Saisir le nombre d'eleves (30 maximum) : ";
		cin >> nb_eleves; //Definira le nombre maximum d'eleve pour toutes les procedures
	} while (nb_eleves < 1 || nb_eleves>30);

	for (i = 0; i < nb_eleves; i = i + 1)
	{
			cout << " Saisir le nom de l'eleve numero " << (i + 1) << " " << "( " << i + 1 << "eme eleve ) : ";
			cin >> nom[i][1]; // Saisie des notes;
	}
	cout << " <!> Saisir -1 si l'eleve etait absent <!>" << endl; //Permet de gerer les absence dans un tableau de type float
	for (j = 0; j < nb_eleves; j = j + 1)
	{
		for (i = 0; i < 6; i = i + 1)
		{
			cout << " Saisir les notes de M. / Mme. " << nom[j][1] << " " << "( " << i+1 << "eme note ) : ";
			cin >> tab[i][j]; //Saisie des notes
		}
	}
}

