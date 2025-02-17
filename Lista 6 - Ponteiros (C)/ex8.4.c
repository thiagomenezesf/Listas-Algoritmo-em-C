#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void decompoeData( int diaDoAno, int ano, int *mes, int *dia );
bool ehBissexto( int ano );

int main(){
    int diaAno;
    int year;
    int month;
    int day;

    printf("Dia do ano: ");
    scanf("%d", &diaAno);

    printf("Ano: ");
    scanf("%d", &year);

    decompoeData( diaAno, year, &month, &day );

printf("O dia %d do ano %d cai no dia %d do mes %d.", diaAno, year, day, month);

}

void decompoeData( int diaDoAno, int ano, int *mes, int *dia ){
    int meses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(ehBissexto( ano )){
        meses[1] = 29;
    }
    *mes = 1;
    while(diaDoAno > meses[*mes - 1]){
        diaDoAno -= meses[*mes - 1];
        (*mes)++;
    }
    *dia = diaDoAno;
}

bool ehBissexto( int ano ){
    if(ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0){
        return true;
    }
    return false;
}