#include <stdio.h>
#include <stdlib.h>

int main(){

    char menu1;
    float c;
    float f;

    printf("Escolha uma operacao de acordo com o menu:\n C) Celsius -> Fahrenheit;\n F) Fahrenheit -> Celsius.\n Opcao: ");
    scanf("%c", &menu1);

    switch(menu1){
        case 'C':
        printf("Entre com a temperatura em graus Celcius: ");
        scanf("%f", &c);
        f = 1.8 * c + 32;
        printf("\n%.2f graus Celsius correspondem a %.2f graus Fahrenheit", c, f);
        break;
        case 'F':
        printf("Entre com a temperatura em graus Fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) / 1.8;
        printf("\n%.2f graus Fahrenheit correspondem a %.2f graus Celsius", f, c);
        break;
        default:
        printf("Opcao invalida!");
    }

    return 0;
}