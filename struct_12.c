#include <stdio.h>
#include <stdlib.h>

struct Carros {
    char marca[15];
    int ano;
    float preco;
};

void Imprimir(struct Carros carros) {
    printf("Marca: %s\nAno: %d\nPreco: %.2f\n", carros.marca, carros.ano, carros.preco);
}

struct Carros Informar_carros() {
    struct Carros local;

    printf("Informe o nome da marca do carro: ");
    scanf("%s", local.marca);

    printf("Informe o ano do carro: ");
    scanf("%d", &local.ano);

    printf("Informe o preco do carro: ");
    scanf("%f", &local.preco);

    return local;
}

int main() {
    struct Carros carros[4];
    float p = 0;

    printf("Informe o preco maximo: ");
    scanf("%f", &p);

    for (int i = 0; i < 5; i++) {
        carros[i] = Informar_carros();
    }

    printf("\nCarros com o preço menor que o maximo:\n");
    for (int i = 0; i < 5; i++) {
        if (carros[i].preco < p) {
            Imprimir(carros[i]);
        }
    }

    return 0;
}
