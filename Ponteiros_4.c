#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0, y = 0;

    int *px, *py;

    px = &x;
    py = &y;

    printf("Digite o valor X: ");
    scanf("%d", &x);

    printf("Digite o valor Y: ");
    scanf("%d", &y);

    altera_valor(px, py);

    printf("Valor de X: %d | Valor de Y: %d", x, y);

    return 0;
}

void altera_valor(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
