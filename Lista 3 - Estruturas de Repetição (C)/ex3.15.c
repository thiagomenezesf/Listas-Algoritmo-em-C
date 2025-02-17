#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int fatorial = 1;

    printf("Entre com um numero inteiro positivo: ");
    scanf("%d", &numero);

    if(numero < 0){
        printf("Nao ha fatorial de numero negativo.");
    }

    else{
        for(int i = 2; i <= numero; i++){
                fatorial *= i;
            }
        printf("%d! = %d", numero, fatorial);

}
}