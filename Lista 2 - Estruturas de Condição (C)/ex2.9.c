#include <stdio.h>
#include <stdlib.h>

int main(){
    int lado;
    float medida;
    float perimetro;
    float area;

    printf("Escolha o numero de lados: ");
    scanf("%d", &lado);

    printf("Escolha a medida do lado: ");
    scanf("%f", &medida);

    perimetro = 3 * medida;
    area = medida * medida;

    if(lado == 3){
        printf("TRIANGULO de perimetro %.2f", perimetro);
    }

    else if(lado == 4){
        printf("QUADRADO de area %.2f", area);
    }
    
    else if(lado == 5){
        printf("PENTAGONO");
    }

    else{
        printf("Poligono nao identificado");
    }

    return 0;

}