#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int maior = n1;


	printf("N1: ");
	scanf("%d", &n1);
    printf("N2: ");
	scanf("%d", &n2);
    printf("N3: ");
	scanf("%d", &n3);
    printf("N4: ");
	scanf("%d", &n4);
    printf("N5: ");
	scanf("%d", &n5);

    if(n1 < 0 || n2 < 0 || n3 < 0 || n4 < 0 || n5 < 0){
        printf("Forneca apenas numeros positivos.");
    }

    if(maior < n2){
    maior = n2;
    }
    if(maior < n3){
        maior = n3;
    }

    if(maior < n4){
        maior = n4;
    }

    if(maior < n5){
        maior = n5;
    }

    printf("\n");

    for(int i = maior; i >= 1; i--){
        if(n1 >= 0 && n2 >= 0 && n3 >= 0 && n4 >= 0 && n5 >= 0){
            printf("%04d  ", i);
        if(i <= n1){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(n2 >= i){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(n3 >= i){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(n4 >= i){
            printf("*");
        }
        else{
            printf(" ");
        }
        if(n5 >= i){
            printf("*");
        }
        else{
            printf(" ");
        }
        printf("\n");
        }
    }

    return 0;
}