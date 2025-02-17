#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1;
    int numero2;
    int temp;
    int somatorio = 0;

    printf("Escolha um numero 1:");
    scanf("%d", &numero1);

    printf("Escolha um numero 2: ");
    scanf("%d", &numero2);

    if(numero1 > numero2){
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }
    for(int i = numero1; i <= numero2; i++){
            somatorio += i;
        }
    printf("Somatorio entre %d e %d: %d", numero1, numero2, somatorio);

    return 0;
}