#include "cabecalho.h"
#include <cstdlib>

void preencher(int *v, int tam){
    for (int i = 0; i < tam; i++)
    {
        v[i] = rand() % tam;
    }
}