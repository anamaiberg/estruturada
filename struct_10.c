#include <stdio.h>
#include <stdlib.h>

struct Carta{
    char naipe[30];
    int numero;
};
    
int main()
{
    struct Carta carta[52];
    struct Carta jogador1[4];
    struct Carta jogador2[4];
    int num, i;

    int qtd = -1;
    for (int i = 1; i <= 13; i++) {
        c[qtd++] = (struct Carta){"Copas", i};
        c[qtd++] = (struct Carta){"Paus", i};
        c[qtd++] = (struct Carta){"Espadas", i};
        c[qtd++] = (struct Carta){"Ouros", i};
    }
    for(i = 0; i < 5; i++){
        num = rand() % 52;
        jogador1[i] = carta[num];
        num = 0;
    }

    for(i = 0; i < 5; i++){
        num = rand() % 52;
        jogador2[i] = carta[num];
        num = 0;
    }

    printf("Cartas do jogador 1:\n");
    for(int i = 0; i < 5; i++){
        printf("Naipe: %s\n", jogador1[i].naipe);
        printf("Numero: %d\n\n", jogador1[i].numero);
    }

    printf("Cartas do jogador 2:\n");
    for(int i = 0; i < 5; i++){
        printf("Naipe: %s\n", jogador2[i].naipe);
        printf("Numero: %d\n\n", jogador2[i].numero);
    }
    for(i = 0; i < 55; i++){
        printf("Naipe: %s\n", carta[i].naipe);
        printf("Numero: %d\n\n", carta[i].numero);
    }

    return 0;
}
