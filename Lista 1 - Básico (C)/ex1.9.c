#include <stdio.h>
#include <stdlib.h>

int main() {

int area;
int base;
int altura;

printf("Base do triangulo");
scanf("%d", &base);

printf("Altura do triangulo");
scanf("%d", &altura);


area = base * altura/2;

printf("Area = %d", area);
}