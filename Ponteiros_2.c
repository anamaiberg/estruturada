#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 10, y = 20;

    int *px, *py;

    px = &x;
    py = &y;

    int *maior;

    maior = (px > py) ? px : py;

    printf("Maior endereco: %p", maior);

    return 0;
}
