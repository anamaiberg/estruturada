#include <stdio.h>
#include <stdlib.h>

struct Pessoa{
    int idade;
    char nome[50], endereco[100];
};

void Imprimir(struct Pessoa UmaPessoa){
    printf("Nome: %s\nIdade: %d\nEndereco: %s\n", UmaPessoa.nome, UmaPessoa.idade, UmaPessoa.endereco);
}

main(){
    struct Pessoa pessoa1;

    printf("Informe o nome da pessoa: ");
    scanf("%s", pessoa1.nome);
    printf("Informe a idade da pessoa: ");
    scanf("%d", &pessoa1.idade);
    printf("Informe o endereco da pessoa: ");
    scanf("%s", pessoa1.endereco);

    Imprimir(pessoa1);
}
