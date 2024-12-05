#include <stdio.h>
#include <stdlib.h>

int* Cria_vetor(int tamanho){
    int *lista = (int *)malloc(tamanho * sizeof(int));
    for(int i = 0; i < tamanho; i++){
        printf("Escreva o %d valor: ", i+1);
        scanf("%d", &lista[i]);
    }
    return lista;
}

void Verifica_multiplos(int *vetor, int tamanho){
    int valor = 0;
    printf("Escreva o valor para verificar os multiplos: ");
    scanf("%d", &valor);

    for(int i = 0; i < tamanho; i++){
        if(vetor[i] % valor == 0){
            printf("O %d e multipo de %d\n", vetor[i], valor);
        }
    }
}

int main(){
    int tamanho;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *lista = Cria_vetor(tamanho);
    Verifica_multiplos(lista, tamanho);
    free(lista);

    return 0;
}
