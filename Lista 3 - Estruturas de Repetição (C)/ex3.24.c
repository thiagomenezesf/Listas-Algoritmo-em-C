#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int i = 1;
    int maiores = 0;
    int menores = 0;
    
    do{
        printf("Idade da pessoa %d: ", i);
        scanf("%d", &numero);
        
        if(numero > 0){
            if(numero > 50){
                maiores++;
            }
            else if(numero < 21){
                menores++;
            }
        }
    }while(numero > 0);
    printf("Total de pessoas menores de 21 anos: %d\nTotal de pessoas com mais de 50 anos: %d", menores, maiores);

    return 0;
}