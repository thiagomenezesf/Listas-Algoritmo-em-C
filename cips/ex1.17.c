#include <stdio.h>
#include <stdlib.h>

int main() {

float area;
float base1;
float base2;
float altura;

printf("Base menor do trapezio");
scanf("%f", &base1);

printf("Base maior do trapezio");
scanf("%f", &base2);

printf("Altura do trapezio");
scanf("%f", &altura);


area = (base1 + base2) * altura/2;

printf("Area = %.2f", area);
return 0;
}