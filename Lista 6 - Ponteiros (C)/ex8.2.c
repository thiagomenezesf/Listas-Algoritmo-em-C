#include <stdio.h>
#include <stdlib.h>

void trocar( int *n1, int *n2 );

int main(){
    int n1;
    int n2;

    printf("n1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);

    printf("Antes:\n    n1: %d\n    n2: %d\n", n1, n2);
    trocar(&n1, &n2 );
    printf("Depois:\n    n1: %d\n    n2: %d\n", n1, n2);

    return 0;
}

void trocar( int *n1, int *n2 ){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}