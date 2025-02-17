#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso;
    float altura;
    float imc;

    printf("Coloque seu peso: ");
    scanf("%f", &peso);

    printf("Coloque sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc < 17){
        printf("IMC: %.2f\n", imc);
        printf("Voce esta muito abaixo do peso ideal!");
    }
    else if(17 <= imc && imc < 18.5){
        printf("IMC: %.2f\n", imc);
        printf("Voce esta abaixo do peso ideal!");
    }
    else if(18.5 <= imc && imc < 25){
        printf("IMC: %.2f\n", imc);
        printf("Parabens! Voce esta em seu peso normal!");
    }
    else if(25 <= imc && imc < 30){
        printf("IMC: %.2f\n", imc);
        printf("Atencao, voce esta acima de seu peso (sobrepeso)!");
    }
    else if(30 <= imc && imc < 35){
        printf("IMC: %.2f\n", imc);
        printf("Cuidado! Obesidade grau I!");
    }
    else if(35 <= imc && imc < 40){
        printf("IMC: %.2f\n", imc);
        printf("Cuidado! Obesidade grau II!");
    }
    else if(imc >= 40){
        printf("IMC: %.2f\n", imc);
        printf("Muito cuidado!!! Obesidade grau III!");
    }
}