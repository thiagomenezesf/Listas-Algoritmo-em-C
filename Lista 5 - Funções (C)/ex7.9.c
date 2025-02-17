#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int lePositivo();
bool ehTriangulo(int ladoA, int ladoB, int ladoC);
int tipoTriangulo(int a, int b, int c);

int main(){
    int array1[5];
    int array2[5];
    int array3[5];
    for(int i = 0; i < 5; i++){
        do{
            printf("LadoA[%d]: ", i);
            scanf("%d", &array1[i]);
            if(array1[i] <= 0){
                lePositivo();
                scanf("%d", &array1[i]);
            }
        }while(array1[i] <= 0);
        do{
            printf("LadoB[%d]: ", i);
            scanf("%d", &array2[i]);
            if(array2[i] <= 0){
                lePositivo();
                scanf("%d", &array2[i]);
            }
        }while(array2[i] <= 0);
        do{
            printf("LadoC[%d]: ", i);
            scanf("%d", &array3[i]);
            if(array3[i] <= 0){
                lePositivo();
                scanf("%d", &array3[i]);
            }
        }while(array3[i] <= 0);
    }

    for(int i = 0; i < 5; i++){
        if(ehTriangulo(array1[i], array2[i], array3[i])){
            if(tipoTriangulo(array1[i], array2[i], array3[i]) == 1){
                printf("Valores %d, %d e %d: triangulo equilatero\n", array1[i], array2[i], array3[i]);
            }
            else if(tipoTriangulo(array1[i], array2[i], array3[i]) == 2){
                printf("Valores %d, %d e %d: triangulo isosceles\n", array1[i], array2[i], array3[i]);
            }
            else if(tipoTriangulo(array1[i], array2[i], array3[i]) == 3){
                printf("Valores %d, %d e %d: triangulo escaleno\n", array1[i], array2[i], array3[i]);
            }
        }
        else{
            printf("Valores %d, %d e %d: nao formam um triangulo\n", array1[i], array2[i], array3[i]);
        }
    }

    return 0;
}

int lePositivo(){
    printf("Entre com um valor positivo: ");
}

bool ehTriangulo(int ladoA, int ladoB, int ladoC){
    if(ladoA >= ladoB + ladoC){
        return false;
    }
    else if(ladoB >= ladoA + ladoC){
        return false;
    }
    else if(ladoC >= ladoA + ladoB){
        return false;
    }
    return true;
}

int tipoTriangulo(int b, int a, int c){
    if(a == b && b == c){
        return 1;
    }
    if(a == b && b != c){
        return 2;
    }
    if(b == c && c != a){
        return 2;
    }
    if(a == c && c != b){
        return 2;
    }
    if(a != b && b != c){
        return 3;
    }
    
}