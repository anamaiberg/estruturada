#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Dados {
    char Nome[50];
    char Endereco[100];
    char Cidade[50];
    char Email[100];
    int Cep;
    struct Data dataNasc;
};

struct Dados Informar_dados() {
    struct Dados local;
    printf("Digite seu nome: ");
    scanf("%s", &local.Nome);
    printf("Digite seu endereco: ");
    scanf("%s", &local.Endereco);

    printf("Digite o dia do seu nascimento: ");
    scanf("%d", &local.dataNasc.dia);
    printf("Digite o mes do seu nascimento: ");
    scanf("%d", &local.dataNasc.mes);
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &local.dataNasc.ano);
    
    printf("Digite a sua cidade: ");
    scanf("%s", &local.Cidade);
    printf("Digite seu cep (sem tracos): ");
    scanf("%d", &local.Cep);
    printf("Digite seu email: ");
    scanf("%s", &local.Email);
    
    return local;
}

void Validar_Dados(struct Dados dados) {
    if (dados.dataNasc.dia < 1 || dados.dataNasc.dia > 31) {
        printf("Dia invalido!\n");
    }
    if (dados.dataNasc.mes < 1 || dados.dataNasc.mes > 12) {
        printf("Mes invalido!\n");
    }
    if (dados.dataNasc.ano < 1900 || dados.dataNasc.ano > 2024) {
        printf("Ano invalido!\n");
    }
    if (dados.Cep < 10000000 || dados.Cep > 99999999) {
        printf("Cep invalido!\n");
    }
    if (strchr(dados.Email, '@') == NULL) {
        printf("Email invalido!\n");
    }
}

int main() {
    struct Dados pessoa = Informar_dados();
    Validar_dados(pessoa);
    return 0;
}
