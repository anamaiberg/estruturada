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
    int i, positivos[100], negativos[100], opcao, opcao_vetor, numero, numero_antigo, numero_novo, qtd_positivos=0, qtd_negativos=0, corresponde=0;
    
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
            break;
        }
        
        else if(opcao==2){
            printf("Vetor de numeros positivos: ");
            imprimir_vetor(positivos, qtd_positivos);
            printf("Vetor de numeros negativos: ");
            imprimir_vetor(negativos, qtd_negativos);
        }
        
        else if(opcao==3){
            printf("Voce deseja substituir um numero do vetor de positivos(1) ou do vetor de negativos(0)? ");
            scanf("%d", &opcao_vetor);
            printf("Qual numero desejas substituir? ");
            scanf("%d", &numero_antigo);
            
            if(opcao_vetor==1){
                for(i=0; i<qtd_positivos; i++){
                    if(numero_antigo==positivos[i]){
                        printf("Qual o novo numero? ");
                        scanf("%d", &numero_novo);
                        positivos[i] = numero_novo;
                        corresponde=1;
                        break;
                    }
                    if(corresponde==0){
                        printf("Não há numero a ser substituido");
                    }
                }
            }
            else if(opcao_vetor==0){
                for(i=0; i<qtd_negativos; i++){
                    if(numero_antigo==negativos[i]){
                        printf("Qual o novo numero? ");
                        scanf("%d", &numero_novo);
                        negativos[i] = numero_novo;
                        corresponde=1;
                        break;
                    }
                    if(corresponde==0){
                        printf("Não há numero a ser substituido");
                    }
                }
                
            }
            
        }
    }
    

    return 0;
}
