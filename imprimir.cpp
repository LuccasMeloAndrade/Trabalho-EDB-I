#include <iostream>
#include "cabecalho.h"
using namespace std;

void imprimir(int *v, int tamanho){
    for(int i = 0; i < tamanho; i++){
        cout << v[i] << " ";
    }

    cout << endl;
}