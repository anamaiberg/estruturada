#include <stdio.h>
#include <stdlib.h>

int ordenador(int *px, int *py, int *pz) {
    int temp;

    if(*px == *py && *px == *pz)
        return 1;

    if(*px > *py) {
        temp = *px;
        *px = *py;
        *py = temp;
    }
    if(*px > *pz) {
        temp = *px;
        *px = *pz;
        *pz = temp;
    }
    if(*py > *pz) {
        temp = *py;
        *py = *pz;
        *pz = temp;
    }

    return 0;
}

int main()
{
    int x = 0, y = 0, z = 0, resultado = 0;
    int *px = &x, *py = &y, *pz = &z;

    printf("Digite o valor X: "); scanf("%d", &x);
    printf("Digite o valor Y: "); scanf("%d", &y);
    printf("Digite o valor Z: "); scanf("%d", &z);

    resultado = ordenador(px, py, pz);

    printf("Valor de X - %d | Valor de Y - %d | Valor de Z - %d", *px, *py, *pz);

    return 0;
}
