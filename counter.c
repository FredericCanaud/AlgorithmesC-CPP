#include <stdio.h>
#include <stdlib.h>
void print_hello(){

		static int counter = 1;
		printf("Bonjour numero %d!\n",counter);
		counter++;
	}

int main(void){
	for(int i =0; i < 10; i++){
			print_hello();
		}
}
