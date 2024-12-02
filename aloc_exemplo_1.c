#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    int Codigo;
    int anterior;
    int proximo;
};

void Incluir(struct Lista* minhaLista,int contador, int codigo)
{
    minhaLista[contador].anterior = 0;
    minhaLista[contador].Codigo = codigo;
    minhaLista[contador].proximo = 0;

    if (contador > 0)
    {
        minhaLista[contador - 1].proximo = codigo;
        minhaLista[contador].anterior = minhaLista[contador - 1].Codigo;
    }
}

void Listar(struct Lista* minhaLista,int contador)
{
    int x;
    for (x=0; x<contador;x++)
    {
        printf("\n----------------------------");
        printf("\nanterior: %d ",minhaLista[x].anterior );
        printf("\nCodigo:   %d ",minhaLista[x].Codigo );
        printf("\nproximo:  %d ",minhaLista[x].proximo );
        printf("\n----------------------------");
    }
}

int main()
{
    int fim=99;
    int contador = 0;
    int codigo;
    struct Lista* minhaLista;

    minhaLista = 0;

    while (fim > 0)
    {
        printf("\nInforme: 1-Incluir  2-Listar  0-Sair :  ");
        scanf("%d",&fim);

        switch (fim)
        {
        case 1:
            if (minhaLista == 0)
            {
                minhaLista = (struct Lista*) malloc(sizeof(struct Lista));
            }
            else
            {
                minhaLista = (struct Lista*) realloc(  minhaLista,   sizeof(struct Lista) * (contador+1));
            }

            printf("\nInforme o Codigo: ");
            scanf("%d",&codigo);
            Incluir(minhaLista,contador,codigo);
            contador++;
            break;

            case 2:
                Listar(minhaLista,contador);
                break;
        }

    }

    if (minhaLista != 0)
    {
        free(minhaLista);
    }

    return 0;
}