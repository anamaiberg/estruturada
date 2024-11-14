#include <stdio.h>
#include <stdlib.h>

void Compara_valor(int *ponteiro_x, int *ponteiro_y){
    int *z;

    if(*ponteiro_x < *ponteiro_y)
    {
        z = *ponteiro_x;
        *ponteiro_x = *ponteiro_y;
        *ponteiro_y = z;
    }
}

int main(){
    int x = 0, y = 0;

    int *ponteiro_x, *ponteiro_y;

    printf("Informe o valor X: ");
    scanf("%d", &x);

    printf("Informe o valor Y: ");
    scanf("%d", &y);

    ponteiro_x = &x;
    ponteiro_y = &y;

    Compara_valor(ponteiro_x, ponteiro_y);

    printf("Valor de X: %d | Valor de Y: %d", x, y);

    return 0;
}


