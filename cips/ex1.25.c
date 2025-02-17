#include <stdio.h>
#include <stdlib.h>

int main() {
    float grausF;
    float grausC;

    printf("Temperatura em graus Fahrenheit: ");
    scanf("%f", &grausF);

    grausC = (grausF -32)/1.8;

    printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", grausF, grausC);
    return 0;

}