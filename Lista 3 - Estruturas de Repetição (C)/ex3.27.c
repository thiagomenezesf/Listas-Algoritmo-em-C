#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso;
    float media = 0;
    float somatoria = 0;
    float quantidade = 0;
    int i;

    do{
        printf("Entre com o peso da pessoa %02d", i);
        scanf("%f", &peso);

        if(peso > 60){
            somatoria += peso;
            quantidade++;
            media = somatoria / quantidade;
        }
    }while(peso >= 0);

    printf("Media dos pesos acima de 60kg: %.2f", media);

    return 0;
}