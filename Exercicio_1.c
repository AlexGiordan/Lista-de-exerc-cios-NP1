                                                                                                                                                                                                                                                                                                      /*UNIVERSIDADE FEDERAL DA FRONTEIRA SUL - UFFS
  CIÊNCIA DA COMPUTAÇÃO
	ALEX GIORDAN
	ESTRUTURAS DE DADOS 2016/1
	LISTA DE EXERCICIOS NP1
	DESCRIÇÃO DOS EXERCICIOS https://github.com/AlexGiordan/Lista-de-exerc-cios-NP1.git	 
*/
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(){
	struct Nodo *Lista;

	Lista = NULL;
	Lista = AlocarLista();

	if (VerificarListaAlocada(Lista)) {
		printf("\nLista Alocada Com Sucesso!");
	}
	else {
		printf("\nLista Não Foi Alocada!");
	}

	InicializarListaCircular(Lista);

	if(VerificarSeEstaVazia(Lista)){
		printf("\nA Lista Esta Vazia!");
	}
	else{
		printf("\nA Lista Não Esta Vazia!");
	}

	AtribuirNodoParaALista(Lista, PegarNovaInformacao());

	AtribuirNodoParaALista(Lista, PegarNovaInformacao());

	AtribuirNodoParaALista(Lista, PegarNovaInformacao());

	ExibirLista(Lista);

	free(Lista);
	return 0;
}

Nodo *AlocarLista(){
  return (Nodo *) malloc(sizeof(Nodo));
}

int VerificarListaAlocada(Nodo *Lista){
	if(!Lista)
		return 0;
	else
		return 1;
}

void 	InicializarListaCircular(Nodo *Lista){
	Lista->ProximoNodo   = NULL;
	Lista->Informacao    = 0;
	Lista->CabecaDaLista = 0;
}

int VerificarSeEstaVazia(Nodo *Lista){
	if ((Lista->ProximoNodo == NULL) && (Lista->Informacao == 0) && (Lista->CabecaDaLista == 0))
		return 1;
	else
		return 0;
}

void AtribuirNodoParaALista(Nodo *Lista, int Informacao){
	Nodo *ElementoAuxiliar, *NovoNodo;

	if(VerificarSeEstaVazia(Lista)){
		Lista->ProximoNodo   = Lista;
		Lista->CabecaDaLista = 1;
		Lista->Informacao    = Informacao;
	
	}
	else{
		ElementoAuxiliar = Lista;

		NovoNodo = AlocarLista();

		while(ElementoAuxiliar->ProximoNodo != Lista)
			ElementoAuxiliar = ElementoAuxiliar->ProximoNodo;

		NovoNodo->CabecaDaLista = 0;
		NovoNodo->Informacao    = Informacao;
		NovoNodo->ProximoNodo   = Lista;
		Lista->ProximoNodo      = NovoNodo;

	}
}

int PegarNovaInformacao(){
	int Informacao;

	printf("\nDigite uma informação: ");	
	scanf("%d", &Informacao);	

	return Informacao;
}

void ExibirLista(Nodo *Lista){
	Nodo *ListaTemporaria;

	if(VerificarSeEstaVazia(Lista)){
		printf("\nLista Vazia!!!");
	}
	else{
		ListaTemporaria = Lista;

		do{
			printf("\nInformação: %d\n", ListaTemporaria->Informacao);
			ListaTemporaria = ListaTemporaria->ProximoNodo;
		}while(ListaTemporaria != Lista);
	}
}
