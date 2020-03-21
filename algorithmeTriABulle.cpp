#include <iostream>
using namespace std;

const int TAILLE = 100;
void TriaBulle(int tab[TAILLE], int n)
{
	int i;
	int p;
	bool test;
	int a;

	p = n - 1;
	test = true;;
	while (test = true && p > 0)
	{
		test = false;
		for (i = 0; i < p; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				a = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = a;
				test = true;
			}
		}
		p = p - 1;
	}
}