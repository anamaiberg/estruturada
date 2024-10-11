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

void imprimir(struct compromisso1){
    printf("Compromisso:\nData: %d\nHorario: %d\nDescricao: %s", Compromisso.data, Compromisso.horario, Compromisso.texto);
}


int main(){
    struct Horario horario1;
    horario1.hora = 12;
    horario1.minutos = 50;
    horario1.segundos = 33;

    struct Data data1;
    data1.ano = 2006;
    data1.mes = 3;
    data1.dia = 29;

    struct Compromisso compromisso1;
    compromisso1.data = data1;
    compromisso1.horario = horario1;
    strcpy(compromisso1.texto, "muito importante");

    imprimir(comprmisso1);

}

