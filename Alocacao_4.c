#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* Alocar(int tamanho) {
    char *palavra = (char *)malloc((tamanho + 1) * sizeof(char));
    return palavra;
}

void Ler(char *palavra, int tamanho) {
    printf("Digite a palavra: ");
    fgets(palavra, tamanho + 1, stdin);
}

void removerVogais(char *palavra, int tamanho) {
    int i, j = 0;
    for (i = 0; i < tamanho; i++) {
        if (palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u' &&
            palavra[i] != 'A' && palavra[i] != 'E' && palavra[i] != 'I' && palavra[i] != 'O' && palavra[i] != 'U') {
            palavra[j] = palavra[i];
            j++;
        }
    }
    palavra[j] = '\0';
}

void Imprimir(char *palavra) {
    printf("Palavra sem vogais: %s\n", palavra);
}

int main() {
    int tamanho;
    char *palavra;

    printf("Digite o tamanho da palavra: ");
    scanf("%d", &tamanho);
    getchar();

    palavra = Alocar(tamanho);

    Ler(palavra, tamanho);

    removerVogais(palavra, tamanho);

    Imprimir(palavra);

    free(palavra);

    return 0;
}
