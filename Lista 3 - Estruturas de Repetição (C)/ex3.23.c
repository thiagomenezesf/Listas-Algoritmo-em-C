#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota;
    float soma = 0;
    float media;

    for(int i = 1; i <= 10; i++){
        printf("Nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }
    
    media = soma / 10;

    printf("A media aritmetica das dez notas e: %.2f", media);

    return 0;
    }