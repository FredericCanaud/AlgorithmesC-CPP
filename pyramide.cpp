///////////////////////////////////////////////////////
//
// Fonction permettant d'afficher une pyramide d'étoiles
// Entrée : Un nombre entier
// Sortie : Des chaînes de caractères étoiles en ligne
//
// Cette fonction affiche, en fonction du nombre de
// lignes saisi, une pyramide d'étoile
//
///////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

void pyramide(int n)
{
	int a; // compteur de la boucle principale de la fonction
	int b; // compteur de la boucle d'affichage des espaces
	int c; // compteur de la boucle d'affichage des etoiles
	int j; // nombre d'etoile a afficher par ligne
	int k; // nombre d'espace a afficher par ligne


	j = 1; // la première ligne est composée d'une étoile
	k = n; // à la première ligne est composée de n espace avant la 1ere étoile

	for (a = 1; a <= n; a++)
	{
		for(b = 0; b < k; b + 0)
		{
			cout << ' ';
			b = b + 1;
		}
		for(c = 0; c < j; c + 0)
		{
			cout << '*';
			c = c + 1;
		}
		cout << endl;
		j = j + 2; // à la prochaine ligne, il y a deux étoiles de plus
		k = k - 1; // à la prochaine ligne, il y a un espace de moins
	}
	
}
