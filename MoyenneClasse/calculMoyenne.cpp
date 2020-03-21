#include <iostream>
#include <string>
using namespace std;

///////////////////////////////////////////////////////
//
//	Procédure permettant de calculer les moyenens individuelles des eleves, on doit indiquer son numero de 1 a 30, la decrementation de 1 est automatique
//	Entree : nb_eleves de type int, le nombre d'eleves dans la classe, Matrice tab de type float pour leurs notes
//	Sortie : Matrice tab de type float pour leurs notes
//
///////////////////////////////////////////////////////

void CalculMoyenne(int nb_eleves, float tab[6][29], string nom[29][1])
{
	int i, j; 
	float moy;
	int compteur; // Denominateur du calcul de la moyenne
	int abs; // Compteur d'absence

	abs = 0; // Initialisation des variables pour eviter les erreurs
	compteur = 0;
	moy = 0.0;

	cout << " De quel eleve voulez-vous la moyenne ? : ";
	cin >> j;
	cout << endl;
	j = j - 1;
	if (j < nb_eleves)
	{
		for (i = 0; i < 6; i = i + 1)
		{
			if (tab[i][j] != -1.0) // On ignore les absences
			{
				moy = moy + tab[i][j]; // Ajout des notes
				compteur = compteur + 1; // Denominateur du calcul de la moyenne
			}
			else
			{
				abs = abs + 1; // Compteur d'absences
			}
		}

		if (abs == 6)
		{
			cout << " M. / Mme. " << nom[j][1] << " n'a pas de moyenne car il a " << abs << " absences" << endl;
		}
		else
		{
			moy = moy / float(compteur); // Calcul de la moyenne
			tab[6][j] = moy; // Ici, on stocke la moyenne dans la 7eme colonne pour le calcul de la moyenne de classe dans une autre procedure.
			cout << " M. / Mme. " << nom[j][1] << " a pour moyenne : " << moy << " avec " << compteur << " notes et " << abs << " absence(s)" << endl;
		}
	}
	else
	{
		cout << " Erreur : Cet eleve n'existe pas dans le tableau." << endl;
	}
}
