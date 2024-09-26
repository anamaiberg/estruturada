#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float medidas(char mensagem[100]){
    float medida;
    printf("%s", mensagem);
    scanf("%f", &medida);
    return medida;
}

float calcularAreaTriangulo(float medida1, float medida2){
    float area;
    area = (medida1*medida2)/2;
    return area;
}

float calcularAreaRetangulo(float medida1, float medida2){
    float area;
    area = medida1*medida2;
    return area;
}

float calcularAreaCirculo(float medida1){
    float area;
    area = 3.14 * (medida1*medida1);
    return area;
}

float exibirArea(char mensagem[], float area){
    printf("%s %.2f!", mensagem, area);
    return 0;
}

int main(){
    int continuar=1, opcao;
    float medida1, medida2, area;
    char mensagem[100];

    while(continuar!=0){
        printf("A area de qual figura voce quer descobrir? \nDigite 1 para triangulo, 2 para retangulo e 3 para circulo: ");
        scanf("%d", &opcao);

        if(opcao==1){
            strcpy(mensagem, "Informe a altura: ");
            medida1 = medidas(mensagem);
            strcpy(mensagem, "Informe a base: ");
            medida2 = medidas(mensagem);

            area = calcularAreaTriangulo(medida1, medida2);

            strcpy(mensagem, "A area do triangulo eh: ");
            exibirArea(mensagem, area);

        }
        else if(opcao==2){
            strcpy(mensagem, "Informe a altura: ");
            medida1 = medidas(mensagem);
            strcpy(mensagem, "Informe a largura: ");
            medida2 = medidas(mensagem);

            area = calcularAreaRetangulo(medida1, medida2);

            strcpy(mensagem, "A area do retangulo eh: ");
            exibirArea(mensagem, area);
        }
        else{
            strcpy(mensagem, "Informe o raio: ");
            medida1 = medidas(mensagem);

            area = calcularAreaCirculo(medida1);

            strcpy(mensagem, "A area do circulo eh: ");
            exibirArea(mensagem, area);
        }

        printf("\nDeseja continuar? Digite 0 para encerrar ");
        scanf("%d", &continuar);
    }
}
