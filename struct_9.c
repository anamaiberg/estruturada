#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    int matricula;
    float media_final;
    char nome[50];
};

struct Aluno Informar_aluno(){
    struct Aluno local;

    printf("Informe o nome do aluno: ");
    scanf("%s", local.nome);
    printf("Informe a matricula do aluno: ");
    scanf("%d", &local.matricula);
    printf("Informe a media final do aluno: ");
    scanf("%f", &local.media_final);

    return local;
};

int main()
{
    int i, num_aprovados=0, num_reprovados=0;
    struct Aluno alunos[10];
    struct Aluno aprovados[10];
    struct Aluno reprovados[10];

    for(i=0; i<4; i++){
        alunos[i] = Informar_aluno();
    }

    for(i=0; i<4; i++){
        if(alunos[i].media_final >= 5){
            aprovados[num_aprovados] = alunos[i];
            num_aprovados++;
        }
        else{
            reprovados[num_reprovados] = alunos[i];
            num_reprovados++;
        }
    }

    printf("\nAlunos aprovados: \n");
    for(i=0; i<num_aprovados; i++){
        printf("Nome: %s - Matricula: %d - Media final: %.2f\n", aprovados[i].nome, aprovados[i].matricula, aprovados[i].media_final);
    }

    printf("\nAlunos reprovados: \n");
    for(i=0; i<num_reprovados; i++){
        printf("Nome: %s - Matricula: %d - Media final: %.2f\n", reprovados[i].nome, reprovados[i].matricula, reprovados[i].media_final);
    }

    return 0;
}
