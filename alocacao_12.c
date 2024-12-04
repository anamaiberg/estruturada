#include <stdio.h>

struct Produto{
  int codigo;
  char nome[50];
  int quantidade;
  float preco;
};

int main(){
    struct Produto *lista;
    int N;
    
    printf("Quantos produtos gostarias de cadastrar: ");
    scanf("%d", &N);
    
    lista = (Produto *) malloc(sizeof(Produto) * N);
    
    Solicita()
}
