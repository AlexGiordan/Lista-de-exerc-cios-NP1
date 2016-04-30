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

	printf("\né a moda da vida..");
	printf("\nIsso é muito complicado...\n\n");

	free(Lista);
	return 0;
}

Nodo *AlocarLista(){
  return (Nodo *) malloc(sizeof(Nodo));
}
