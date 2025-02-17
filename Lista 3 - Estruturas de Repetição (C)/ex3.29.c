#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1;
    int numero2;
    int divisao;
    char outro;

    do{
        printf("N1: ");
    scanf("%d", &numero1);

    printf("N2: ");
    scanf("%d", &numero2);

    while(numero2 == 0){
        printf("Nao existe divisao inteira por zero!\n");

        printf("Entre novamente com N2: ");
        scanf("%d", &numero2);
    }

    divisao = numero1 / numero2;
    printf("%d / %d = %d\n", numero1, numero2, divisao);

    printf("Voce deseja realizar outro calculo? (S/N): ");
    scanf(" %c", &outro);
    }while(outro == 'S');

    return 0;
}