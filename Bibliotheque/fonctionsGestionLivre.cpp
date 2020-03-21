#include <iostream>
#include <string>
#include "Livre.h"

int RecherchePosition(biblio bib, string titre) // Recherche la position d'un livre dans la biblioth�que
{
	int i;
	int num;
	num = -1;
	for (i = 0; i <= bib.nb_livres - 1; i++)
	{
		if (titre == bib.liste_livre[i].titre)
		{
			num = i;
		}
	}
	return num;
}

int RechercheDoublon(biblio bib, string titre) // Recherche si un doublon existe ou non
{
	int i;
	bool test;
	test = false;
	for (i = 0; i <= bib.nb_livres - 1; i++)
	{
		if (titre == bib.liste_livre[i].titre)
		{
			test = true;
		}
	}
	return test;
}

int RechercheNomAuteur(biblio bib, string nom_auteur, string prenom_auteur)
{
	int i;
	int res = -1;
	for (i = 0; i <= bib.nb_auteurs; i++)
	{
		if ( (nom_auteur == bib.liste_auteurs[i].nom) && (prenom_auteur == bib.liste_auteurs[i].prenom) )
		{
			res = i;
		}
	}
	return res;
}

int RechercheNumeroAuteur(biblio bib, int id_auteur)
{
	int i, j;
	int res = -1;
	for (i = 0; i <= bib.nb_auteurs; i++)
	{
		for (j = 0; j <= bib.nb_livres; j++)
		{
			if (bib.liste_auteurs[i].id_auteur == bib.liste_livre[i].auteur)
			{
				res = i;
			}
		}
	}
	return res;

}
int NombreLivreAuteur(biblio bib, int id_auteur)
{
	int i; 
	int count = -1;
	for (i = 0; i <= bib.nb_auteurs; i++)
	{
		if (bib.liste_livre[i].auteur == bib.liste_auteurs[i].id_auteur)
		{
			count = count + 1;
		}
	}
	return count;
}

void AfficherNombreLivreAuteur(biblio bib)
{
	int i;
	string nom_auteur, prenom_auteur;
	cout << " Entrez le nom de l'auteur : ";
	cin >> nom_auteur;
	cout << " Entrez le prenom de l'auteur : ";
	cin >> prenom_auteur;
	i = RechercheNomAuteur(bib, nom_auteur, prenom_auteur);
	if (i == -1)
	{
		cout << " Cet auteur n'existe pas dans la biblioth�que.";
		system("PAUSE");
	}
	else
	{
		cout << " L'auteur " << bib.liste_auteurs[i].prenom << " " << bib.liste_auteurs[i].nom << " a �crit " << NombreLivreAuteur(bib, bib.liste_auteurs[i].id_auteur) << " livres pr�sents dans la biblioth�que. " << endl;
		system("PAUSE");
	}
}
void AfficherAuteur(biblio bib)
{
	string nom_auteur, prenom_auteur;
	int i;
	cout << " Entrez le nom de l'auteur : ";
	cin >> nom_auteur;
	cout << " Entrez le pr�nom de l'auteur : ";
	cin >> prenom_auteur;
	i = RechercheNomAuteur(bib, nom_auteur, prenom_auteur);
	if (i == -1)
	{
		cout << " Cet auteur n'existe pas dans la biblioth�que." << endl;
		system("PAUSE");
	}
	else
	{
		cout << " " << prenom_auteur << " " << nom_auteur << " existe dans la biblioth�que :" << endl;
		cout << " Nationalit� : " << bib.liste_auteurs[i].nationalite << endl;
		cout << " Ann�e de naissance : " << bib.liste_auteurs[i].annee_nais << endl;
		if (bib.liste_auteurs[i].annee_deces != NULL)
		{
			cout << " Ann�e de d�c�s : " << bib.liste_auteurs[i].annee_deces << endl;
		}
	}
	system("PAUSE");

}
void AjouterLivre(biblio &bib) // Ajoute le livre saisi � la biblioth�que si possible
{
	if (bib.nb_livres < MAX)
	{
		cout << " Entrez le titre du livre : ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, bib.liste_livre[bib.nb_livres].titre);
		if (RechercheDoublon(bib, bib.liste_livre[bib.nb_livres].titre))
		{
			cout << endl << " Erreur : Ce livre existe d�j� !" << endl << endl;
			system("PAUSE");
		}
		else
		{
			AjouterAuteur(bib);
			cout << " Ann�e de sortie du livre : ";
			cin >> bib.liste_livre[bib.nb_livres].annee;
			cout << " Nombre de pages du livre : ";
			cin >> bib.liste_livre[bib.nb_livres].nb_pages;
			bib.nb_livres = bib.nb_livres + 1;
			cout << " Le livre a �t� ajout� � la biblioth�que." << endl;
			system("PAUSE");
		}
	}
	else
	{
		cout << " La biblioth�que est pleine. Retirez un livre pour en ajouter un nouveau." << endl;
		system("PAUSE");
	}
	cout << endl;
}

