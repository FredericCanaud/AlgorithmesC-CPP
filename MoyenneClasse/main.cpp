#include <iostream>
#include <string>
using namespace std;

int main()
{
	float tab[6][29]; // 7 colonnes pour 6 notes + la moyenne, 30 lignes pour 30 eleves
	string nom[29][1]; // Tableau d'une colonne qui liste le nom des élèves
	void SaisirClasse(int& nb_eleves, float tab[6][29], string nom[29][1]);
	void AfficherClasse(int nb_eleves, float tab[6][29], string nom[29][1]);
	void CalculMoyenne(int nb_eleves, float tab[6][29], string nom[29][1]);
	void MoyenneClasse(int nb_eleves, float tab[6][29]);
	int nb_eleves;
	int choix;

	cout << " Programme Classe : " << endl << endl;
	SaisirClasse(nb_eleves, tab, nom);
	do
	{
		cout << endl << " Menu : " << endl;
		cout << endl <<" 1 - Affichage du tableau des notes sans les moyennes"<<endl;
		cout << " 2 - Affichage de la moyenne d'un eleve"<<endl;
		cout << " 3 - Affichage de la moyenne de classe"<<endl;
		cout << " 4 - Quitter"<<endl;
		cin >> choix;
		cout << endl;
		switch(choix) // Menu qui s'affichera en boucle sauf si le choix est 4 "quitter"
		{
		case 1: AfficherClasse(nb_eleves, tab, nom);
			break;
		case 2 : CalculMoyenne(nb_eleves, tab, nom);
			break;
		case 3 : MoyenneClasse(nb_eleves, tab);
			break;
		default: cout<< " Erreur de saisie";
			break;
		}
	} while (choix != 4);
}





