#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool ehPar(int n);
bool ehDivisivel(int dividendo, int divisor);

int main(){
    int n1[5];
    int n2[5];

    for(int i = 0;i < 5; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &n1[i]);
        printf("n2[%d]: ", i);
        scanf("%d", &n2[i]);
    }

    for(int i = 0; i < 5; i++){
        if(ehPar(n1[i])){
            printf("%d eh par ", n1[i]);
        }
        else{
            printf("%d eh impar ", n1[i]);
        }
        if(ehDivisivel(n1[i], n2[i])){
            printf("e %d eh divisivel por %d\n", n1[i], n2[i]);
        }
        else{
            printf("e %d nao eh divisivel por %d\n", n1[i], n2[i]);
        }
    }

    return 0;
}

bool ehPar(int n){
        if(n % 2 == 0){
            return true;
        }
        else{
            return false;
        }
    }

bool ehDivisivel(int dividendo, int divisor){
    if(dividendo % divisor == 0){
        return true;
    }
    else{
        return false;
    }
}