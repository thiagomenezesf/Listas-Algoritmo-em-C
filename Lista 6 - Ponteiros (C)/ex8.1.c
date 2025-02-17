#include <stdio.h>
#include <stdlib.h>

void somatorioMedia(float a[], int n, float *somatorio, float *media);

int main(){
    float a[10];
    float s;
    float m;


    for(int i = 0; i < 10; i++){
        printf("n[%d]: ", i);
        scanf("%f", &a[i]);
    }
    somatorioMedia(a, 10, &s, &m);
    printf("Somatorio: %.2f\n", s);
    printf("Media: %.2f", m);

    return 0;
}

void somatorioMedia(float a[], int n, float *somatorio, float *media){
    *somatorio = 0;
    for(int i = 0; i < n; i++){
        *somatorio += a[i];
    }
    *media = *somatorio / n;
}