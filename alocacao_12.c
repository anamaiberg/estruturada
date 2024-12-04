#include <stdio.h>
#include <stdlib.h>

struct Produto {
    int codigo;
    char nome[50];
    int quantidade;
    float preco;
};

void Solicitar(struct Produto *lista, int N) {
    for (int i = 0; i < N; i++) {
        printf("Produto %d:\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &lista[i].codigo);
        printf("Nome: ");
        scanf("%s", lista[i].nome);
        printf("Quantidade: ");
        scanf("%d", &lista[i].quantidade);
        printf("Preco: ");
        scanf("%f", &lista[i].preco);
    }
}

int main() {
    struct Produto *lista;
    int N;

    printf("Quantos produtos gostarias de cadastrar: ");
    scanf("%d", &N);

    lista = (struct Produto *)malloc(sizeof(struct Produto) * N);

    if (lista == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf("Informe os dados dos produtos\n");
    Solicitar(lista, N);

    // Liberação de memória
    free(lista);

    return 0;
}

/**
 * void Solicitar(struct Produto *lista, int N) {
    for (int i = 0; i < N; i++) {
        struct Produto *p = &lista[i];  // Ponteiro para a struct atual
        printf("Produto %d:\n", i + 1);

        printf("Codigo: ");
        scanf("%d", &p->codigo);
        printf("Nome: ");
        scanf("%s", p->nome);
        printf("Quantidade: ");
        scanf("%d", &p->quantidade);
        printf("Preco: ");
        scanf("%f", &p->preco);
    }
}
**/
