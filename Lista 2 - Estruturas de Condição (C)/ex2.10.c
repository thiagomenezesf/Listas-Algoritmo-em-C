#include <stdio.h>
#include <stdlib.h>

int main(){
    float a;
    float b;
    float c;

    printf("Escolha o valor do lado 1: ");
    scanf("%f", &a);

    printf("Escolha valor do lado 2: ");
    scanf("%f", &b);

    printf("Escolha o valor do lado 3: ");
    scanf("%f",&c);

    if(a > b + c){
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }

    else if(b > a + c){
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }

    else if(c > b + a){
        printf("As medidas fornecidas dos lados nao representam um triangulo valido!");
    }

    else if(a == b && a == c){
        printf("Triangulo EQUILATERO");
    }

    else if(a == b && a != c){
        printf("Triangulo ISOSCELES");
    }

    else if(a == c && a != b){
        printf("Triangulo ISOSCELES");
    }

    else if(a != b && b != c){
        printf("Triangulo ESCALENO");
    }

    else if(b == c && b != a){
        printf("Triangulo ISOSCELES");
    }

    return 0;
}