#include <stdio.h>
#include <stdlib.h>

int ordenador(int *ponteiro_x, int *ponteiro_y, int *ponteiro_z){
    int temp;

    if(*ponteiro_x == *ponteiro_y && *ponteiro_x == *ponteiro_z)
        return 1;

    if(*ponteiro_x > *ponteiro_y) {
        temp = *ponteiro_x;
        *ponteiro_x = *ponteiro_y;
        *ponteiro_y = temp;
    }
    if(*ponteiro_x > *ponteiro_z) {
        temp = *ponteiro_x;
        *ponteiro_x = *ponteiro_z;
        *ponteiro_z = temp;
    }
    if(*ponteiro_y > *ponteiro_z) {
        temp = *ponteiro_y;
        *ponteiro_y = *ponteiro_z;
        *ponteiro_z = temp;
    }

    return 0;
}

int main(){
    int x = 0, y = 0, z = 0, resultado = 0;
    int *ponteiro_x = &x, *ponteiro_y = &y, *ponteiro_z = &z;

    printf("Informe o valor X: "); scanf("%d", &x);
    printf("Informe o valor Y: "); scanf("%d", &y);
    printf("Informe o valor Z: "); scanf("%d", &z);

    resultado = ordenador(ponteiro_x, ponteiro_y, ponteiro_z);

    printf("Valor de X - %d | Valor de Y - %d | Valor de Z - %d", *ponteiro_x, *ponteiro_y, *ponteiro_z);

    return 0;
}
