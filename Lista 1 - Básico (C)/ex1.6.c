#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroPrimeiro;
    int numeroSegundo;
    int adicao;
    int subtraçao;
    int divisao;
    int multiplicacao;

printf("Primeiro Numero");
scanf("%d", &numeroPrimeiro);

printf("Segundo Numero");
scanf("%d", &numeroSegundo);

adicao = numeroPrimeiro + numeroSegundo;
subtraçao = numeroPrimeiro - numeroSegundo;
divisao = numeroPrimeiro / numeroSegundo;
multiplicacao = numeroPrimeiro * numeroSegundo;

printf("%d + %d = %d\n", numeroPrimeiro, numeroSegundo, adicao);
printf("%d - %d = %d\n", numeroPrimeiro, numeroSegundo, subtraçao);
printf("%d * %d = %d\n", numeroPrimeiro, numeroSegundo, multiplicacao);
printf("%d / %d = %d", numeroPrimeiro, numeroSegundo, divisao);

}