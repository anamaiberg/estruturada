#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro = 2;
    double real = 2.0;
    char caracter = 'A';

    impressora(inteiro, real, caracter);

    int *ponteiro_inteiro = &inteiro;
    char *ponteiro_char = &caracter;
    double *ponteiro_real = &real;

    *ponteiro_inteiro = 10;
    *ponteiro_char = 'J';
    *ponteiro_real = 10.5;

    impressora(inteiro, real, caracter);

    return 0;
}

void impressora(int i, double d, char c)
{
    printf("%d \n", i);
    printf("%f \n", d);
    printf("%c \n\n", c);
}

