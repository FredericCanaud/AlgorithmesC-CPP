#ifndef EXO2_H
#define EXO2_H

#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

typedef struct {
	string titre;
	string auteur;
	int annee;
	int nb_pages;
}livre;

typedef struct {
	livre livres[MAX];
	int nb_livres;
}biblio;

#endif
