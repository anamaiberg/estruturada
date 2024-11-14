#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    int *ponteiro_x, *ponteiro_y;
    int *maior_endereco;

    printf("Informe o valor X: ");
    scanf("%d", &x);

    printf("Informe o valor Y: ");
    scanf("%d", &y);

    ponteiro_x = &x;
    ponteiro_y = &y;

    maior_endereco = (ponteiro_x > ponteiro_y) ? ponteiro_x : ponteiro_y;

    printf("Conteudo do maior endereco: %d\n", *maior_endereco);

    return 0;
}
