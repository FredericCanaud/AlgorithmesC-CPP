#include <stdlib.h>
#include <stdio.h>

int palindrome(char *str){
	char *str2 = str;
	while(*str != '\0'){
		 str++;
	} 
	str--;
	while(str > str2){
		if(*str == *str2){
			str--;
			str2++;
		}
		else{
			return 0;
		}
	}
	if(str2 >= str){
		return 1;
	}
}

void test (char *str){
	if( palindrome(str) == 1 ){
		printf("Ce mot est un palindrome. \n");
	}
	if( palindrome(str) == 0 ){
		printf("Ce mot n'est pas un palindrome. \n");
	}
}

int main(void){
	char mot1[] = "kayak";
	char mot2[] = "ressasser";
	char mot3[] = "antoine";
	char mot4[] = "esope reste ici et se repose";
	test(mot1);
	test(mot2);
	test(mot3);
	test(mot4);
}