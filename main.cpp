#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "cabecalho.h"

using namespace std;

int main(){

    const int quant = 5000;

    int vetor[quant];

    srand(time(NULL));

    preencher(vetor, quant);

    double soma = 0;

    for(int i = 0; i < 10; i++)
    {
        clock_t inicio, fim;

        inicio = clock();

        busca_binaria(vetor, 0, quant - 1, 34);

        fim = clock();

        double tempo =
            (double)(fim - inicio) / CLOCKS_PER_SEC;

        soma += tempo;
    }

    double media = soma / 10;

    cout << "Quantidade: "
         << quant
         << endl;

    cout << "Media de 10 execucoes: "
         << fixed
         << setprecision(9)
         << media
         << " segundos"
         << endl;

    return 0;
}