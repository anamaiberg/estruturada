#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define TAMANHO 10


int maior1(int vetor[TAMANHO]){
    int i, num_maior=vetor[0];
    for(i=1; i<TAMANHO; i++){
        if(vetor[i]>num_maior){
            num_maior = vetor[i];
        }
    }
    return num_maior;
}

int maior2(int vetor[TAMANHO]){
    int i, num_maior=vetor[0], posicao_maior=0;
    for(i=1; i<TAMANHO; i++){
        if(vetor[i]>num_maior){
            num_maior = vetor[i];
            posicao_maior = i;
        }
    }
    return posicao_maior;
}

int menor1(int vetor[TAMANHO]){
    int i, num_menor=vetor[0];
    for(i=1; i<TAMANHO; i++){
        if(vetor[i]<num_menor){
            num_menor = vetor[i];
        }
    }
    return num_menor;
}

int menor2(int vetor[TAMANHO]){
    int i, num_menor=vetor[0], posicao_menor=0;
    for(i=1; i<TAMANHO; i++){
        if(vetor[i]<num_menor){
            num_menor = vetor[i];
            posicao_menor = i;
        }
    }
    return posicao_menor;
}



int main(){
    int numero[TAMANHO], i;

    for(i=0; i<TAMANHO; i++){
        printf("Informe um numero: ");
        scanf("%d", &numero[i]);
    }

    for(i=0; i<TAMANHO; i++){
        printf("%d ", numero[i]);
    }

    printf("\nMaior: %d", maior1(numero));
    printf("\nPosicao do maior: %d", maior2(numero));
    printf("\nMenor: %d", menor1(numero));
    printf("\nPosicao do menor: %d", menor2(numero));

    return 0;
}


