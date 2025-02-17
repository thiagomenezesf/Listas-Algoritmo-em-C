#include <stdio.h>
#include <stdlib.h>

int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = 1; i < 2; i++){
        printf("\n");
    }

    for(int i = 1; i <= 5; i++){
        for(int j = 5; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }

    for(int i = 1; i < 2; i++){
        printf("\n");
    }

    for(int i = 1; i <= 5; i++){
        for(int j = 4; j >= i; j--){
            printf(" ");
        }
        for(int k = 1; k <= i; k++){
            printf("*");
        }
        printf("\n");
    }

    for(int i = 1; i < 2; i++){
        printf("\n");
    }

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j < i; j++){
            printf(" ");
        }
        for(int k = 5; k >= i; k--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}