#include <stdio.h>
#include <stdlib.h>

float calcularConsumo(float distancia, float quantidade){
    float consumo;
    consumo = distancia/quantidade;
    return consumo;
}

int main(){
    float distancia, quantidade, consumo;

    printf("Qual a distancia percorrida em km? ");
    scanf("%f", &distancia);
    printf("Qual a quantidade de litros consumida? ");
    scanf("%f", &quantidade);

    consumo = calcularConsumo(distancia, quantidade);

    if(consumo<8){
        printf("Venda o carro!");
    }
    else if(consumo<12){
        printf("Economico!");
    }
    else{
        printf("Super economico!");
    }
}
