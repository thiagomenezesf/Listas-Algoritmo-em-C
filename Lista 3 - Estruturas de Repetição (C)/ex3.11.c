#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1;
    int numero2;

    printf("Entre com um numero: ");
    scanf("%d", &numero1);

    printf("Entre com outro numero: ");
    scanf("%d", &numero2);

    if(numero1 < numero2){
    for(int i = numero1; i <= numero2; i++){
        printf("%d ", i);
    }
    }
    else if(numero2 < numero1){
        for(int i = numero1; i >= numero2; i--){
            printf("%d ", i);
        }
    }

    return 0;
}