#include <iostream>
using namespace std;

///////////////////////////////////////////////////////
//
//	Procédure permettant le calcul puis l'affichage de la moyenne de classe, necessite que les moyennes individuelles aient deja ete calculees
//	Entrée : n de type int, le nombre d'eleves dans la classe, Matrice A de type float pour leurs notes
//	Sortie : Rien
//
///////////////////////////////////////////////////////

void MoyenneClasse(int nb_eleves, float tab[6][29])
{
	int i, j;
	float moy;
	int compteur; //Denominateur du calcul de la moyenne de classe

	compteur = 0;
	moy = 0.0;
	i = 6; //On ne lit que la 7eme colonne, celle ou se trouvent les moyennes des eleves

	for (j = 0; j < nb_eleves; j = j + 1)//Ici, on ne defile que dans le sens des lignes, car les moyennes individuelles sont censees etre deja calculees
	{
		if ((tab[i][j] >= 0.0) && (tab[i][j] <= 20.0))
		{
			moy = moy + tab[i][j];
			compteur = compteur + 1;
		}
	}
	moy = moy / float(compteur);
	cout << "La classe a pour moyenne : " << moy << " avec : " << compteur << " eleves";
}

