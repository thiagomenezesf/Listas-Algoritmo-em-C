#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Escolha um numero maior ou igual a 0: ");
    scanf("%d", &numero);

    if(numero < 0){
        printf("Valor incorreto (negativo)");
    }
    for(int i = 0; i <= numero; i++){
        printf("%d ", i);
    }
}