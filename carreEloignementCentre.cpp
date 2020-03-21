#include <iostream>
using namespace std;

int main()
{
	int ligne; // compteur du nombre de lignes à afficher
	int chiffre; // compteur des nombres à afficher
	int nombre; // nombre saisi par l'utilisateur
	int limite; // copie du nombre initial saisi par l'utilisateur

	cout << "Entrez le nombre : ";
	cin >> nombre;
	limite = nombre;

	for (ligne = nombre ; ligne >= 0; ligne--) 
	{
			for (chiffre = limite; chiffre >= 0; chiffre--)
			{
				if ((chiffre + nombre >= 0) && (chiffre + nombre <= 9))
				{
					cout << " " << chiffre + nombre << " ";
				}
				else
				{
					cout << chiffre + nombre << " ";
				}
			}
			for (chiffre = 1; chiffre <= limite; chiffre++)
			{
				if ((chiffre + nombre >= 0) && (chiffre + nombre <= 9))
				{
					cout << " " << chiffre + nombre << " ";
				}
				else
				{
					cout << chiffre + nombre << " ";
				}
			}
			cout << endl;
			nombre = nombre - 1;
	}
	nombre = 1;
	for (ligne = 1; ligne <= limite; ligne++)
	{
		for (chiffre = limite; chiffre >= 0; chiffre--)
		{
			if ((chiffre + nombre >= 0) && (chiffre + nombre <= 9))
			{
				cout << " " << chiffre + nombre << " ";
			}
			else
			{
				cout << chiffre + nombre << " ";
			}
		}
		for (chiffre = 1; chiffre <= limite; chiffre++)
		{
			if ((chiffre + nombre >= 0) && (chiffre + nombre <= 9))
			{
				cout << " " << chiffre + nombre << " ";
			}
			else
			{
				cout << chiffre + nombre << " ";
			}
		}
		cout << endl;
		nombre = nombre + 1;
	}
	system("Pause");
	return (0);
}