#include <iostream>
using namespace std;

//////////////////////////////////////////
//
//  Entrée:tableau,a,b
//  Sortie:
//  procedure qui tri un tableau
//
//////////////////////////////////////////
int TriRapide(int t[], int a, int b){

  int x = t[(a+b)/2];
  int i = a, j = b;
  int buff;

  if (a < b){
      while (i <= j){
          while (t[i] < x){
              i++;
          }
          while (t[j] > x){
              j--;
          }
          if (i <= j){
              buff = t[i];
              t[i] = t[j];
              t[j] = buff;
              i++;
              j--;
          }
      }
      TriRapide(t,a,j);
      TriRapide(t,i,b);
    }
}

int main(){

    cout << "Coucou";
    int tab[] = {3,4,8};
    int a = 0;
    int b = sizeof(tab);

    TriRapide(tab,a,b-1);
    for(int i = 0; i <= 8; i++){
        cout << tab[i];
    }
  return 0;
}
