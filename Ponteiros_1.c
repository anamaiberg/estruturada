#include <stdio.h>
#include <stdlib.h>

void imprimir(int inteiro, double real, char caracter){
    printf("%d \n", i);
    printf("%f \n", d);
    printf("%c \n\n", c);
}

int main(){
    int inteiro = 2;
    double real = 2.0;
    char caracter = 'A';

    imprimir(inteiro, real, caracter);

    int *ponteiro_inteiro = &inteiro;
    char *ponteiro_char = &caracter;
    double *ponteiro_real = &real;

    *ponteiro_inteiro = 10;
    *ponteiro_char = 'J';
    *ponteiro_real = 10.5;

    imprimir(inteiro, real, caracter);

    return 0;
}

