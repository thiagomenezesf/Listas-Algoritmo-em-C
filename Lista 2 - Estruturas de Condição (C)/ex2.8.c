#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1;
    float numero2;
    float numero3;

    printf("Escolha um numero: ");
    scanf("%f", &numero1);

    printf("Escolha outro numero: ");
    scanf("%f", &numero2);

    printf("Esolha um terceiro numero: ");
    scanf("%f", &numero3);

    if(numero1 >= numero2 && numero2 >= numero3){
        float soma = numero1 + numero2;
        printf("A soma dos dois numeros maiores fornecidos e %.2f", soma);
    }
    else if(numero3 >= numero2 && numero2 >= numero1 ){
        float soma = numero3 + numero2;
        printf("A soma dos dois numeros maiores fornecidos e %.2f", soma);
    }
    else if(numero2 >= numero1 && numero1 >= numero3 ){
        float soma = numero2 + numero1;
        printf("A soma dos dois numeros maiores fornecidos e %.2f", soma);
    }
    else if(numero1 >= numero3 && numero3 >= numero2 ){
        float soma = numero1 + numero3;
        printf("A soma dos dois numeros maiores fornecidos e %.2f", soma);
    }
    else if(numero3 >= numero1 && numero1 >= numero2 ){
        float soma = numero3 + numero1;
        printf("A soma dos dois numeros maiores fornecidos e %.2f", soma);
    }
    else if(numero2 >= numero3 && numero3 >= numero1 ){
        float soma = numero2 + numero3;
        printf("A soma dos dois numeros maiores fornecidos e %.2f", soma);
    }
}