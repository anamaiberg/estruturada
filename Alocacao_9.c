#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor, i = 0, tamanho = 1;
    vetor = (int *)malloc(tamanho * sizeof(int));

    while(1){
        printf("Escreva o valor do %d valor: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i] >= 0){
            tamanho++;
            void* realloc(void* vetor, size_t tamanho);
        }else{
            break;
        }
        i++;
    }

    for(int i = 0; i<tamanho; i++){
        printf("Valor %d do vetor: %d\n",i+1,vetor[i]);
    }
    return 0;
}
