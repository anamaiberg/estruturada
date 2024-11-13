#include <stdio.h>
#include <stdlib.h>

int calculaDobro(int *pa, int *pb)
{
    *pa = (*pa)* 2;
    *pb = (*pb)* 2;

    return *pa + *pb;
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

    int resultado = calculaDobro(pa, pb);

    printf("Valor de A: %d | Valor de B: %d\n", a, b);

    printf("A soma do dobro dos numeros e: %d", resultado);

    return 0;
}
