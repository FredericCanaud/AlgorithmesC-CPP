#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////
//
//  Entrée : Un nombre réel, une puissance entière
//  Sortie : Un nombre réel
//  Fonction qui calcule la n-ieme puissance d'un nombre
//
/////////////////////////////////////////////////////////

float PuissanceRecursive(float nombre, int puissance){

    float temp = 0;
    if (puissance == 0) return 1;
    else
    {
        if (puissance%2 == 0) {
            temp = PuissanceRecursive(nombre, puissance/2);
            return temp*temp;
        }
        else
        {
            temp = PuissanceRecursive(nombre,(puissance-1)/2);
            return nombre*temp*temp;
        }
    }
}

/* En iteratif

   float resultat = 0;
   while (puissance > 1){
       resultat = resultat*nombre;
       puissance -= 1;

   }
   return resultat;
}
*/

int main(){
    setlocale (LC_ALL,""); // Afin d'accepter l'UTF-8, et ainsi les accents
    float nombre;
    int puissance;

    cout << " Programme Puissance Récursive" << endl << endl << " Saississez un nombre réel : ";
    cin >> nombre;
    cout << " Saississez la puissance du nombre que vous souhaitez calculer : ";
    cin >> puissance;
    while (nombre <= 0) {
        cout << " Erreur : La puissance saisie est négative. Saississez un nombre entier postif :";
        cin >> nombre;
    }
    cout << " " << nombre << " à la puissance " << puissance << " est égal à " << PuissanceRecursive(nombre, puissance);

    return(0);
}
