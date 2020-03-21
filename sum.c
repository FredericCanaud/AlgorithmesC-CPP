#include <stdio.h>

int main(void){
	double tab[5] = {100.0,10.0,1.0,0.1,0.01};
	double sum1 (double *tab, int size){
		double count = 0;
		for(int i = 0; i < size; i++){
			count = count + tab[i];
		}
		return count;
	}
	 
	// double sum2 (double *tab, int size){
	//	double count = 0;
	//	for (int i = 0; i < size; i++){
	//		count = count + *(tab+i);
	//	}
	//	return count;
	//}
	double sum2 (double *tab, int size){
		double count = 0;
		double *p;
		for (p=tab; p < tab+size; p++){
			count = count + *p;
		}
		return count;
	}
	printf("Somme 1 : %f et Somme 2 : %f", sum1(tab,5), sum2(tab,5));
	return 0;
}

