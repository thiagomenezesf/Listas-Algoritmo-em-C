#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a;
    float b;
    float c;
    float delta;
    float x1;
    float x2;
    float temp;

    printf("a: ");
    scanf("%f", &a);

    printf("b: ");
    scanf("%f", &b);

    printf("c: ");
    scanf("%f", &c);

    if(a == 0){
        printf("Nao existe equacao do segundo grau!");
    }

    else{
        delta = b * b - 4 * a * c;
        x1 = (-1 * b + sqrt(delta)) / 2 * a;
        x2 = (-1 * b - sqrt(delta)) / 2 * a;
        if(delta == 0){
            printf("Delta: %.2f\n", delta);
            printf("S = {%.2f}", x1);
        }
        else if(delta > 0){
            if(x1 > x2){
                temp = x1;
                x1 = x2;
                x2 = temp;
            }
            printf("Delta: %.2f\n", delta);
            printf("S = {%.2f, %.2f}", x1, x2);
        }
        else{
            printf("Delta: %.2f\n", delta);
            printf("S = {}");
        }
    }

    return 0;
}