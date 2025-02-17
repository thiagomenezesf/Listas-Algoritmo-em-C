#include <stdio.h>
#include <stdlib.h>

int main(){
    float saldo;
    float valor;
    int operacao;

    printf("Saldo inicial: ");
    scanf("%f", &saldo);

    printf("Operacoes: \n1.Deposito;\n2.Retirada;\n3.Fim.\n");

    do{
        printf("Operacao desejada: ");
        scanf("%d", &operacao);
        if(operacao == 1){
            printf("\nValor a depositar: ");
            scanf("%f", &valor);
            saldo += valor;
        }
        else if(operacao == 2){
            printf("\nValor a sacar: ");
            scanf("%f", &valor);
            saldo -= valor;
        }
        if(operacao != 1 && operacao != 2 && operacao != 3){
        printf("Operacao invalida.");
    }
    }while(operacao == 1 || operacao == 2);

    printf("\n");

    if(saldo == 0){
        printf("Saldo final: R$%.2f\n", saldo);
        printf("Sem saldo.");
    }
    else if(saldo < 0){
        printf("Saldo final: -R$%.2f\n", -saldo);
        printf("Conta devedora.");
    }
    else if(saldo > 0){
        printf("Saldo final: R$%.2f\n", saldo);
        printf("Conta preferencial.");
    }

    return 0;
}