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

int main(){

    int i, n, maior, numeros[10];

    do{
        printf("Quantos numeros quieres informar? ");
        scanf("%d", &n);
    }while(n>10);

    for(i=0; i<n; i++){
        printf("Informe um numero: ");
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];

    for(i=1; i<n; i++){
        maior = Maior(maior, numeros[i]);
    }

    printf("O maior numero e: %d", maior);

    return 0;
}
