#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float array[10];

    for(i = 0; i < 10; i++)
    {
        printf("Posicao %d - %p\n",i, &array[i]);
    }

    return 0;
}
