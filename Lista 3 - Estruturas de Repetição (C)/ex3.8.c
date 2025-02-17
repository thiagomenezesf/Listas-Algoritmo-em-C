#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Escreva um numero inteiro negativo: ");
    scanf("%d", &numero);

    if(numero > 0){
        printf("Valor incorreto (positivo)");
    }

    for(int i = 0; i >= numero; i--){
        printf("%d ", i);
    }

    return 0;
}