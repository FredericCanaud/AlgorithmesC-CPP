#include <stdio.h>
#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////
//
//  Fonction qui retourne récursivement le PGCD de deux nombres entiers
//  Entrée : Deux nombres entiers
//  Sortie : Un nombre entier
//  Condition d'arrêt : Si a = 1 ou b = 1 alors retourne 1
//  Relation de récurrence :
//
///////////////////////////////////////////////////////////////////////


int PGCDRecursif(int nombre1, int nombre2){
  if (nombre1 == nombre2) {
    return nombre1;
  } else {
    if (nombre1 >= nombre2) {
      return PGCDRecursif(nombre1 - nombre2, nombre2);
    } else {
      return PGCDRecursif(nombre2 - nombre1, nombre1);
    }
  }
}

int main() {
  int nombre1,nombre2,resultat;
  cout <<"Programme PGCD Recursif"<< endl << endl << " Saississez un nombre entier positif : ";
  cin >> nombre1;
  while (nombre1 < 0) {
        cout << " Erreur : Le nombre entier saisi est inférieur à 1. Saississez un autre nombre  :";
        cin >> nombre1;
    }
  cout <<" Saississez un deuxieme nombre entier positif : ";
  cin >> nombre2;
  while (nombre2 < 0) {
        cout << " Erreur : Le nombre entier saisi est inférieur à 1. Saississez un autre nombre  :";
        cin >> nombre2;
    }
  resultat = PGCDRecursif(nombre1,nombre2);
  cout <<"  Le PGCD de " << nombre1 <<" et "<< nombre2 <<" est "<< resultat;
  return 0;
}
