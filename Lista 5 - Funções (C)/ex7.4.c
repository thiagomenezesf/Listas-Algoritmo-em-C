#include <stdio.h>
#include <stdlib.h>

int lePositivo();
int somatorio(int n);

int main(){
    int array[5];

    for(int i = 0; i < 5; i++){
        printf("n(%d): ", i);
        array[i] = lePositivo();
    }

    for(int i = 0; i < 5; i++){
        printf("Somatorio de 1 a %d: %d\n", array[i], somatorio(array[i]));
    }

    return 0;
}

int lePositivo(){
    int valor;
    do{
        scanf("%d", &valor);
        if(valor < 0){
            printf("Entre com um valor positivo: ");
        }
        }while(valor < 0);

    return valor;
}

int somatorio(int n){
    int som = 0;
    for(int i = 1; i <= n; i++){
        som += i;
    }
    return som;
}