#include <iostream>
#include <string>
using namespace std;

int Palindrome(string mot)
{
	bool resultat;
	int count, longueur; // compteur
	
	longueur = mot.size();
	resultat = true;
	count = 0;
	do
	{
		if (mot[count] != mot[longueur - 1 - count])
		{
			resultat = false;
		}
		count = count + 1;
	} while ( (resultat == true) && (count <= (longueur/2)+1) );
	return resultat;
}

