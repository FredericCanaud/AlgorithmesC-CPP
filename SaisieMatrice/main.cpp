#include <iostream>
using namespace std;
const int MAX = 10;

int main()
{
	void Transpos�eMatrice(int t1[MAX][MAX], int t2[MAX][MAX], int n);
	int matA[MAX][MAX], matB[MAX][MAX], n;

	cout << " Entrez l'ordre de la matrice carree A : ";
	cin >> n;
	while (n < 0)
	{
		cout << " Erreur : veuillez entrer une valeur positive." << endl;
		cout << " Entrez l'ordre de la matrice carree A : ";
		cin >> n;
	}
	Transpos�eMatrice(matA, matB, n);

	system("Pause");
	return 0;
}