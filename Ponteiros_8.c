#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float lista[10];

    for(i = 0; i < 10; i++)
    {
        printf("Posicao %d - %p\n",i, &lista[i]);
    }

    return 0;
}
