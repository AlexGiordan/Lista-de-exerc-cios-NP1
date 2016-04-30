#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	struct Nodo *ProximoNodo;
	int Infomacao;
}Nodo;

Nodo *AlocarLista();

int VerificarListaAlocada(Nodo *Lista);
