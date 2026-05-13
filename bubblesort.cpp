#include "cabecalho.h"

void bubblesort(int *vet, int tam){
    int i, j;

    for ( i = 0; i < tam; i++)
    {
        int troca = 0;                         // indica se houve troca no vetor
        for ( j = 0; j < tam - 1 - i; j++)
        {
            if (vet[j] > vet[j + 1])
            {
                int aux;                       // troca de elementos
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
                troca++;
            }
        }
        if (troca == 0)                        //usado para verificar se o vetor ja esta ordenado
        {
            break;
        }
        
    }
}