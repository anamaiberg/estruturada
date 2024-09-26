#include <stdio.h>
#include <stdlib.h>

int Maior(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main()
{
    int num1, num2, maior;

    printf("Informe um numero: ");
    scanf("%d", &num1);
    printf("Informe um numero: ");
    scanf("%d", &num2);

    maior = Maior(num1, num2);

    printf("\nO maior numero e: %d ", maior);

    return 0;
}
