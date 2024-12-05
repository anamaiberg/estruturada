#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Atribue(double *vetor, int tamanho){
    srand(time(0));
    for(int i=0; i<10; i++){
        vetor[i] = (rand() %100 + 1); 
    }
}

void Imprime(double *vetor){
    for(int i=0; i<10; i++){
        printf("%f ", vetor[i]);
    }
}

int main(){
    double *vetor;
    int tamanho;
    
    do{
        printf("Quantos valores desejas armazenar? (Pelo menos 10)  ");
        scanf("%d", &tamanho);
    }
    while(tamanho<10);
    
    
    vetor = (double *) malloc(sizeof(double) * tamanho);
    
    Atribue(vetor, tamanho);
    
    printf("10 primeiros numeros do vetor: ");
    Imprime(vetor);

    free(vetor);
    
}
