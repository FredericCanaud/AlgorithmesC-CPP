#ifndef LIVRE_H
#define LIVRE_H

#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;
const int MAX_AUTEURS = 50;

typedef struct {
	string titre;
	int auteur;
	int annee;
	int nb_pages;
}livre;

typedef struct {
	int id_auteur;
	string nom;
	string prenom;
	string nationalite;
	int annee_nais;
	int annee_deces;
}t_auteurs;

typedef struct {
	livre liste_livre[MAX];
	t_auteurs liste_auteurs[MAX_AUTEURS];
	int nb_livres;
	int nb_auteurs;
}biblio;

////////////////////////////////////////////////////////
//
//	Cette fonction permet de rechercher la position d'un
//	livre � partir de son titre.
//	Param�tres d'entr�e : La biblioth�que de type biblio, et le titre du livre.
//	Param�tres de sortie : La position du livre, dans un entier
//
////////////////////////////////////////////////////////

int RecherchePosition(biblio bib, string titre); // Recherche la position d'un livre dans la biblioth�que

////////////////////////////////////////////////////////
//
//	Cette fonction permet de rechercher si un livre
//	existe d�j� ou non.
//	Param�tres d'entr�e : La biblioth�que de type biblioth�que, et le titre du livre.
//	Param�tres de sortie : Un bool�en.
//
////////////////////////////////////////////////////////

int RechercheDoublon(biblio bib, string titre); // Recherche si un doublon existe ou non

////////////////////////////////////////////////////////
//
//	Cette fonction permet de rechercher un auteur �
//	partir de son nom et de son pr�nom.
//	Param�tres d'entr�e : La biblioth�que de type biblioth�que,
//	le nom et le pr�nom du l'auteur saisi.
//	Param�tres de sortie : La position de l'auteur, dans un entier.
//
////////////////////////////////////////////////////////

int RechercheNomAuteur(biblio bib, string nom_auteur, string prenom_auteur);

////////////////////////////////////////////////////////
//
//	Cette fonction permet de rechercher un auteur �
//	partir d'un identifiant.
//	Param�tres d'entr�e : La biblioth�que de type biblioth�que
//	et un entier.
//	Param�tres de sortie : La position de l'auteur, dans un entier.
//
////////////////////////////////////////////////////////

int RechercheNumeroAuteur(biblio bib, int id_auteur);

////////////////////////////////////////////////////////
//
//	Cette fonction permet de retrouver le nombre de livres
//	�crits par un auteur.
//	Param�tres d'entr�e : La biblioth�que et l'identifiant de l'auteur.
//	Param�tres de sortie : L'entier du nombre de livres.
//
////////////////////////////////////////////////////////

int NombreLivreAuteur(biblio bib, int id_auteur);

////////////////////////////////////////////////////////
//
//	Cette proc�dure permet d'ajouter un livre dans la biblioth�que.
//	Param�tres d'entr�e : La biblioth�que de type biblio.
//	Param�tres de sortie : La biblioth�que modifi�e.
//
////////////////////////////////////////////////////////

void AjouterLivre(biblio &bib); // Ajoute le livre saisi � la biblioth�que si possible

////////////////////////////////////////////////////////
//
//	Cette proc�dure permet d'ajouter un auteur dans la biblioth�que.
//	Param�tres d'entr�e : La biblioth�que de type biblio.
//	Param�tres de sortie : La biblioth�que modifi�e.
//
////////////////////////////////////////////////////////

void AjouterAuteur(biblio &bib);

////////////////////////////////////////////////////////
//
//	Cette proc�dure permet de supprimer un livre de la biblioth�que.
//	Param�tres d'entr�e : La biblioth�que de type biblio.
//	Param�tres de sortie : La biblioth�que modifi�e.
//
////////////////////////////////////////////////////////

void SupprimerLivre(biblio &bib); // Supprime le livre saisi � la biblioth�que si possible

////////////////////////////////////////////////////////
//
//	Cette proc�dure permet de supprimer un tauteur de la biblioth�que.
//	Param�tres d'entr�e : La biblioth�que de type biblio
//	et l'identifiant de l'auteur dans un entier.
//	Param�tres de sortie : La biblioth�que modifi�e.
//
////////////////////////////////////////////////////////

void SupprimerAuteur(biblio &bib, int id_auteur);

////////////////////////////////////////////////////////
//
//	Cette proc�dure permet d'afficher un livre � partir
//	d'un titre saisi par l'auteur
//	Param�tres d'entr�e : La biblioth�que de type biblio.
//	Param�tres de sortie : RIEN
//
////////////////////////////////////////////////////////

void RechercherLivre(biblio bib); // Recherche le livre dans la biblioth�que

////////////////////////////////////////////////////////
//
//	Cette proc�dure permet d'afficher la liste des livres
//	de la biblioth�que.
//	Param�tres d'entr�e : La biblioth�que de type biblio.
//	Param�tres de sortie : RIEN
//
////////////////////////////////////////////////////////

void AfficherBiblio(biblio bib); // Afficher tous les livres de la biblio

////////////////////////////////////////////////////////
//
//	Cette proc�dure permet d'afficher le nombre de livres
//	�crits par un auteur, � l'aide de la fonction associ�e.
//	Param�tres d'entr�e : La biblioth�que de type biblio.
//	Param�tres de sortie : RIEN
//
////////////////////////////////////////////////////////

void AfficherNombreLivreAuteur(biblio bib);

////////////////////////////////////////////////////////
//
//	Cette proc�dure permet les informations d'un auteur
//	de la biblioth�que;
//	Param�tres d'entr�e : La biblioth�que de type biblio.
//	Param�tres de sortie : RIEN
//
////////////////////////////////////////////////////////

void AfficherAuteur(biblio bib);

#endif
