#include <stdio.h>
#include <stdlib.h>

int main() {
    float numeroPrimeiro;
    float numeroSegundo;
    float adicao;
    float subtraçao;
    float divisao;
    float multiplicacao;

printf("Primeiro Numero");
scanf("%f", &numeroPrimeiro);

printf("Segundo Numero");
scanf("%f", &numeroSegundo);

adicao = numeroPrimeiro + numeroSegundo;
subtraçao = numeroPrimeiro - numeroSegundo;
divisao = numeroPrimeiro / numeroSegundo;
multiplicacao = numeroPrimeiro * numeroSegundo;

printf("%.2f + %.2f = %.2f\n", numeroPrimeiro, numeroSegundo, adicao);
printf("%.2f - %.2f = %.2f\n", numeroPrimeiro, numeroSegundo, subtraçao);
printf("%.2f * %.2f = %.2f\n", numeroPrimeiro, numeroSegundo, multiplicacao);
printf("%.2f / %.2f = %.2f", numeroPrimeiro, numeroSegundo, divisao);

}