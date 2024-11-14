#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificaOcorrencia(char *frase, char *palavra){
    if (strstr(frase, palavra) != NULL) {
        printf("Ocorre");
    }
}


int main(){
    char frase[20] = {"Ana e Mariana comem banana"}, palavra[10] = {"Ana"};

    char *ponteiro_frase = &frase, *ponteiro_palavra = &palavra;

    verificaOcorrencia(ponteiro_frase, ponteiro_palavra);

    return 0;
}
