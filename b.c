#include <stdio.h>
#include <stdlib.h>

int bissexto(int ano){
    if(ano%4==0 && ano%100!=0){
        return 1;
    }
    else if(ano%4==0 && ano%100==0 && ano%400==0){
        return 1;
    }
    else{
        return 0;
    }
}

int diasNoAno(int ano){
    int dias;
    if(bissexto(ano)==1){
        dias=366;
    }
    else{
        dias=365;
    }
    return dias;
}

int calcularDiasVividos(int ano_nascimento, int ano_atual){
    int dias_vividos=0, ano;
    for(ano=ano_nascimento; ano<ano_atual; ano++){
        dias_vividos += diasNoAno(ano);
    }
    return dias_vividos;
}

int calcularDiasFuturos(int ano_atual, int ano_futuro){
    int dias_futuros=0, ano;
    for(ano=ano_atual; ano<ano_futuro; ano++){
        dias_futuros += diasNoAno(ano);
    }
    return dias_futuros;
}

int main(){
    char nome[50];
    int ano_nascimento, ano_atual, ano_futuro, dias_vividos, dias_futuros, continuar;

    while(continuar!=0){
        printf("Informe seu nome: ");
        scanf("%s", nome);
        printf("Informe seu ano de nascimento: ");
        scanf("%d", &ano_nascimento);
        printf("Informe o ano atual: ");
        scanf("%d", &ano_atual);

        dias_vividos = calcularDiasVividos(ano_nascimento, ano_atual);
        printf("Ate o ano de %d, %s ja viveu %d dias", ano_atual, nome, dias_vividos);

        printf("\nInforme um ano futuro: ");
        scanf("%d", &ano_futuro);

        dias_futuros = calcularDiasFuturos(ano_atual, ano_futuro);
        printf("No ano de %d, %s tera vivido %d dias", ano_futuro, nome, dias_futuros);

        printf("\nVoce deseja continuar? (1 para sim e 0 para nao) ");
        scanf("%d", &continuar);
    }
}
