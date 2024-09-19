#include <stdio.h>
#include <stdlib.h>

int calculaPotencia(int base, int expoente){
    int i, resultado=1;
    for(i=0; i<expoente; i++){
        resultado *= base;
    }
    return resultado;
}

int main()
{
    int base, expoente, resultado;

    printf("Informe uma base para o calculo: ");
    scanf("%d",&base);
    printf("Informe um expoente para o calculo: ");
    scanf("%d",&expoente);

    resultado = calculaPotencia(base, expoente);

    printf("O resultado calculado da potenciacao e: %d", resultado);
}
