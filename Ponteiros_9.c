#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int lista[5];
    int *ponteiro_lista[5];


    for(i = 0; i < 5; i++)
        ponteiro_lista[i] = &lista[i];

    for(i = 0; i < 5; i++) {
        printf("Informe o valor da posicao %d: ", i); scanf("%d", ponteiro_lista[i]);
    }

    for(i = 0; i < 5; i++)
        ponteiro_lista[i] = *ponteiro_lista[i] * 2;

    for(i = 0; i < 5; i++)
        printf("Valor na posicao %d - %d\n", i, ponteiro_lista[i]);


    return 0;
}
