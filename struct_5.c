#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 10

struct Aluno {
    int matricula;
    char nome[50];
    int codigo_disciplina;
    float nota1;
    float nota2;
};

float calcular_media_ponderada(float nota1, float nota2) {
    return (nota1 + nota2 * 2.0) / 3.0;
}

void solicitar_dados_alunos(struct Aluno alunos[], int num_alunos) {
    for (int i = 0; i < num_alunos; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Digite a matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Digite o nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Digite o codigo da disciplina: ");
        scanf("%d", &alunos[i].codigo_disciplina);
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);
    }
}


int main() {
    struct Aluno alunos[MAX_ALUNOS];
    int num_alunos;

    printf("Digite o numero de alunos (maximo %d): ", MAX_ALUNOS);
    scanf("%d", &num_alunos);

    if (num_alunos > MAX_ALUNOS || num_alunos <= 0) {
        printf("Numero de alunos invalido. Deve ser entre 1 e %d\n", MAX_ALUNOS);
        return 1;
    }

    solicitar_dados_alunos(alunos, num_alunos);

    printf("\nListagem dos Alunos com suas Medias Finais:\n");
    printf("--------------------------------------------------------\n");
    printf("| Matricula | Nome               | Media Final         |\n");
    printf("--------------------------------------------------------\n");

    for (int i = 0; i < num_alunos; i++) {
        float media_final = calcular_media_ponderada(alunos[i].nota1, alunos[i].nota2);
        printf("| %-10d | %-18s | %.2f             |\n", alunos[i].matricula, alunos[i].nome, media_final);
    }

    printf("--------------------------------------------------------\n");

    return 0;
}
