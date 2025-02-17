#include <stdio.h>
#include <stdlib.h>

int main() { 
    float grausF;
    float grausC;

    printf("Temperatura em graus Celsius: ");
    scanf("%f", &grausC);

    grausF = 1.8 * grausC + 32;

    printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", grausC, grausF);
    return 0;

}