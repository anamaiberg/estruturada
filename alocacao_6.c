#include <stdio.h>
#include <stdlib.h>

void Inserir()

void Imprimir(int *memoria, int bytes){
    for(int i=0; i<bytes; i++){
        printf("%d ", memoria[i]);
    }
}

int main(){
    int *memoria;
    int bytes, opcao;

    printf("Informe o tamanho da memoria: ");
    scanf("%d", &bytes);

    memoria = (int*) calloc (bytes, sizeof(int));

    printf("Voce deseja:\n1- : Inserir um valor em uma determinada posicao da memoria\n2- Consultar o valor contido em uma determinada posicao da memoria\n1 ou 2:");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            Inserir(memoria, bytes);
            Imprimir(memoria, bytes);
        case 2:
            Consultar(memoria, bytes);
            Imprimir(memoria, bytes);
        default:
            printf("Opcao invalida. Tente novamente");

    }

    free(memoria);

    return 0;
}
