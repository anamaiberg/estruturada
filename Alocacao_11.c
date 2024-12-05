#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    int matricula;
    char sobrenome[50];
    int ano_nascimento;
};

int main()
{
    int qtd_alunos = 0;
    printf("Quantos alunos serao cadastrados: ");
    scanf("%d", &qtd_alunos);

    struct Aluno *alunos = (struct Aluno *)malloc(qtd_alunos * sizeof(struct Aluno));

    for(int i = 0; i< qtd_alunos; i++){
        printf("\nQual a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);

        printf("Qual o sobrenome do aluno: ");
        scanf("%s", alunos[i].sobrenome);

        printf("Qual o ano_nascimento do aluno: ");
        scanf("%d", &alunos[i].ano_nascimento);

    }

    for(int i = 0; i< qtd_alunos; i++){
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Sobrenome: %s\n", alunos[i].sobrenome);
        printf("Ano nascimento: %d\n\n", alunos[i].ano_nascimento);
    }

    free(alunos);
    return 0;
}
