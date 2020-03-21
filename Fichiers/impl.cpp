#include "fichier.h"

void CreerFich(string nom) {
	pers p;
	FILE *f;
	char rep;

	f = fopen(nom.c_str(), "w");             // test à envisager ici & syntaxe !
	cout << "Voulez-vous le remplir? (o=oui, n=non): "; cin >> rep;
	while (rep == 'o') {
		cout << "Nom de la personne : "; cin >> p.nom;
		cout << "prenom de la personne :"; cin >> p.prenom;
		fwrite(&p, sizeof(pers), 1, f);
		cout << "Encore une personne (o=oui, n=non):"; cin >> rep;
	}
	fclose(f);
}

void LireFich(string&nom) {
	pers p;
	FILE *f;

	//ouverture
	f = fopen(nom.c_str(), "r");
	if (f == NULL)
	{
		cout << "Cannot open file for reading data" << endl;
		return;
	}

	//boucle de lecture
	fread(&p, sizeof(pers), 1, f);
	while (!feof(f))
	{
		cout << p.nom << " " << p.prenom << endl;
		fread(&p, sizeof(pers), 1, f);
	}

	//fermeture
	fclose(f);
}