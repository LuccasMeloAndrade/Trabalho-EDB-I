#include <iostream>
#include "cabecalho.h"

int busca_sequencial(int *vet, int tamanho, int chave){

    for(int i = 0; i < tamanho; i++)
    {
        if(vet[i] == chave)
        {
            return i;
        }
    }

    return -1;
}