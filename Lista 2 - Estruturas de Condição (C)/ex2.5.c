#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1;
    int numero2;
    int numero3;

    printf("Digite um numero inteiro\n");
    scanf("%d", &numero1);

    printf("Digite outro numero inteiro");
    scanf("%d", &numero2);

    printf("Digite um terceiro numero inteiro");
    scanf("%d", &numero3);

    if(numero1 >= numero2 && numero2 >= numero3){
        printf("%d >= %d >= %d", numero1, numero2, numero3);
    }
    else if(numero3 >= numero2 && numero2 >= numero1 ){
        printf("%d >= %d >= %d", numero3, numero2, numero1);
    }
    else if(numero2 >= numero1 && numero1 >= numero3 ){
        printf("%d >= %d >= %d", numero2, numero1, numero3);
    }
    else if(numero1 >= numero3 && numero3 >= numero2 ){
        printf("%d >= %d >= %d", numero1, numero3, numero2);
    }
    else if(numero3 >= numero1 && numero1 >= numero2 ){
        printf("%d >= %d >= %d", numero3, numero1, numero2);
    }
    else if(numero2 >= numero3 && numero3 >= numero1 ){
        printf("%d >= %d >= %d", numero2, numero3, numero1);
    }

        return 0;
    }