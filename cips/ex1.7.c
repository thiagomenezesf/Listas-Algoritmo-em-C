#include <stdio.h>
#include <stdlib.h>

int main() {

int perimetro;
int area;
int lado;

printf("Tamanho do lado");
scanf("%d", &lado);

area = lado * lado;
perimetro = lado + lado + lado + lado;

printf("Perimetro = %d\n", perimetro);
printf("Area = %d", area);
}