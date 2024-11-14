#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int lista[5];
    int ponteiro_lista[5];

    for(i = 0; i < 5; i++) {
        printf("Digite o valor da posicao %d: ", i); scanf("%d", &lista[i]);
    }

    for(i = 0; i < 5; i++) {
        if((array[i] % 2) == 0)
            printf("Posicao %d - %p\n", i, &lista[i]);
    }

    return 0;
}
