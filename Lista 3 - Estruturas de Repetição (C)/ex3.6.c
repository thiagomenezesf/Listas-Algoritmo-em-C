#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &numero);

    if(numero < 0){
        printf("Valor incorreto (negativo)");
    }

    for(int i = 0; i <= numero; numero--){
        printf("%d ", numero);
    }
    
    return 0;
}