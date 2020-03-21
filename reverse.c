// Préconditions : dest et src soient de même longueur

#include <stdlib.h>
#include <stdio.h>

void reverse(char *dest, char *src){
	char mot[8];
	int i = 0;
	while(src){
		++src;
	}
	while(dest){
		*src = *dest;
		--src;
		++dest;
	}
	while(src){
		mot[i] = *src;
		++src;
		++i;
	}
	for(int j = 0; j < sizeof(mot); j++){
		printf("%s",mot[j]);
	}
}

int main(void){
	char mot1[8] = "Bonjour";
	char mot2[8];
	reverse(mot1,mot2);
}