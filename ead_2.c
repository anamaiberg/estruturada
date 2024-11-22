#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura Aluno
struct Aluno {
    char nome[30];
    int matricula;
    int media;
};

// Função para preencher os dados de um aluno
void preencherAlunos(struct Aluno *alunos, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Média: ");
        scanf("%d", &alunos[i].media);
        printf("\n");
    }
}

// Função para exibir os dados dos alunos
void exibirAlunos(struct Aluno *alunos, int quantidade) {
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Média: %d\n\n", alunos[i].media);
    }
}

int main() {
    // Exemplo 1: Uso de malloc
    printf("Usando malloc:\n");
    int n1 = 2;
    struct Aluno *turma1 = (struct Aluno *)malloc(n1 * sizeof(struct Aluno));
    if (turma1 == NULL) {
        printf("Erro ao alocar memória com malloc.\n");
        return 1;
    }
    preencherAlunos(turma1, n1);
    exibirAlunos(turma1, n1);
    free(turma1); // Libera a memória alocada com malloc

    // Exemplo 2: Uso de calloc
    printf("Usando calloc:\n");
    int n2 = 3;
    struct Aluno *turma2 = (struct Aluno *)calloc(n2, sizeof(struct Aluno));
    if (turma2 == NULL) {
        printf("Erro ao alocar memória com calloc.\n");
        return 1;
    }
    preencherAlunos(turma2, n2);
    exibirAlunos(turma2, n2);
    free(turma2); // Libera a memória alocada com calloc

    // Exemplo 3: Uso de realloc
    printf("Usando realloc:\n");
    int n3 = 2;
    struct Aluno *turma3 = (struct Aluno *)malloc(n3 * sizeof(struct Aluno));
    if (turma3 == NULL) {
        printf("Erro ao alocar memória inicial com malloc.\n");
        return 1;
    }
    preencherAlunos(turma3, n3);

    // Redimensionar a memória para mais alunos
    int novoTamanho = 4;
    turma3 = (struct Aluno *)realloc(turma3, novoTamanho * sizeof(struct Aluno));
    if (turma3 == NULL) {
        printf("Erro ao redimensionar memória com realloc.\n");
        return 1;
    }

    printf("Adicione mais %d alunos:\n", novoTamanho - n3);
    preencherAlunos(turma3 + n3, novoTamanho - n3);
    exibirAlunos(turma3, novoTamanho);
    free(turma3); // Libera a memória alocada/redimensionada com realloc

    return 0;
}
