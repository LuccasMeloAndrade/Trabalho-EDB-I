#include <iostream>
#include "cabecalho.h"

int busca_sequencial(int *vet, int tamanho, int chave){
    int i;

    for ( i = 0; i < tamanho; i++)     // percorre todo o vetor
    {
        if (vet[i] == chave)           // encontrou a chave
        {
            return i;                  // retorna a posição
        }
        return -1;                     // chave não encontrada
    }
}