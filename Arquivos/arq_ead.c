#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *Arq;
    int ch;
    Arq = fopen("arq.txt", "r");

    if (Arq == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    printf("Conteúdo do arquivo:\n");
    while ((ch = fgetc(Arq)) != EOF) {
        putchar(ch);
    }

    fclose(Arq);

    return 0;
    
}
