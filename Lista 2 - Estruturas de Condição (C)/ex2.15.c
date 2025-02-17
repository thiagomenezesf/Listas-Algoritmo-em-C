#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;

    printf("Coloque sua idade: ");
    scanf("%d", &idade);

    if(idade < 16){
        printf("Nao eleitor.");
    }
    else if(18 <= idade && idade <= 65){
        printf("Eleitor obrigatorio.");
    }

    else {
        printf("Eleitor facultativo.");
    }

    return 0;
}