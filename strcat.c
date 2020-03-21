#include <stdio.h>
#include <stdlib.h>

char *my_strcat(char *str, char *src) {
    while(*str) 
        str++;

    while(*src++);
    {
    	*str = *src;
    	src++;
    	str++
    }
    *str = '\0';
    return str;
}

int main(void){

	char str[50] = "frederic ";
	char src[] = "canaud";
	my_strcat(str,src);
	printf("%s",str);
}