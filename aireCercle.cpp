//calcul et affichage de l'aire d'un cercle à partir du rayon
#include <iostream>
using namespace std;

int main()
{
	double rayon,	// rayon du cercle saisi
	aire;	// aire calculée

	//saisie du rayon
	cout << " Saisir rayon du cercle ";
	cin >> rayon;

	//calcul de l'aire
	aire = 3.14159*rayon*rayon;

	//affichage du résultat
	cout << "l'aire du cercle vaut : " << aire << endl;
	cin >> rayon;

	return 0;

} //fin aireCercle