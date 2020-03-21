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
//	livre à partir de son titre.
//	Paramètres d'entrée : La bibliothèque de type biblio, et le titre du livre.
//	Paramètres de sortie : La position du livre, dans un entier
//
////////////////////////////////////////////////////////

int RecherchePosition(biblio bib, string titre); // Recherche la position d'un livre dans la bibliothèque

////////////////////////////////////////////////////////
//
//	Cette fonction permet de rechercher si un livre
//	existe déjà ou non.
//	Paramètres d'entrée : La bibliothèque de type bibliothèque, et le titre du livre.
//	Paramètres de sortie : Un booléen.
//
////////////////////////////////////////////////////////

int RechercheDoublon(biblio bib, string titre); // Recherche si un doublon existe ou non

////////////////////////////////////////////////////////
//
//	Cette fonction permet de rechercher un auteur à
//	partir de son nom et de son prénom.
//	Paramètres d'entrée : La bibliothèque de type bibliothèque,
//	le nom et le prénom du l'auteur saisi.
//	Paramètres de sortie : La position de l'auteur, dans un entier.
//
////////////////////////////////////////////////////////

int RechercheNomAuteur(biblio bib, string nom_auteur, string prenom_auteur);

////////////////////////////////////////////////////////
//
//	Cette fonction permet de rechercher un auteur à
//	partir d'un identifiant.
//	Paramètres d'entrée : La bibliothèque de type bibliothèque
//	et un entier.
//	Paramètres de sortie : La position de l'auteur, dans un entier.
//
////////////////////////////////////////////////////////

int RechercheNumeroAuteur(biblio bib, int id_auteur);

////////////////////////////////////////////////////////
//
//	Cette fonction permet de retrouver le nombre de livres
//	écrits par un auteur.
//	Paramètres d'entrée : La bibliothèque et l'identifiant de l'auteur.
//	Paramètres de sortie : L'entier du nombre de livres.
//
////////////////////////////////////////////////////////

int NombreLivreAuteur(biblio bib, int id_auteur);

////////////////////////////////////////////////////////
//
//	Cette procédure permet d'ajouter un livre dans la bibliothèque.
//	Paramètres d'entrée : La bibliothèque de type biblio.
//	Paramètres de sortie : La bibliothèque modifiée.
//
////////////////////////////////////////////////////////

void AjouterLivre(biblio &bib); // Ajoute le livre saisi à la bibliothèque si possible

////////////////////////////////////////////////////////
//
//	Cette procédure permet d'ajouter un auteur dans la bibliothèque.
//	Paramètres d'entrée : La bibliothèque de type biblio.
//	Paramètres de sortie : La bibliothèque modifiée.
//
////////////////////////////////////////////////////////

void AjouterAuteur(biblio &bib);

////////////////////////////////////////////////////////
//
//	Cette procédure permet de supprimer un livre de la bibliothèque.
//	Paramètres d'entrée : La bibliothèque de type biblio.
//	Paramètres de sortie : La bibliothèque modifiée.
//
////////////////////////////////////////////////////////

void SupprimerLivre(biblio &bib); // Supprime le livre saisi à la bibliothèque si possible

////////////////////////////////////////////////////////
//
//	Cette procédure permet de supprimer un tauteur de la bibliothèque.
//	Paramètres d'entrée : La bibliothèque de type biblio
//	et l'identifiant de l'auteur dans un entier.
//	Paramètres de sortie : La bibliothèque modifiée.
//
////////////////////////////////////////////////////////

void SupprimerAuteur(biblio &bib, int id_auteur);

////////////////////////////////////////////////////////
//
//	Cette procédure permet d'afficher un livre à partir
//	d'un titre saisi par l'auteur
//	Paramètres d'entrée : La bibliothèque de type biblio.
//	Paramètres de sortie : RIEN
//
////////////////////////////////////////////////////////

void RechercherLivre(biblio bib); // Recherche le livre dans la bibliothèque

////////////////////////////////////////////////////////
//
//	Cette procédure permet d'afficher la liste des livres
//	de la bibliothèque.
//	Paramètres d'entrée : La bibliothèque de type biblio.
//	Paramètres de sortie : RIEN
//
////////////////////////////////////////////////////////

void AfficherBiblio(biblio bib); // Afficher tous les livres de la biblio

////////////////////////////////////////////////////////
//
//	Cette procédure permet d'afficher le nombre de livres
//	écrits par un auteur, à l'aide de la fonction associée.
//	Paramètres d'entrée : La bibliothèque de type biblio.
//	Paramètres de sortie : RIEN
//
////////////////////////////////////////////////////////

void AfficherNombreLivreAuteur(biblio bib);

////////////////////////////////////////////////////////
//
//	Cette procédure permet les informations d'un auteur
//	de la bibliothèque;
//	Paramètres d'entrée : La bibliothèque de type biblio.
//	Paramètres de sortie : RIEN
//
////////////////////////////////////////////////////////

void AfficherAuteur(biblio bib);

#endif
