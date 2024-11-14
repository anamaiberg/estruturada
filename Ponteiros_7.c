#include <stdio.h>
#include <stdlib.h>

void Calcula_numeros(int *a, int *b){
    *a = *a + *b;
}

int main(){
    int a = 0, b = 0;

    int *ponteiro_a, *ponteiro_b;

    printf("Informe o valor A: ");
    scanf("%d", &a);

    printf("Informe o valor B: ");
    scanf("%d", &b);

    ponteiro_a = &a;
    ponteiro_b = &b;

    Calcula_numeros(ponteiro_a, ponteiro_b);

    printf("Valor de A: %d | ", a);
    printf("Valor de B: %d", b);

    return 0;
}
