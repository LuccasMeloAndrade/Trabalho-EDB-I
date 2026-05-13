#include <iostream>
#include "cabecalho.h"

int busca_binaria(int *vet, int inicio, int fim, int chave){

    if(inicio > fim)
    {
        return -1;
    }

    int meio = inicio + (fim - inicio) / 2;

    if(vet[meio] == chave)
    {
        return meio;
    }
    else if(vet[meio] < chave)
    {
        return busca_binaria(vet, meio + 1, fim, chave);
    }
    else
    {
        return busca_binaria(vet, inicio, meio - 1, chave);
    }
}