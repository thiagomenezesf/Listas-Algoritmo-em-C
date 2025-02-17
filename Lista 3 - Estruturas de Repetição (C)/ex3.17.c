#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int numero1 = 1;
    int numero2 = 1;
    int fib;

    printf("Termo desejado: ");
    scanf("%d", &numero);

    if(numero == 0){
        printf("Fibonacci de 0 e 1");
    }
    else if(numero == 1){
        printf("Fibonacci de 1 e 1");
    }

    else{
        for(int i = 1; i < numero; i++){
        fib = numero1 + numero2;
        numero1 = numero2;
        numero2 = fib;
        }
        printf("Fibonacci de %d e %d", numero, fib);
    }

    return 0;
}