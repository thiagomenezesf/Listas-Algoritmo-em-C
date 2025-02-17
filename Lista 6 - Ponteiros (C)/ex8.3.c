#include <stdio.h>
#include <stdlib.h>

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg );

int main(){
    int totSec;
    int h;
    int m;
    int s;

    printf("Total de segundos: ");
    scanf("%d", &totSec);

    decompoeTempo(totSec, &h, &m, &s);
    printf("%d segundo(s) corresponde(m) a:\n    %d hora(s)\n    %d minuto(s)\n    %d segundo(s)", totSec, h, m, s);

    return 0;
}

void decompoeTempo( int totalSeg, int *horas, int *minutos, int *seg ){
    *horas = totalSeg / 3600;
    totalSeg = totalSeg - *horas * 3600;
    *minutos = totalSeg / 60;
    *seg = totalSeg - *minutos * 60;
}