#include <stdio.h>
#include <stdlib.h>

int main() {
    float produto;
    float venda;

    printf("Escolha o valor de um produto");
    scanf("%f", &produto);

    venda = produto - 0.09 * produto;

    printf("Preco de venda com 9%% de desconto: %.2f", venda);
    return 0;
}