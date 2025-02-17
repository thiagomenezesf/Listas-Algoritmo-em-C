#include <stdio.h>
#include <stdlib.h>

int main(){
    int homem1;
    int homem2;
    int mulher1;
    int mulher2;

    printf("Idade do homem 1: ");
    scanf("%d", &homem1);

    printf("Idade do homem 2: ");
    scanf("%d", &homem2);

    printf("Idade da mulher 1: ");
    scanf("%d", &mulher1);

    printf("Idade da mulher 2: ");
    scanf("%d", &mulher2);

    if(homem1 >= homem2 && mulher1 >= mulher2){
        int soma = homem1 + mulher2;
        int produto = homem2 * mulher1;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", soma);
        printf("Idade homem mais novo * idade mulher mais velha: %d", produto);
    }

    else if(homem2 >= homem1 && mulher1 >= mulher2){
        int soma = homem2 + mulher2;
        int produto = homem1 * mulher1;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", soma);
        printf("Idade homem mais novo * idade mulher mais velha: %d", produto);
    }

    else if(homem2 >= homem1 && mulher2 >= mulher1){
        int soma = homem2 + mulher1;
        int produto = homem1 * mulher2;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", soma);
        printf("Idade homem mais novo * idade mulher mais velha: %d", produto);
    }

    else if(homem1 >= homem2 && mulher2 >= mulher1){
        int soma = homem1 + mulher1;
        int produto = homem2 * mulher2;
        printf("Idade homem mais velho + idade mulher mais nova: %d\n", soma);
        printf("Idade homem mais novo * idade mulher mais velha: %d", produto);
    }

    return 0;
}