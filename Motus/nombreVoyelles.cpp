#include <iostream>
#include <string>
using namespace std;

int NombreVoyelles(string mot)
{
	int	j, k, nb_voy, longueur;
	char voy[20];
	longueur = mot.size();
	nb_voy = 0;
	voy[0] = 'A';
	voy[1] = 'E';
	voy[2] = 'I';
	voy[3] = 'O';
	voy[4] = 'U';
	voy[5] = 'Y';
	voy[6] = 'a';
	voy[7] = 'e';
	voy[8] = 'i';
	voy[9] = 'o';
	voy[10] = 'u';
	voy[11] = 'y';

	for (j = 0; j <= longueur - 1; j++)
	{
		for (k = 0; k <= 11; k++)
		{
			if (mot[j] == voy[k])
			{
				nb_voy = nb_voy + 1;
			}
		}
	}
	return nb_voy;
}


