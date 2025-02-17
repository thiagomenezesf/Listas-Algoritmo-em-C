#include <stdio.h>
#include <stdlib.h>

int main() {

    float decimal;

    printf("Numero decimal");
    scanf("%f", &decimal);

    printf("%f", decimal);
    printf("%.2f", decimal);
    printf("%.3f", decimal);
    return 0;

}