#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero;
    float somatorio = 0;
    float media = 0;
    int quantidade = 0;

    do{
        printf("Escolha um numero: ");
        scanf("%f", &numero);
        if(numero >= 0){
            somatorio += numero;
            quantidade++;
            media = somatorio / quantidade;
        }
    }while(numero >= 0);
    
    printf("Somatorio: %.2f\nMedia: %.2f\nQuantidade: %d", somatorio, media, quantidade);

    return 0;
}