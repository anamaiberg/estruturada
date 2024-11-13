#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    int *px, *py;
    int *maior_endereco;

    printf("Digite o valor X: ");
    scanf("%d", &x);

    printf("Digite o valor Y: ");
    scanf("%d", &y);

    px = &x;
    py = &y;

    maior_endereco = (px > py) ? px : py;

    printf("Conteudo do maior endereco: %d\n", *maior_endereco);

    return 0;
}
