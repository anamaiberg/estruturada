#include <stdio.h>
#include <stdlib.h>

int* ler_e_verificar(int *qtd_certos) {
    int num_loteria[6], num_cartela[6];
    int j = 0;

    for (int i = 0; i < 6; i++) {
        printf("Escreva o %d numero da loteria: ", i + 1);
        scanf("%d", &num_loteria[i]);
    }

    for (int i = 0; i < 6; i++) {
        printf("Escreva o %d numero da sua cartela: ", i + 1);
        scanf("%d", &num_cartela[i]);
    }


    *qtd_certos = 0;
    for (int i = 0; i < 6; i++) {
        for (int k = 0; k < 6; k++) {
            if (num_loteria[i] == num_cartela[k]) {
                (*qtd_certos)++;
                break;
            }
        }
    }

    int *acertos = (int *)malloc((*qtd_certos) * sizeof(int));

    for (int i = 0; i < 6; i++) {
        for (int k = 0; k < 6; k++) {
            if (num_loteria[i] == num_cartela[k]) {
                acertos[j++] = num_loteria[i];
                break;
            }
        }
    }

    return acertos;
}

void imprimir(int *numeros_acertados, int qtd_certos) {
    if (qtd_certos > 0) {
        printf("Numeros corretos: ");
        for (int i = 0; i < qtd_certos; i++) {
            printf("%d ", numeros_acertados[i]);
        }
        printf("\n");
    } else {
        printf("Voce nao acertou nenhum numero.\n");
    }
}

int main() {
    int qtd_certos = 0;

    int *numeros_acertados = ler_e_verificar(&qtd_certos);

    imprimir(numeros_acertados, qtd_certos);

    free(numeros_acertados);

    return 0;
}
