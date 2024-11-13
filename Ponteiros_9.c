#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int array[5];
    int *p_array[5];


    for(i = 0; i < 5; i++)
        p_array[i] = &array[i];

    for(i = 0; i < 5; i++) {
        printf("Digite o valor da posicao %d: ", i); scanf("%d", p_array[i]);
    }

    for(i = 0; i < 5; i++)
        p_array[i] = *p_array[i] * 2;

    for(i = 0; i < 5; i++)
        printf("Valor na posicao %d - %d\n", i, p_array[i]);


    return 0;
}
