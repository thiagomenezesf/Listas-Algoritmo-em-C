#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float areaCirculo(float r);
float circunferenciaCirculo(float r);

int main(){
    float r;

    printf("Raio: ");
    scanf("%f", &r);

    printf("\n");

    printf("Area = %.2f\n", areaCirculo(r));
    printf("Circunferencia = %.2f", circunferenciaCirculo(r));

    return 0;
}

float areaCirculo(float r){
    return acos(-1) * r * r;
}

float circunferenciaCirculo(float r){
    return 2 * acos(-1) * r;
}