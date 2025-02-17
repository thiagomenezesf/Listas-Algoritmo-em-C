#include <stdio.h>
#include <stdlib.h>

int main() {

int perimetro;
int area;
int lado1;
int lado2;

printf("Largura do retangulo");
scanf("%d", &lado1);

printf("Altura do retangulo");
scanf("%d", &lado2);


area = lado1 * lado2;
perimetro = lado1 + lado1 + lado2 + lado2;

printf("Perimetro = %d\n", perimetro);
printf("Area = %d", area);
}