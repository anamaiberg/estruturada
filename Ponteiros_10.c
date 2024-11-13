#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int array[5];
    int p_array[5];

    for(i = 0; i < 5; i++) {
        printf("Digite o valor da posicao %d: ", i); scanf("%d", &array[i]);
    }

    for(i = 0; i < 5; i++) {
        if((array[i] % 2) == 0)
            printf("Posicao %d - %p\n", i, &array[i]);
    }

    return 0;
}
