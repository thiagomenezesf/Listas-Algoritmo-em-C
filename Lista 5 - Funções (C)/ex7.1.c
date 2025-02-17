#include <stdio.h>
#include <stdlib.h>

int absoluto(int array);

int main(){
    int array[4];
    int u = 0;
    
    for(int i = 0; i < 5; i++){
        printf("n%d: ", u);
        scanf("%d", &array[i]);
        u++;
    }

    for(int i = 0; i < 5; i++){
    printf("absoluto(%d) = %d\n", array[i], absoluto(array[i]));
    }
    
    return 0;
}

int absoluto(int a){
    if(a < 0){
    return -a;
    }
    return a;
}