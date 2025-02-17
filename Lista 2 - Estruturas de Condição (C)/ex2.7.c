#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1;
    float numero2;
    float subtracao;

    printf("Escolha um numero: ");
    scanf("%f", &numero1);

    printf("Escolha outro numero: ");
    scanf("%f", &numero2);

    subtracao = numero1 - numero2;

    if(numero1 + numero2 > 10){
        printf("Os numeros fornecidos foram %.2f e %.2f", numero1, numero2);
    }
    else{
        printf("A subtracao entre %.2f e %.2f e igual a %.2f", numero1, numero2, subtracao);
    }

    return 0;
}