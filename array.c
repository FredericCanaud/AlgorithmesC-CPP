#include <stdio.h>
#include <stdlib.h>

int main(void){

	int size = 50;
	int *create_array(int size){
		int *tab;
		tab = malloc(size*sizeof(int));
		for(int i = 0; i < size; i++){
			*(tab+i) = size-i;
		}
		return tab;
	}

	void display_array1(int *array, int size){
		for (int i = 0; i < size; i++){
			printf("| %d ", array[i]);
		}
	}

	void display_array2(int *array, int size){
		int *p;
		for (p = array; p < array+size; p++){
			printf("| %d ", *p);
		}
	}

	int *tab = create_array(size);
	display_array1(tab, size);
	display_array2(tab, size);
	free(tab);
	
}

