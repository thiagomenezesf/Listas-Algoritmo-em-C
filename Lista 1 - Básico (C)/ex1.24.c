#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario;
    float horaAula;
    int aulas;
    float inss;

    printf("Valor da hora/aula: ");
    scanf("%f", &horaAula);

    printf("Quantidade de aulas: ");
    scanf("%d", &aulas);

    printf("Porcentagem de desconto do INSS: ");
    scanf("%f", &inss);

    salario = horaAula * aulas - (inss * horaAula * aulas/100);

    printf("Salario Liquido: %.2f", salario);
    return 0;
}