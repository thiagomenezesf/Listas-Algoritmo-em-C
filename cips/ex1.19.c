#include <stdio.h>
#include <stdlib.h>

int main() {

float d;
float r;
float circ;
float a;

printf("Raio");
scanf("%f", &r);

d = 2 * r;
circ = 2 * 3.141592 * r;
a = 3.141592 * r * r;

printf("Diametro = %.2f\n", d);
printf("Circunferencia = %.2f\n", circ);
printf("Area = %.2f", a);
return 0;

}