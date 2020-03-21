#include <random>
#include <time.h>
#include <iostream>
using namespace std;

const int TAILLE = 100;
void Aleatoire(int tab[TAILLE], int &n)
{
	int i;
	cout << "Veuillez saisir la taille de votre tableau ";
	cin >> n;
	for (i = 0; i <= n - 1; i = i + 1)
	{
		time(NULL);
		tab[i] = rand() % 101;
	}
}
