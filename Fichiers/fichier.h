#pragma once
#pragma once
#ifndef FICHIER_H
#define FICHIER_H

#include <iostream>
#include <string>
#pragma warning(disable:4996)

using namespace std;

typedef struct {
	char nom[30];
	char prenom[30];
}
pers;

void CreerFich(string nom);

void LireFich(string&nom);


#endif