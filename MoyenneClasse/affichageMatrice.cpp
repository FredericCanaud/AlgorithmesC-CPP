#include <iostream>
using namespace std;
const int MAX = 29;
const int MAX2 = 7;

void AffichageMatrice(double mat[MAX][MAX2], int eleve)
{
	int i;
	int j;
	cout << "Affichage du tableau des notes : " << endl << endl;
	for (i = 0; i < eleve; i++)
	{
		for (j = 0; j <= MAX2; j++)
		{

			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

}