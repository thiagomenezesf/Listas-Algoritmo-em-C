#include <stdio.h>
#include <stdlib.h>

int main() {

int area;
int base1;
int base2;
int altura;

printf("Base menor do trapezio");
scanf("%d", &base1);

printf("Base maior do trapezio");
scanf("%d", &base2);

printf("Altura do trapezio");
scanf("%d", &altura);


area = (base1 + base2) * altura/2;

printf("Area = %d", area);
}