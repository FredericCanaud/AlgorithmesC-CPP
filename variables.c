#include <stdio.h>
#include <stdlib.h>

int* f() {
static int a = 0;
++a;
return &a;
}

int* g() {
int *b = malloc (sizeof(int));
*b = 0;
 ++(*b);
return b;
}

int* h() {
int c = 0;
++c;
return &c;
}

int main (void) {
int *result_f, *result_g, *result_h;
result_f = f();
result_g = g();
result_h = h();
result_f = f();
result_g = g();
result_h = h();
printf("*result_f = %d\n", *result_f);
printf("*result_g = %d\n", *result_g);
printf("*result_h = %d\n", *result_h);
return 0;
}
