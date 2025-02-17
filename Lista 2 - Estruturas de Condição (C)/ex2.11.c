#include <stdio.h>
#include <stdlib.h>

int main(){
    int angulo1;
    int angulo2;
    int angulo3;

    printf("Escolha um angulo: ");
    scanf("%d", &angulo1);
    
    printf("Escolha um angulo 2: ");
    scanf("%d", &angulo2);

    printf("Escolha um angulo 3: ");
    scanf("%d", &angulo3);

    if(angulo1 + angulo2 + angulo3 != 180){
        printf("As medidas fornecidas dos angulos nao representam um triangulo valido!");
    }
    
    else if(angulo1 == 90){
        printf("Triangulo RETANGULO");
    }

    else if(angulo2 == 90){
        printf("Triangulo RETANGULO");
    }

    else if(angulo3 == 90){
        printf("Triangulo RETANGULO");
    }

    else if(angulo1 < 90 && angulo2 < 90 && angulo3 < 90){
        printf("Triangulo ACUTANGULO");
    }

    else if(angulo1 > 90 || angulo2 > 90 || angulo3 > 90){
        printf("Triangulo OBTUSANGULO");
    }

    return 0;
}