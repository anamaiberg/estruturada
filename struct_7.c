#include <stdio.h>

struct Funcionario{
    int idade, cpf, cod_setor;
    float salario;
    char nome[50], sexo[2], cargo[30];
    struct Data data;
    
}

struct Data{
    int dia, mes, ano;
}
