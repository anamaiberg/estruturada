#include <stdio.h>
#include <stdlib.h>

struct Data{
    int dia, mes, ano;
};

struct Funcionario{
    int idade, cpf, cod_setor;
    float salario;
    char nome[50], sexo[2], cargo[30];
    struct Data data;

};

struct Funcionario informar_funcionario(){
    struct Funcionario local;

    printf("Informe seu nome: ");
    scanf("%s", local.nome);
    printf("Informe seu sexo: ");
    scanf("%s", local.sexo);
    printf("Informe seu cargo: ");
    scanf("%s", local.cargo);

    printf("Informe sua idade: ");
    scanf("%d", &local.idade);
    printf("Informe seu cpf: ");
    scanf("%d", &local.cpf);
    printf("Informe o codigo do seu setor: ");
    scanf("%d", &local.cod_setor);

    printf("Informe seu salario: ");
    scanf("%f", &local.salario);

    printf("Informe o dia do seu nascimento: ");
    scanf("%d", &local.data.dia);
    printf("Informe o mes do seu nascimento: ");
    scanf("%d", &local.data.mes);
    printf("Informe o ano do seu nascimento: ");
    scanf("%d", &local.data.ano);

    return local;
}

int main(){
    struct Funcionario funcionario1;

    funcionario1 = informar_funcionario();

    printf("-----Funcionario-----\n");
    printf("Nome: %s\nSexo: %s\nCargo: %s\n", funcionario1.nome, funcionario1.sexo, funcionario1.cargo);
    printf("Idade: %d\nCPF: %d\nCodigo do setor: %d\nSalario: R$ %.2f\n", funcionario1.idade, funcionario1.cpf, funcionario1.cod_setor, funcionario1.salario);
    printf("Data de nascimento: %d/%d/%d\n", funcionario1.data.dia, funcionario1.data.mes, funcionario1.data.ano);
    printf("---------------------");
}
