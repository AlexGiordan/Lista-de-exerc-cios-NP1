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

	AtribuirNodoParaALista(Lista, 0);
	AtribuirNodoParaALista(Lista, -1);
	AtribuirNodoParaALista(Lista, 1);

	printf("\né a moda da vida..");
	printf("\nIsso é muito complicado...\n\n");

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

void AtribuirNodoParaALista(Nodo *Lista, int Opcao){

	switch(Opcao){
		case 0:
			InsirirNodoCabecaLista(Lista);
			break;
		case 1:
			InsirirNodoDireitaLista(Lista);
			break;
		case -1:
			InsirirNodoEsquerdaLista(Lista);
			break;
		default:
			printf("\nOpção Invalida!");				
	}
}

void InsirirNodoCabecaLista(Nodo *Lista){
	
}

void InsirirNodoDireitaLista(Nodo *Lista){}

void InsirirNodoEsquerdaLista(Nodo *Lista){}

