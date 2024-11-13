#include <stdio.h>
#include <stdlib.h>

void calculaNumeros(int *a, int *b)
{
    *a = *a + *b;
}

int main()
{
    int a = 0, b = 0;

    int *pa, *pb;

    printf("Digite o valor A: ");
    scanf("%d", &a);

    printf("Digite o valor B: ");
    scanf("%d", &b);

    pa = &a;
    pb = &b;

    calculaNumeros(pa, pb);

    printf("Valor de A: %d | ", a);
    printf("Valor de B: %d", b);

    return 0;
}
