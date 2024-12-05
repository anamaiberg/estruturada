#include <stdio.h>
#include <stdlib.h>

int main() {
    int *lista = (int *)malloc(sizeof(int)*5);
    if (lista == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    printf("Digite 5 numero inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    printf("\nOs numeros digitados foram:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", lista[i]);
    }
    
    free(lista);

    return 0;
}
