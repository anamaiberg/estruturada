#include <stdio.h>
#include <stdlib.h>

void Preenche_vetor(int *vetor, int tamanho){
    int impar = 0, par = 0;
    for(int i = 0; i < tamanho; i++){
        printf("Escreva o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
        if(vetor[i]%2 == 1){
            impar++;
        }else{
            par++;
        }
    }
    printf("Quantidade impar: %d\n", impar);
    printf("Quantidade par: %d", par);
}

int main()
{
    int *lista, tamanho;

    printf("Qual o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *lista = (int *)malloc(tamanho * sizeof(int));
    Preenche_vetor(lista, tamanho);
    free(lista);

    return 0;
}
