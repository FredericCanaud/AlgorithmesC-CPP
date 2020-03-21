#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

void Majuscule(string mot)
{
	int i, longueur;
	longueur = mot.size();
	for (i = 0; i <= longueur - 1; i++)
	{
		mot[i] = toupper(mot[i]);
	}
	cout << mot;
}