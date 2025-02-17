#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero;
    float metade;
    float triplo;
    
    printf("Escolha um numero: ");
    scanf("%f", &numero);

    metade = numero / 2;
    triplo = numero * 3;

    if(numero > 20){
        printf("A metade de %.2f e %.2f", numero, metade);
    }
    else{
        printf("O triplo de %2.2f e %.2f", numero, triplo);
    }
    
    return 0;
}