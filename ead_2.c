#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
    char nome[30];
    int matricula;
    int media;
};

void Preencher_alunos(struct Aluno *alunos, int quantidade) {
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %29s", alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Média: ");
        scanf("%d", &alunos[i].media);
        printf("\n");
    }
}

void Exibir_alunos(struct Aluno *alunos, int quantidade) {
    printf("\nDados dos alunos:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Média: %d\n\n", alunos[i].media);
    }
}

int main() {
    // 1- malloc
    printf("Alocando memória com malloc:\n");
    int num_alunos_1 = 10;
    struct Aluno *turma1 = (struct Aluno *)malloc(num_alunos_1 * sizeof(struct Aluno));
    if (turma1 == NULL) {
        perror("Erro ao alocar memória para turma1");
        return 1;
    }
    Preencher_alunos(turma1, num_alunos_1);
    Exibir_alunos(turma1, num_alunos_1);
    free(turma1);

    // 2- calloc
    printf("Usando calloc:\n");
    int num_alunos_2 = 5;
    struct Aluno *turma2 = (struct Aluno *)calloc(num_alunos_2, sizeof(struct Aluno));
    if (turma2 == NULL) {
        perror("Erro ao alocar memória para turma2");
        return 1;
    }
    Preencher_alunos(turma2, num_alunos_2);
    Exibir_alunos(turma2, num_alunos_2);
    free(turma2);

    // 3- realloc
    printf("Usando realloc:\n");
    int num_alunos_3 = 3;
    struct Aluno *turma3 = (struct Aluno *)malloc(num_alunos_3 * sizeof(struct Aluno));
    if (turma3 == NULL) {
        perror("Erro ao alocar memória para turma3");
        return 1;
    }
    Preencher_alunos(turma3, num_alunos_3);

    int novo_tamanho = 15;
    struct Aluno *temp = (struct Aluno *)realloc(turma3, novo_tamanho * sizeof(struct Aluno));
    if (temp == NULL) {
        perror("Erro ao realocar memória para turma3");
        free(turma3); 
        return 1;
    }
    turma3 = temp;

    printf("Adicione mais %d alunos:\n", novo_tamanho - num_alunos_3);
    Preencher_alunos(turma3 + num_alunos_3, novo_tamanho - num_alunos_3);
    Exibir_alunos(turma3, novo_tamanho);
    free(turma3);

    return 0;
}
