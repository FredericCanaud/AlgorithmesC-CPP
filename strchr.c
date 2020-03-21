#include <stdio.h>
#include <stdlib.h>

char *my_strchr(char *str, char c)
{
	char *fin = str + sizeof(str);
	for (char *p = str; p < fin; p++) {
		if (*p == c)
		{
			return (p);
		}
		if (*p == '\0')
		{
			return (NULL);
		}
	}
}

void test(char *str, char c)
{
	if(my_strchr(str,c) == NULL){
		printf("La chaine ne contient pas le caractere %c",c);
	}
	else{
		printf("La chaine contient le caractere %c",c);
	}
}

int main(void){
	char *str = malloc(8*sizeof(char));
	str = "frederic";
	char c = 'f';
	test(str,c);
}
