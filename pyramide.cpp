///////////////////////////////////////////////////////
//
// Fonction permettant d'afficher une pyramide d'�toiles
// Entr�e : Un nombre entier
// Sortie : Des cha�nes de caract�res �toiles en ligne
//
// Cette fonction affiche, en fonction du nombre de
// lignes saisi, une pyramide d'�toile
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


	j = 1; // la premi�re ligne est compos�e d'une �toile
	k = n; // � la premi�re ligne est compos�e de n espace avant la 1ere �toile

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
		j = j + 2; // � la prochaine ligne, il y a deux �toiles de plus
		k = k - 1; // � la prochaine ligne, il y a un espace de moins
	}
	
}
