#include <iostream>
#include <string>
using namespace std;

void controle(string message, int borneinf, int bornesup, int&n)
{
	cout << message;
	cin >> n;
	while (n > bornesup || n < borneinf)
	{
		cout << "Erreur : Veuillez saisir une valeur entre "<<borneinf << " et " << bornesup << " : ";
		cin >> n;
	}
}