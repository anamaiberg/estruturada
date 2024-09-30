#include <stdio.h>

int solicitar_numero(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    return numero;
}

void imprimir_vetor(int vetor[], int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("%d ", vetor[i]);
    }
}

int verificar_numero(int numero){
    if(numero>0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int positivos[100], negativos[100], opcao, numero, qtd_positivos=0, qtd_negativos=0;
    
    printf("Opcoes:\n1- Inserir um numero\n2- Imprimir um vetor\n3-Substituir um numero no vetor\n4- Sair\nEscolha uma opcao: ");
    scanf("%d", &opcao);
    
    while(opcao!=4){
        
        if(opcao==1){
            numero = solicitar_numero();
            if(verificar_numero(numero)==1){
                positivos[qtd_positivos] = numero;
                qtd_positivos++;
            }
            else{
                negativos[qtd_negativos] = numero;
                qtd_negativos++;
            }
        }
        
        if(opcao==2){
            printf("Vetor de numeros positivos: ");
            imprimir_vetor(positivos, qtd_positivos);
            printf("Vetor de numeros negativos: ");
            imprimir_vetor(negativos, qtd_negativos);
        }
        
        if(opcao==3){
            
        }
    }
    

    return 0;
}
