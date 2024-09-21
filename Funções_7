#include <stdio.h>

int Maior(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main() {
    int numeros[10], opcao, maior, temp, i, j;

    for(int i=0; i<10; i++){
        printf("Informe um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Deseja ordenar os numeros em ordem crescente (1) ou decrescente (2)? ");
    scanf("%d", &opcao);

    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            int maior = Maior(numeros[i], numeros[j]);
            if((opcao==1 && maior==numeros[i]) || (opcao==2 && maior==numeros[j])){
                temp = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = temp;
            }
        }
    }

    printf("Vetor ordenado:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
