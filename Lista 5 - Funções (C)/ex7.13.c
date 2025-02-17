#include <stdio.h>
#include <stdlib.h>

int classificaTrinca(int n1, int n2, int n3);

int main(){
    int a[3];
    int a1[3];
    int a2[3];

    for(int i = 0; i < 3; i++){
        printf("n1[%d]: ", i);
        scanf("%d", &a[i]);

        printf("n2[%d]: ", i);
        scanf("%d", &a1[i]);
        
        printf("n2[%d]: ", i);
        scanf("%d", &a2[i]);
    }
    
    for(int i = 0; i < 3; i++){
        printf("%d, %d e %d: ", a[i], a1[i], a2[i]);
        classificaTrinca(a[i], a1[i], a2[i]);
    }

return 0;
}

int classificaTrinca(int n1, int n2, int n3){
    int temp;
    int temp1;
    if(n1 >= n2 && n2 >= n3){
        temp = n1;
        n1 = n3;
        n3 = temp;
    }
    else if(n1 >= n3 && n3 >= n2){
        temp = n1;
        n1 = n2;
        temp1 = n3;
        n3 = temp;
        n2 = temp1;
    }
    else if(n2 >= n1 && n1 >= n3){
        temp = n1;
        n1 = n3;
        temp1 = n2;
        n2 = temp;
        n3 = temp1;
    }
    else if(n2 >= n3 && n3 >= n1){
        temp = n2;
        n2 = n3;
        n3 = temp;

    }
    else if(n3 >= n1 && n1 >= n2){
        temp = n1;
        n1 = n2;
        n2 = temp;
    }
    printf("%d <= %d <= %d\n", n1, n2, n3);
}
