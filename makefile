all: bubblesort.o busca_binaria.o busca_sequencial.o imprimir.o main.o preencher.o quicksort.o
	g++ -Wall -std=c++17 bubblesort.o busca_binaria.o busca_sequencial.o imprimir.o main.o preencher.o quicksort.o -o main

bubblesort.o: bubblesort.cpp cabecalho.h
	g++ -Wall -std=c++17 -c bubblesort.cpp

busca_binaria.o: busca_binaria.cpp cabecalho.h
	g++ -Wall -std=c++17 -c busca_binaria.cpp

busca_sequencial.o: busca_sequencial.cpp cabecalho.h
	g++ -Wall -std=c++17 -c busca_sequencial.cpp

imprimir.o: imprimir.cpp cabecalho.h
	g++ -Wall -std=c++17 -c imprimir.cpp

main.o: main.cpp cabecalho.h
	g++ -Wall -std=c++17 -c main.cpp

preencher.o: preencher.cpp cabecalho.h
	g++ -Wall -std=c++17 -c preencher.cpp

quicksort.o: quicksort.cpp cabecalho.h
	g++ -Wall -std=c++17 -c quicksort.cpp

run: all
	./main

clean:
	rm -f *.o main