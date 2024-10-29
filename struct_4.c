#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 5
#define NOTA_APROVACAO 6.0

struct Aluno {
    int matricula;
    char nome[50];
    float nota1, nota2, nota3;
};

struct Aluno informar_aluno(){
    struct Aluno local;

    printf("Digite a matricula do aluno: ");
    scanf("%d", &local.matricula);
    printf("Digite o nome do aluno: ");
    scanf(" %s", local.nome);
    printf("Digite a nota da primeira prova do aluno: ");
    scanf("%f", &local.nota1);
    printf("Digite a nota da segunda prova do aluno: ");
    scanf("%f", &local.nota2);
    printf("Digite a nota da terceira prova do aluno: ");
    scanf("%f", &local.nota3);
    printf("\n");

    return local;
}

float calcular_media(struct Aluno aluno) {
    return (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3;
}

int encontrar_maior_nota1(struct Aluno alunos[]) {
    int indice_maior_nota1 = 0;
    float maior_nota1 = alunos[0].nota1;

    for (int i = 1; i < NUM_ALUNOS; i++) {
        if (alunos[i].nota1 > maior_nota1) {
            maior_nota1 = alunos[i].nota1;
            indice_maior_nota1 = i;
        }
    }
    return indice_maior_nota1;
}

int encontrar_maior_media(struct Aluno alunos[]) {
    int indice_maior_media = 0;
    float maior_media = calcular_media(alunos[0]);

    for (int i = 1; i < NUM_ALUNOS; i++) {
        float media = calcular_media(alunos[i]);
        if (media > maior_media) {
            maior_media = media;
            indice_maior_media = i;
        }
    }
    return indice_maior_media;
}

int encontrar_menor_media(struct Aluno alunos[]) {
    int indice_menor_media = 0;
    float menor_media = calcular_media(alunos[0]);

    for (int i = 1; i < NUM_ALUNOS; i++) {
        float media = calcular_media(alunos[i]);
        if (media < menor_media) {
            menor_media = media;
            indice_menor_media = i;
        }
    }
    return indice_menor_media;
}

void verificar_aprovacao(struct Aluno alunos[]) {
    for (int i = 0; i < NUM_ALUNOS; i++) {
        float media = calcular_media(alunos[i]);
        printf("Aluno %s // Matrícula: %d // Media = %.2f - %s\n", 
                alunos[i].nome, alunos[i].matricula, media, media >= NOTA_APROVACAO ? "Aprovado" : "Reprovado");
    }
}

int main() {
    struct Aluno alunos[NUM_ALUNOS];

    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Aluno %d: ", i+1);
        alunos[i] = informar_aluno();
    }

    int indice_maior_nota1 = encontrar_maior_nota1(alunos);
    printf("Aluno com a maior nota na primeira prova: %s (Matrícula: %d, Nota: %.2f)\n", 
            alunos[indice_maior_nota1].nome, alunos[indice_maior_nota1].matricula, alunos[indice_maior_nota1].nota1);

    int indice_maior_media = encontrar_maior_media(alunos);
    printf("Aluno com a maior média geral: %s (Matrícula: %d, Média: %.2f)\n", 
            alunos[indice_maior_media].nome, alunos[indice_maior_media].matricula, calcular_media(alunos[indice_maior_media]));

    int indice_menor_media = encontrar_menor_media(alunos);
    printf("Aluno com a menor média geral: %s (Matrícula: %d, Média: %.2f)\n", 
            alunos[indice_menor_media].nome, alunos[indice_menor_media].matricula, calcular_media(alunos[indice_menor_media]));

    verificar_aprovacao(alunos);

    return 0;
}
