#include <iostream>;
using namespace std;

void main()
{
	int jour, mois, annee;
	int jour_semaine;
	int i;
	void ControleSaisie(string message, int borneinf, int bornesup, int&n);

	cout << " Programme Date - Jour de la semaine" << endl << endl;
	ControleSaisie(string (" Entrez le jour souhaite : "), 1, 31, jour);
	ControleSaisie(string (" Entrez le mois souhaite : "), 1, 12, mois);
	ControleSaisie(string(" Entrez l annee souhaitee : "), 2000, 999999, annee);

	i = 2000;
	jour_semaine = 4;

		if (annee > 2000)
		{
			for (i = 2000; i < annee; i++)
			{
				if ((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0)))
				{
					jour_semaine = jour_semaine + 366;
				}
				else
				{
					jour_semaine = jour_semaine + 365;
				}
			}
		}
		if ((annee % 400 == 0) || ((annee % 4 == 0) && (annee % 100 != 0)))
		{
			if (((mois == 2) && (jour == 29)) || (mois > 2))
			{
				jour_semaine = jour_semaine + 1;
			}
		}
		switch (mois)
			{
			case 1:
				jour_semaine = jour_semaine + jour;
				break;
			case 2:
				jour_semaine = jour_semaine + 31 + jour;
				break;
			case 3:
				jour_semaine = jour_semaine + 31 + 28 + jour;
				break;
			case 4:
				jour_semaine = jour_semaine + 31 + 28 + 31 + jour;
				break;
			case 5:
				jour_semaine = jour_semaine + 31 + 28 + 31 + 30 + jour;
				break;
			case 6:
				jour_semaine = jour_semaine + 31 + 28 + 31 + 30 + 31 + jour;
				break;
			case 7:
				jour_semaine = jour_semaine + 31 + 28 + 31 + 30 + 31 + 30 + jour;
				break;
			case 8:
				jour_semaine = jour_semaine + 31 + 28 + 31 + 30 + 31 + 30 + 31 + jour;
				break;
			case 9:
				jour_semaine = jour_semaine + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + jour;
				break;
			case 10:
				jour_semaine = jour_semaine + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + jour;
				break;
			case 11:
				jour_semaine = jour_semaine + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + jour;
				break;
			case 12:
				jour_semaine = jour_semaine + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + jour;
				break;
			}
		switch (jour_semaine % 7)
		{
		case 0:
			cout << " Le " << jour << "/" << mois << "/" << annee << " est un lundi." << endl;
			break;
		case 1:
			cout << " Le " << jour << "/" << mois << "/" << annee << " est un mardi." << endl;
			break;
		case 2:
			cout << " Le " << jour << "/" << mois << "/" << annee << " est un mercredi." << endl;
			break;
		case 3:
			cout << " Le " << jour << "/" << mois << "/" << annee << " est un jeudi." << endl;
			break;
		case 4:
			cout << " Le " << jour << "/" << mois << "/" << annee << " est un vendredi." << endl;
			break;
		case 5:
			cout << " Le " << jour << "/" << mois << "/" << annee << " est un samedi." << endl;
			break;
		case 6:
			cout << " Le " << jour << "/" << mois << "/" << annee << " est un dimanche." << endl;
			break;
		}
	system("Pause");
}