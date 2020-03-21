#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int secondes;
	cout << "Entrez le nombre de secondes a convertir : ";
	cin >> secondes;
	if (secondes < 0)
	{
		cout << "Erreur : Votre nombre de secondes est negatif";
	}
	else
	{
		cout << secondes << " seconde(s) representent:" << endl;
		// cout << "En temps total : " << int(secondes / 31536000) << " annees, " << int((secondes % 31536000)/26784000) << " mois, " << int((secondes % 31536000)/604800) << " semaines, " << int((secondes % 31536000)/3600) << " heures, " << int(((secondes % 31536000)/60)) << " minutes, " << int((secondes - secondes)) << " secondes !" << endl;
		cout << "- " << float(secondes / 60) << " minute(s)" << endl;
		cout << "- " << float(secondes / 3600) << " heure(s)" << endl;
		cout << "- " << float(secondes / 604800) << " semaine(s)" << endl;
		cout << "- " << float(secondes / 2678400) << " mois" << endl;
		cout << "- " << float(secondes / 31536000) << " annee(s)" << endl;
	}
	system("PAUSE");
	return 0;
}