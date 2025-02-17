#include <stdio.h>
#include <stdlib.h>

float maiorNumero(float array1, float array2);

int main(){
    float array1[5];
    float array2[5];

    for(int i = 0; i < 5; i++){
                
                do{
                    printf("n1(%d): ", i);
            scanf("%f", &array1[i]);

            printf("\n");
                    if(array1[i] < 0){
                    printf("Entre com um valor positivo!\n");
                    }
                }while(array1[i] < 0);

                do{
                    printf("n2(%d): ", i);
            scanf("%f", &array2[i]);

            printf("\n");
                    if(array2[i] < 0){
                    printf("Entre com um numero positivo!\n");
                    }
                }while(array2[i] < 0);
    }

    for(int i = 0; i < 5; i++){
        if(array1[i] != array2[i]){
            printf("%.2f, %.2f: O maior valor e %.2f\n", array1[i], array2[i], maiorNumero(array1[i], array2[i]));
        }
        else{
            printf("%.2f, %.2f: Eles sao iguais\n", array1[i], array2[i]);
        }
    }

    return 0;
}

float maiorNumero(float array1, float array2){
    if(array1 > array2){
        return array1;
    }
    return array2;
}