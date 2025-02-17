#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1 = 1;
    int numero2 = 1;
    int fib;

    printf("%d %d ", numero1, numero2);

    for(int i = 1; i < 19; i++){
        fib = numero1 + numero2;
        printf("%d ", fib);
        numero1 = numero2;
        numero2 = fib;
    }

    return 0;
}