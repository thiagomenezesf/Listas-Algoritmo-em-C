#include <stdio.h>
#include <stdlib.h>

int main() {

int numero;
int nAntes;
int nDepois;

printf("Escolha um numero");
scanf("%d", &numero);

nAntes = numero - 1;
nDepois = numero + 1;

printf("Sucessor de %d: %d\n", numero, nDepois);
printf("Antecessor de %d: %d", numero, nAntes);

}