void AjouterAuteur(biblio &bib)
{
	string nom_auteur, prenom_auteur;

	if (bib.nb_auteurs < MAX_AUTEURS)
	{
		cout << " Entrez le nom de l'auteur : ";
		cin >> nom_auteur;
		cout << " Entrez le pr�nom de l'auteur : ";
		cin >> prenom_auteur;
		if (RechercheNomAuteur(bib, nom_auteur, prenom_auteur) == -1)
		{
			bib.liste_auteurs[bib.nb_auteurs].nom = nom_auteur;
			bib.liste_auteurs[bib.nb_auteurs].prenom = prenom_auteur;
			bib.liste_auteurs[bib.nb_auteurs].id_auteur = bib.nb_auteurs;

			cout << " Entrez le nationalit� de l'auteur : ";
			cin >> bib.liste_auteurs[bib.nb_auteurs].nationalite;
			cout << " Entrez l'ann�e de naissance de l'auteur : ";
			cin >> bib.liste_auteurs[bib.nb_auteurs].annee_nais;
			cout << " Entrez l'ann�e de d�c�s de l'auteur (entrez une ann�e inf�rieure � celle de la naissance si l'auteur est vivant) : ";
			cin >> bib.liste_auteurs[bib.nb_auteurs].annee_deces;
			if (bib.liste_auteurs[bib.nb_auteurs].annee_deces < bib.liste_auteurs[bib.nb_auteurs].annee_nais)
			{
				bib.liste_auteurs[bib.nb_auteurs].annee_deces = NULL;
			}
			bib.liste_livre[bib.nb_livres].auteur = bib.nb_auteurs;
			bib.nb_auteurs = bib.nb_auteurs + 1;
		}
		else
		{
			cout << " L'auteur est d�j� pr�sent dans la biblioth�que. Il est reli� au livre." << endl;
			bib.liste_livre[bib.nb_livres].auteur = RechercheNomAuteur(bib, nom_auteur, prenom_auteur);
		}
	}
	else
	{
		cout << " Erreur : Le nombre d'auteurs est d�pass�." << endl;
		system("PAUSE");
	}
}

void SupprimerLivre(biblio &bib) // Supprime le livre saisi � la biblioth�que si possible
{
	int i, j;
	char supprimer_livre;
	char supprimer_auteur;
	string titre;
	string nom_auteur;
	if (bib.nb_livres == 0)
	{
		cout << " Erreur : La biblioth�que est vide !" << endl << endl;
		system("PAUSE");
	}
	else
	{
		do
		{
			cout << " Supprimer un livre (Entrez 'o' pour oui) : ";
			cin >> supprimer_livre;
			if (supprimer_livre == 'o')
			{
				cout << " Entrez le titre du livre : ";
				cin >> titre;
				i = RecherchePosition(bib, titre);
				if (i == -1)
				{
					cout << " Erreur : Ce livre n'est pas dans la biblioth�que." << endl;
					system("PAUSE");
				}
				else
				{
					if (NombreLivreAuteur(bib, bib.liste_livre[i].auteur) == 1)
					{
						cout << " Ce livre �tait le seul de l'auteur en question. Souhaitez-vous supprimer �galement cet auteur ? ('o' pour oui) : ";
						cin >> supprimer_auteur;
						if (supprimer_auteur == 'o')
						{
							SupprimerAuteur(bib, RechercheNumeroAuteur(bib, bib.liste_livre[i].auteur));
							cout << " L'auteur a bien �t� supprim�." << endl;
						}
					}
					for (j = i; j <= bib.nb_livres - 1; j++)
					{
						bib.liste_livre[j] = bib.liste_livre[j + 1];
					}
					bib.nb_livres = bib.nb_livres - 1;
					cout << " Le livre a bien �t� supprim�." << endl;
					system("PAUSE");
				}
			}
		} while (supprimer_livre == 'o');
		cout << endl;
	}
}

void SupprimerAuteur(biblio &bib, int id_auteur)
{
	int i;
	for (i = id_auteur; i <= bib.nb_auteurs - 1; i++)
	{
		bib.liste_livre[i] = bib.liste_livre[i + 1];
	}
	bib.nb_livres = bib.nb_livres - 1;
}

void RechercherLivre(biblio bib)
{
	string titre_livre;
	
	if (bib.nb_livres == 0)
	{
		cout << " Erreur : La biblioth�que est vide !" << endl << endl;
		system("PAUSE");
	}
	else
	{
		cout << " Entrez le livre que vous recherchez : ";
		cin >> titre_livre;
		if ((RecherchePosition(bib, titre_livre) == -1))
		{
			cout << " Livre non trouv� dans la biblioth�que." << endl << endl;
			system("PAUSE");
		}
		else
		{
			cout << " Livre trouv� ! Il s'agit du " << (RecherchePosition(bib, titre_livre)) + 1 << "�me livre : " << endl << endl;
			cout << " Titre du livre : " << bib.liste_livre[(RecherchePosition(bib, titre_livre))].titre << endl;
			cout << " Auteur du livre : " << bib.liste_auteurs[bib.liste_livre[(RecherchePosition(bib, titre_livre))].auteur].prenom << " " << bib.liste_auteurs[bib.liste_livre[(RecherchePosition(bib, titre_livre))].auteur].nom << endl;
			cout << " Ann�e de parution du livre : " << bib.liste_livre[(RecherchePosition(bib, titre_livre))].annee << endl;
			cout << " Nombre de pages du livre : " << bib.liste_livre[(RecherchePosition(bib, titre_livre))].nb_pages << endl << endl;
			system("PAUSE");
		}
	}
	
}

void AfficherBiblio(biblio bib) // Afficher tous les livres de la biblio
{
	int i;
	if (bib.nb_livres != 0)
	{
		for (i = 0; i <= bib.nb_livres - 1; i++)
		{
			cout << " Titre du livre : ";
			cout << bib.liste_livre[i].titre << endl;
			cout << " Auteur du livre : ";
			cout << bib.liste_auteurs[bib.liste_livre[i].auteur].nom << " " << bib.liste_auteurs[bib.liste_livre[i].auteur].prenom << endl;
			cout << " Ann�e de sortie du livre : ";
			cout << bib.liste_livre[i].annee << endl;
			cout << " Nombre de pages du livre : ";
			cout << bib.liste_livre[i].nb_pages << endl;
			system("PAUSE");
		}
	}
	else
	{
		cout << " La biblioth�que est vide." << endl << endl;
		system("PAUSE");
	}
}
