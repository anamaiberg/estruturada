#include <stdio.h>
#include <stdlib.h>

void Preenche_vetor(int *vetor, int tamanho){
    int i, numero;
    printf("Informe o numero inicial do vetor: ");
    scanf("%d", &numero);

    vetor[0] = numero;

    for(i=1; i<tamanho; i++){
        numero = numero+2;
        vetor[i] = numero;
    }
}

void Imprime(int *vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("\n Posicao %d = %d ", (i+1), vetor[i]);
    }
}

int main(){
    int *vetor;
    int x, total;

    printf("Informe o total de numeros do vetor: ");
    scanf("%d", &total);

    vetor = (int*) malloc (sizeof(int) * total);

    Preenche_vetor(vetor, total);
    Imprime(vetor, total);

    free(vetor);

    return 0;
}
