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
    int *vetor;
    int total;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &total);

    vetor = (int*) malloc (sizeof(int) * total);

    Preenche_vetor(vetor, total);
    Imprime(vetor, total);

    free(vetor);

    return 0;
}
