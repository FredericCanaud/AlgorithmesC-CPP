#include <iostream>
using namespace std;


/////////////////////////////////////////////////////////
//
//  Entrée : Un nombre entier
//  Sortie : Un nombre entier
//  Fonction qui effectue la somme des n premiers entiers
//
/////////////////////////////////////////////////////////

int SommePremiersNombres(int nombre){
  if (nombre == 0) return 0;
  else return nombre+SommePremiersNombres(nombre-1);
}
/* en non recursif
    for (int i=0; i<n;i++){
        N+=i;
    }
    return N
*/

int main(){
  setlocale (LC_ALL,""); // Afin d'accepter l'UTF-8, et ainsi les accents
  int nombre;

  cout << " Programme Somme Premiers Entiers" << endl << endl << " Saississez un nombre entier positif : ";
  cin >> nombre;
  while (nombre <= 0) {
    cout << " Erreur : Le nombre entier saisi est négatif. Saississez un nombre entier postif :";
    cin >> nombre;
  }
  cout << " La somme des n premiers nombres entiers est égale à " << SommePremiersNombres(nombre);

  return(0);
}
