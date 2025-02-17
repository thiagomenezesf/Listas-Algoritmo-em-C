#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1;
    float numero2;
    char operacao;
    float soma;
    float subtracao;
    float divisao;
    float multiplicacao;

    printf("Escolha um numero: ");
    scanf("%f", &numero1);

    printf("Escolha outro numero: ");
    scanf("%f", &numero2);

    printf("Escolha uma operacao de acordo com o menu:\n +) Adicao;\n -) Subtracao;\n *) Multiplicacao;\n /) Divisao.\n Operacao: ");
    scanf(" %c", &operacao);

    switch(operacao){
        case'+':
        soma = numero1 + numero2;
        printf("%.2f + %.2f = %.2f", numero1, numero2, soma);
        break;
        case'-':
        subtracao = numero1 - numero2;
        printf("%.2f - %.2f = %.2f", numero1, numero2, subtracao);
        break;
        case'/':
        divisao = numero1 / numero2;
        printf("%.2f / %.2f = %.2f", numero1, numero2, divisao);
        break;
        case'*':
        multiplicacao = numero1 * numero2;
        printf("%.2f * %.2f = %.2f", numero1, numero2, multiplicacao);
        break;
        default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
}