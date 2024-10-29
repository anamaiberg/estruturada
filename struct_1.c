#include <stdio.h>
#include <stdlib.h>

struct Horario{
    int hora, minutos, segundos;
};

struct Data{
    int dia, mes, ano;
};

struct Compromisso{
    struct Data data;
    struct Horario horario;
    char texto[100];
};

void imprimir(struct Compromisso UmCompromisso){
    printf("Compromisso:\nData: %d/%d/%d\nHorario: %d:%d:%d\nDescricao: %s\n",
           UmCompromisso.data.dia, UmCompromisso.data.mes, UmCompromisso.data.ano,
           UmCompromisso.horario.hora, UmCompromisso.horario.minutos, UmCompromisso.horario.segundos, UmCompromisso.texto);
}

struct Compromisso Informar_compromisso(){
    struct Compromisso local;

    printf("Informe o dia: ");
    scanf("%d", &local.data.dia);
    printf("\nInforme o mes: ");
    scanf("%d", &local.data.mes);
    printf("\nInforme o ano: ");
    scanf("%d", &local.data.ano);

    printf("\nInforme a hora: ");
    scanf("%d", &local.horario.hora);
    printf("\nInforme os minutos: ");
    scanf("%d", &local.horario.minutos);
    printf("\nInforme os segundos: ");
    scanf("%d", &local.horario.segundos);

    printf("\nInforme a descricao: ");
    scanf("%s", local.texto);

    return local;
};

int main(){
    struct Compromisso compromisso1;
    compromisso1.horario.hora = 12;
    compromisso1.horario.minutos = 50;
    compromisso1.horario.segundos = 33;
    compromisso1.data.ano = 2006;
    compromisso1.data.mes = 3;
    compromisso1.data.dia = 29;
    strcpy(compromisso1.texto, "muito importante");

    struct Compromisso lista[10];

    lista[0] = compromisso1;
    lista[1] = Informar_compromisso();

    for (int i=0; i<2; i++)
    {
        imprimir(lista[i]);
    }


}
