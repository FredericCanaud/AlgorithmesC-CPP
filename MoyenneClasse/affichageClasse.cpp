#include <iostream>
#include <string>
using namespace std;


///////////////////////////////////////////////////////
//
//	Procédure permettant l'affichage de la classe, les eleves sont affichés un par un, d'abord leur numero puis leurs 6 notes
//	Entree : nb_eleves de type int, le nombre d'eleves dans la classe, Matrice tab de type float pour les notes
//	Sortie : Rien
//
///////////////////////////////////////////////////////

void AfficherClasse(int nb_eleves, float tab[6][29], string nom[29][1])
{
	int i, j; //i pour les notes, j pour les eleves

	cout << " -1 signifie une absence," << endl;

	for (j = 0; j < nb_eleves; j = j + 1) //Affichera tous les eleves chacun leur tour
	{
		cout << " Note de M./Mme." << nom[j][1] << ":" << endl << " ";
		for (i = 0; i < 6; i = i + 1)
		{
			cout << tab[i][j] << " "; //Affichage des notes unes a unes pour chaque eleve
		}
		cout << endl;
	}
}