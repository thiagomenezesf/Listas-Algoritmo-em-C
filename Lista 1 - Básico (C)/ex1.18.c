#include <stdio.h>
#include <stdlib.h>

int main() {

float area;
float diagonal1;
float diagonal2;

printf("Base menor do losango");
scanf("%f", &diagonal1);

printf("Diagonal maior do losango");
scanf("%f", &diagonal2);

area = diagonal1 * diagonal2/2;

printf("Area = %.2f", area);
}