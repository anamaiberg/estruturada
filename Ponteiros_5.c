#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0, y = 0;

    int *px, *py;

    printf("Digite o valor X: ");
    scanf("%d", &x);

    printf("Digite o valor Y: ");
    scanf("%d", &y);

    px = &x;
    py = &y;

    comparaValor(px, py);

    printf("Valor de X: %d | Valor de Y: %d", x, y);

    return 0;
}

void comparaValor(int *px, int *py)
{
    int *z;

    if(*px < *py)
    {
        z = *px;
        *px = *py;
        *py = z;
    }
}
