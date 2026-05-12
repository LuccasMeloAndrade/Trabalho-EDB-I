#include <iostream>
#include "cabecalho.h"


int busca_binaria(int *vet, int inicio, int fim, int chave){
    int meio = inicio + (fim - inicio) / 2; // achar o indice do meio

    if (inicio > fim)
    {
        return -1; // caso não encontre a chave
    }
    
    while (inicio < fim)
    {
        if (vet[meio] == chave)                                 // encontrou a chave no meio
        {
            return meio;
        }
        else if (vet[meio] < chave)
        {
            return busca_binaria(vet, meio + 1, fim, chave);   // procura a chave para o lado direito do meio
        }
        else
        {
            return busca_binaria(vet, inicio, meio - 1, chave); // procura a chave para o lado esquerdo do meio
        }   
    }
}