#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lePositivo();
int somaDivisores(int n);
bool saoAmigos(int n1, int n2);

int main(){
    int array[10];
    
    for(int i = 0; i < 10; i++){
        do{
            printf("n(%d): ", i);
            scanf("%d", &array[i]);
            if(array[i] <= 0){
                lePositivo();
                scanf("%d", &array[i]);
            }
        }while(array[i] <= 0);
    }
    for(int i = 0; i < 10; i = i + 2){
        if(saoAmigos(array[i], array[i+1])){
            printf("%d e %d sao amigos\n", array[i], array[i+1]);
        }
        else{
            printf("%d e %d nao sao amigos\n", array[i], array[i+1]);
        }
    }

    return 0;
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

    return som;
}

bool saoAmigos(int n1, int n2){
    if(somaDivisores(n1) == n2){
            return true;
        }
        return false;
}