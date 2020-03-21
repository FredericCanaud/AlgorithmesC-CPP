#include <iostream>;
using namespace std;

int main()
{
	int jour, mois, annee;
	cout << "Saisir le jour souhaite:";
	cin >> jour;
	cout << "Saisir le mois souhaite:";
	cin >> mois;
	cout << "Saisir l'annee souhaitee:";
	cin >> annee;
	if ((mois < 0) || (mois > 12) || (jour < 0) || (jour > 31))
	{
		cout >> "Votre date est incoherente.";
	}
	if (mois = 1) || (mois = 3) || (mois = 5) || (mois = 7) || (mois = 10) || (mois = 12)
	{
		if (jour > 0) && (jour <= 31)
		{
			cout >> "Votre date est coherente.";
		}
	}
	else
	{
		if (mois = 4) || (mois = 6) || (mois = 9) || (mois = 11)
		{
			if (jour > 0) && (jour <= 30)
			{
				cout >> "Votre date est coherente";
			}
		}
		else
		{
			if (jour > 0) && (jour <= 28)
			{
			cout >> "La date est coherente";
			}
			else((annee % 4 = 0) && (annee % 100 != 0)) || (annee % 400 = 0)
			{

				if (jour > 0) && (jour <= 29)
					{
						cout >> "La date est cohérente";
					}
			}
			
		}
	}
	system("Pause");
	return 0;

}