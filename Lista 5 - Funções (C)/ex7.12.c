#include <stdio.h>
#include <stdlib.h>

int classificaDupla(int n1, int n2);

int main(){
    int a[3];
    int a1[3];

    for(int i = 0; i < 3; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &a[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &a1[i]);
    }

    for(int i = 0; i < 3; i++){
        printf("%d e %d: ", a[i], a1[i]);
        classificaDupla(a[i], a1[i]);
    }

    return 0;
}

int classificaDupla(int n1, int n2){
    int temp;
    if(n1 >= n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    printf("%d <= %d\n", n1, n2);
}