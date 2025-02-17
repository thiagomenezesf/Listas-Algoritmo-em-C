#include <stdio.h>
#include <stdlib.h>

void pInterno( const double *a1, const double *a2, double *pi, int n );

int main(){
    double a1[5];
    double a2[5];
    double pi[5];

    for(int i = 0; i < 5; i++){
        printf("a1[%d]: ", i);
        scanf("%lf", &a1[i]);
        printf("\n");
    }
    for(int i = 0; i < 5; i++){
        printf("a2[%d]: ", i);
        scanf("%lf", &a2[i]);
        printf("\n");
    }

    pInterno( a1, a2, pi, 5 );

    return 0;
}

void pInterno( const double *a1, const double *a2, double *pi, int n ){
    for(int i = 0; i < n; i++){
        pi[i] = a1[i] * a2[i];
        printf("%.2lf x %.2lf = %.2lf\n", a1[i], a2[i], pi[i]);
    }
}