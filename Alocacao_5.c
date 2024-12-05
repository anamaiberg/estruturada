#include <stdio.h>
#include <stdlib.h>

int* Criar_vetor(int tamanho){
    int *array = (int *)malloc(tamanho * sizeof(int));
    for(int i = 0; i < tamanho; i++){
        printf("Escreva o %d valor: ", i+1);
        scanf("%d", &array[i]);
    }
    return array;
}

void verificar_multiplos(int *vetor, int tamanho){
    int valor = 0;
    printf("Escreva o valor para verificar os multiplos: ");
    scanf("%d", &valor);

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] % valor == 0){
            printf("O %d e multipo de %d\n", vetor[i], valor);
        }
    }
}

int main()
{
    int tamanho = 0;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *array = Criar_vetor(tamanho);
    verificar_multiplos(array, tamanho);
    free(array);

    return 0;
}
