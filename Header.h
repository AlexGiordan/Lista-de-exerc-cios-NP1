#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo{
	struct Nodo *ProximoNodo;
	int Informacao;
	int CabecaDaLista;
}Nodo;

Nodo *AlocarLista();

int VerificarListaAlocada(Nodo *Lista);

void InicializarListaCircular(Nodo *Lista);

int VerificarSeEstaVazia(Nodo *Lista);

void AtribuirNodoParaALista(Nodo *Lista, int Informacao);

int PegarNovaInformacao();

