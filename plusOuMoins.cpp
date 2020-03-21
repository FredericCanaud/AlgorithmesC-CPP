#include <iostream>
#include <random>
using namespace std;

int main()
{
	void controle(string message, int borneinf, int bornesup, int&n);
	int bornemax;
	bool fin_jeux, fin_partie;
	int nb_aleatoire,nombre;
	
	fin_jeux = false;

	cout << "Jeu du nombre a deviner" << endl << "Objectif : Trouver le nombre se situant entre 0 et le nombre que vous voulez !" << endl;
	cout << "Pour sortir du jeu, il vous suffit d entrer comme nombre : -1" <<endl;
	do
	{
		fin_partie = false;
		controle("Entrez la borne maximum : ", 0, 147683640, bornemax);
		nb_aleatoire = int(rand() % (bornemax + 1));
		do
		{
			controle("Entrez le nombre (entrer -1 pour quitter le jeu) : ", -1, bornemax, nombre);
			if (nombre == -1)
			{
				fin_jeux = true;
			}
			else
			{
				if (nombre == nb_aleatoire)
				{
					fin_partie = true;
					cout << "Bravo ! Vous avez gagne ! Le nombre a trouver etait : " << nb_aleatoire << endl << endl << "Nouvelle partie :" << endl << endl;
				}
				else
				{
					if (nombre < nb_aleatoire)
					{
						cout << "Faux ! Le nombre cherche est plus grand !" << endl;
					}
					else
					{
						cout << "Faux ! Le nombre cherche est plus petit !" << endl;
					}
				}
			}
		} while ((fin_partie == false) && (fin_jeux == false));

	} while (fin_jeux == false);

	cout << "A la prochaine fois !" << endl;

	system("Pause");
}