#include <stdio.h>
#include <stdlib.h>

int Calcula_dobro(int *ponteiro_a, int *ponteiro_b){
    *ponteiro_a = (*ponteiro_a)* 2;
    *ponteiro_b = (*ponteiro_b)* 2;

    return *ponteiro_a + *ponteiro_b;
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

    int resultado = Calcula_dobro(ponteiro_a, ponteiro_b);

    printf("Valor de A: %d | Valor de B: %d\n", a, b);

    printf("A soma do dobro dos numeros e: %d", resultado);

    return 0;
}
