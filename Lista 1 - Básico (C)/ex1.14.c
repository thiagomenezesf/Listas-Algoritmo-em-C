#include <stdio.h>
#include <stdlib.h>

int main() {

float perimetro;
float area;
float lado;

printf("Tamanho do lado");
scanf("%f", &lado);

area = lado * lado;
perimetro = lado + lado + lado + lado;

printf("Perimetro = %.2f\n", perimetro);
printf("Area = %.2f", area);
return 0;
}