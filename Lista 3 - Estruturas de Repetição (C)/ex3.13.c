#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1;
    int numero2;
    int temp;
    int mult2 = 0;
    int mult3 = 0;
    int mult4 = 0;

    printf("Entre com um numero: ");
    scanf("%d", &numero1);

    printf("Entre com outro numero: ");
    scanf("%d", &numero2);

    if(numero1 > numero2){
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }
    for(int i = numero1; i <= numero2; i++){
        if(i % 2 == 0){
            mult2++;
        }
        if(i % 3 == 0){
            mult3++;
        }
        if(i % 4 == 0){
            mult4++;
        }
    }
    
    printf("Multiplos de 2: %d\nMultiplos de 3: %d\nMultiplos de 4: %d", mult2, mult3, mult4);

    return 0;
}