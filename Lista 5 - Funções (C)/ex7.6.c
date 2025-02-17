#include <stdio.h>
#include <stdlib.h>

int lePositivo();
int somaDivisores(int n);

int main(){
    int array[5];

    for(int i = 0; i < 5; i++){
        do{
            printf("n(%d): ", i);
            scanf("%d", &array[i]);
            if(array[i] <= 0){
                lePositivo();
                scanf("%d", &array[i]);
            }
        }while(array[i] <= 0);
    }
    for(int i = 0; i < 5; i++){
        somaDivisores(array[i]);
    }

}

int lePositivo(){
    printf("Entre com um valor positivo: ");
}

int somaDivisores(int n){
    int som = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            som += i;
        }
    }
    printf("Soma dos divisores de %d: %d\n", n, som);

    return 0;
}