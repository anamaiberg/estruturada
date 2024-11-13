#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificaOcorrencia(char *frase, char *palavra) {
    if (strstr(frase, palavra) != NULL) {
        printf("Ocorre");
    }
}


int main()
{
    char frase[20] = {"Ana Come Banana"}, palavra[10] = {"Ana"};

    char *pfrase = &frase, *ppalavra = &palavra;

    verificaOcorrencia(pfrase, ppalavra);

    return 0;
}
