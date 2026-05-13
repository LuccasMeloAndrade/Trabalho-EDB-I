#include <iostream>
#include "cabecalho.h"

using namespace std;

int particao(int *vet, int inicio, int fim){

    int pivo = vet[(inicio + fim) / 2];  // escolha do pivo

    int i = inicio;                      // indice da esquerda
    int j = fim;                         // indice da direita

    while(i <= j){

        while(vet[i] < pivo){           // avança para direita
            i++;
        }

        while(vet[j] > pivo){          // avança para esquerda
            j--;
        }

        //troca
        if(i <= j){

            int aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;

            i++;
            j--;
        }
    }
    //retorna a posição
    return i;
}

void quicksort(int *vet, int inicio, int fim){

    if(inicio < fim){

        int posicao = particao(vet, inicio, fim); // acha a posição central

        quicksort(vet, inicio, posicao - 1);      // organiza o lado esquerdo
        quicksort(vet, posicao, fim);             // organiza o lado direito
    }
}