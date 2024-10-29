#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    int num_matricula;
    char nome[50], curso[25];
};

struct Aluno informar_aluno(){
    struct Aluno local;

    printf("Informe a matricula do aluno: ");
    scanf("%d", &local.num_matricula);
    printf("Informe o nome do aluno: ");
    scanf("%s", local.nome);
    printf("Informe o curso do aluno: ");
    scanf("%s", local.curso);

    return local;
};

void imprimir(struct Aluno UmAluno){
    
    printf("Nome: %s // Numero da matricula: %d // Curso: %s\n", UmAluno.nome, UmAluno.num_matricula, UmAluno.curso);

}

int main(){
    int i;
    struct Aluno lista[5];

    for(i=0; i<5; i++){
        lista[i] = informar_aluno();
    }
    printf("Alunos: ");
    for(i=0; i<5; i++){
        imprimir(lista[i]);
    }
}