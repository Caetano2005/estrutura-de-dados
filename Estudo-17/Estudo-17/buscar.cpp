#include "lista.h"

void buscar(struct LISTA** first, int valor) {
	if (*first == NULL) {
		printf("Lista vazia \n");
		return;
	}
	struct LISTA* aux = *first;
	while (aux->valor != valor) {
		aux = aux->prox;
		if (aux == NULL) {
				printf("O valor nao esta na lista");
				return;
		}
	}
	if (aux->valor == valor) {
		printf("O valor esta na lista \nPosicao: %p", aux);
	}
	else {
		printf("O valor nao esta na lista");
	}

	aux = NULL;
	free(aux);
}