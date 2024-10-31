#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    int idade;
    char nome[50];
    int telefone;
};

void Imprimir(struct Pessoa pessoas[], int n) {
    struct Pessoa local;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                local = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = local;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("Nome: %s\nIdade: %d\nTelefone: %d\n", pessoas[i].nome, pessoas[i].idade, pessoas[i].telefone);
    }
}

int main() {
    struct Pessoa pessoas[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe o nome da pessoa: ");
        scanf("%s", pessoas[i].nome);
        printf("Informe a idade da pessoa: ");
        scanf("%d", &pessoas[i].idade);
        printf("Informe o telefone da pessoa: ");
        scanf("%d", &pessoas[i].telefone);
    }

    Imprimir(pessoas, 5);

    return 0;
}
