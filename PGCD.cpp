#include <iostream>;
using namespace std;

int main()
{
	int nb_1, nb_2;
	cout << "Saisir le premier nombre:";
	cin >> nb_1;
	while (nb_1 <= 0)
	{
		cout << "La valeur du premier nombre saisi est negatif ou nul." << endl;
		cout << "Veuillez resaisir le premier nombre : ";
		cin >> nb_1;
	}
	cout << "Saisir le deuxieme nombre:";
	cin >> nb_2;
	while (nb_2 <= 0)
	{
		cout << "La valeur du deuxieme nombre saisi est negatif ou nul." << endl;
		cout << "Veuillez resaisir le deuxieme nombre : ";
		cin >> nb_2;
	}
	if (nb_1 == nb_2)
	{
		cout << "Les deux nombres sont egaux." << endl;
	}
	while (nb_1 != nb_2)
	{
		if (nb_1 > nb_2)
		{
			nb_1 = nb_1 - nb_2;
		}
		else
		{
			nb_2 = nb_2 - nb_1;
		}
	}
	cout << "Le PGCD est: " << nb_1  << endl;
	system("PAUSE");
	return 0;
}