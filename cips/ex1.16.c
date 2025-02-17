#include <stdio.h>
#include <stdlib.h>

int main() {

float area;
float base;
float altura;

printf("Base do triangulo");
scanf("%f", &base);

printf("Altura do triangulo");
scanf("%f", &altura);


area = base * altura/2;

printf("Area = %.2f", area);
}