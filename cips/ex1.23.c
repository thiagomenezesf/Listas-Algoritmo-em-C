#include <stdio.h>
#include <stdlib.h>

int main() {
    int nascimento;
    int atual;
    int idade;

    printf("Digite seu ano de nascimento");
    scanf("%d", &nascimento);

    printf("Digite o ano atual");
    scanf("%d", &atual);

    idade = atual - nascimento;

    printf("Idade aproximada: %d anos", idade);
    return 0;

}