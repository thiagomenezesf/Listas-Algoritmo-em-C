#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Escreva um numero inteiro: ");
    scanf("%d", &numero);

    for(int i = 0; i < 11; i++){
        int tabuada = i * numero;
        printf("%d x %d = %d\n", numero, i, tabuada);
    }

    return 0;
}