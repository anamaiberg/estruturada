#include <stdio.h>
#include <stdlib.h>

void Preenche_vetor(int *vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("Informe o valor %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }
}

void Imprime(int *vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("%d ", vetor[i]);
    }
}

int main(){
    int *memoria;
    int bytes, opcao;

    printf("Informe o tamanho da memoria: ");
    scanf("%d", &bytes);

    memoria = (int*) calloc (bytes, sizeof(int));

    printf("Voce deseja:\n1- : Inserir um valor em uma determinada posiçãoda memoria\n2- Consultar o valor contido em uma determinada posição da memoria\n1 ou 2:");
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
