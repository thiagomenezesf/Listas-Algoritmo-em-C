#include <stdio.h>
#include <stdlib.h>

int main() {

int area;
int diagonal1;
int diagonal2;

printf("Base menor do losango");
scanf("%d", &diagonal1);

printf("Diagonal maior do losango");
scanf("%d", &diagonal2);

area = diagonal1 * diagonal2/2;

printf("Area = %d", area);
}