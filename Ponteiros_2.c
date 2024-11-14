#include <stdio.h>
#include <stdlib.h>

int main(){

    int x = 10, y = 20;

    int *ponteiro_x, *ponteiro_y;

    ponteiro_x = &x;
    ponteiro_y = &y;

    int *maior;

    maior = (ponteiro_x > ponteiro_y) ? ponteiro_x : ponteiro_y;

    printf("Maior endereco: %p", maior);

    return 0;
}
