#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula;
    char sobrenome[50];
    int ano_nacimento;
};

int main()
{
    int qtd_alunos = 0;
    printf("Quantos alunos serao cadastrados: ");
    scanf("%d", &qtd_alunos);

    struct aluno *alunos = (struct aluno *)malloc(qtd_alunos * sizeof(struct aluno));

    for(int i = 0; i< qtd_alunos; i++){
        printf("\nQual a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);

        printf("Qual o sobrenome do aluno: ");
        scanf("%s", &alunos[i].sobrenome);

        printf("Qual o ano_nacimento do aluno: ");
        scanf("%d", &alunos[i].ano_nacimento);

    }

    for(int i = 0; i< qtd_alunos; i++){
        printf("Matricula: %d\n",alunos[i].matricula);
        printf("Sobrenome: %s\n",alunos[i].sobrenome);
        printf("Ano nacimento: %d\n\n",alunos[i].ano_nacimento);
    }
    free(alunos);
    return 0;
}
