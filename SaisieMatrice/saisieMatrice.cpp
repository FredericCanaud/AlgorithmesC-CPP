#include <iostream>
using namespace std;
const int MAX = 10;

void TransposéeMatrice( int matA[MAX][MAX], int matB[MAX][MAX], int n)
{
	int i;
	int j;

	for (int i = 0; i <= n-1; i++)
	{
		for (j = 0; j <= n-1; j++)
		{
			cout << " Entrez le coefficient A(" << i << "," << j << ") : " ;
			cin >> matA[i][j];
		}
	}
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
		{
			matB[i][j] = matA[j][i];
		}
	}
	cout << endl << " Matrice transposee de A : " << endl << " ";
	for (i = 0; i <= n - 1; i++)
	{
		for (j = 0; j <= n - 1; j++)
		{
			cout << matB[i][j] << " ";
		}
		cout << endl << " ";
	}
}

