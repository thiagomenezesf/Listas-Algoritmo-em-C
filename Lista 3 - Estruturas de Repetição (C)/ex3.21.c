#include <stdio.h>
#include <stdlib.h>

int main(){
    int altura;

    printf("Altura: ");
    scanf("%d", &altura);

    if(altura > 0){
        for(int i = 1; i <= altura; i++){
            for(int j = i; j < altura; j++){
                printf(" ");
            }
            for(int k = 1; k <= i; k++){
                printf("*");
            }
            for(int l = 1; l < i; l++){
                printf("*");
            }
            printf("\n");
        }
    }

    else {
        altura = -altura;
        for(int i = 1; i <= altura; i++){
            for(int j = 1; j < i; j++){
                printf(" ");
            }
            for(int k = i; k <= altura; k++){
                printf("*");
            }
            for(int l = i; l < altura; l++){
                printf("*");
            }
            printf("\n");
    }
}
}