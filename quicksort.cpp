#include <iostream>
#include "cabecalho.h"

int particao(int *vet, int inicio, int fim){
    int pivo = (vet[inicio] + vet[fim] + vet[(inicio + fim) / 2]) / 3; // pivo com mediana 3

    while (inicio < fim)
    {
        while (inicio < fim && vet[inicio] <= pivo) // avança o indice da esquerda
        {
            inicio++;
        }
        while (inicio < fim && vet[fim] >= pivo)    // regride o indice da direita
        {
            fim--;
        }
        // troca os elementos
        int aux;
        aux = vet[inicio];
        vet[inicio] = vet[fim];
        vet[fim] = aux;
    }
    return inicio; // retorna o meio
}

void quicksort(int *vet, int inicio, int fim){
    if (inicio < fim)
    {
        int posicao = particao(vet, inicio, fim); // posiçao do meio
        quicksort(vet, inicio, posicao);          // ordena o lado esquerdo do pivo
        quicksort(vet, posicao + 1, fim);         // ordena o lado direito do pivo
    }
}