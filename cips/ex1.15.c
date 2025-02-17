#include <stdio.h>
#include <stdlib.h>

int main() {

float perimetro;
float area;
float lado1;
float lado2;

printf("Largura do retangulo");
scanf("%f", &lado1);

printf("Altura do retangulo");
scanf("%f", &lado2);


area = lado1 * lado2;
perimetro = lado1 * 2  + lado2 * 2;

printf("Perimetro = %.2f\n", perimetro);
printf("Area = %.2f", area);
return 0;
}