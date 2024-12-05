#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor, cont_zero=0;

    vetor = (int *)calloc(1500, sizeof(int)); 

    int contadorZero = 0;
    for (int i = 0; i < 1500; i++) {
        if (vetor[i] == 0) {
            cont_zero++;
        }
    }
    printf("Número de elementos com valor zero: %d\n", cont_zero);

    for (int i = 0; i < 1500; i++) {
        vetor[i] = i;
    }

    printf("Primeiros 10:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    printf("Últimos 10:\n");
    for (int i = 1490; i < 1500; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    return 0;
}
