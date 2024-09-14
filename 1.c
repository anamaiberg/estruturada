
#include <stdio.h>
#include <stdlib.h>


void DesenhaLinha(int numero){
    int i;
    for(i=0; i<numero; i++){
        printf("=");
    }
    return 0;
}

int intervalo(int menor, int maior){
    int i, soma=0;
    for(i=menor; i<=maior; i++){
        soma+=i;
    }
    return soma;
}

int main(){
    int n, n1, n2, esc;
    printf("Tamanho da linha: ");
    scanf("%d", &n);

    while(esc!=0){
        printf("Primeiro numero: ");
        scanf("%d", &n1);
        printf("Segundo numero: ");
        scanf("%d", &n2);
        DesenhaLinha(n);

        //resultado=intervalo(n1, n2);
       //printf("\nSoma dos intervalos: %d", resultado);
        printf("\nSoma dos intervalos: %d", intervalo(n1,n2));

        printf("\nDeseja continuar? (0=nao): ");
        scanf("%d", &esc);
    }
    return 0;
}

