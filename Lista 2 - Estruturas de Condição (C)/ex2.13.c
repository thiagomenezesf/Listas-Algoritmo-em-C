#include <stdio.h>
#include <stdlib.h>

int main(){
    float av1;
    float av2;
    float opt;
    float media;

    printf("Avaliacao 1: ");
    scanf("%f", &av1);

    printf("Avaliacao 2: ");
    scanf("%f", &av2);

    printf("Avaliacao Optativa:");
    scanf("%f", &opt);

    if(av1 <= av2 && av1 <= opt){
        float media = (opt + av2) / 2;
        if(media >= 6){
            printf("Media: %.2f\n", media);
            printf("Aprovado!");
        }
        else if(media >= 4 && media < 6){
            printf("Media: %.2f\n", media);
            printf("Exame.");
        }
        else if(media < 4){
            printf("Media: %.2f\n", media);
            printf("Reprovado...");
        }
        
    }
    else if(av2 <= av1 && av2 <= opt){
        float media = (opt + av1) / 2;
        if(media >= 6){
            printf("Media: %.2f\n", media);
            printf("Aprovado!");
        }
        else if(media >= 4 && media < 6){
            printf("Media: %.2f\n", media);
            printf("Exame.");
        }
        else if(media < 4){
            printf("Media: %.2f\n", media);
            printf("Reprovado...");
        }
    }

    else{
        float media = (av1 + av2) / 2;
        if(media >= 6){
            printf("Media: %.2f\n", media);
            printf("Aprovado!");
        }
        else if(media >= 4 && media < 6){
            printf("Media: %.2f\n");
            printf("Exame.");
        }
        else if(media < 4){
            printf("%.2f\n", media);
            printf("Reprovado...");
        }
    }
}