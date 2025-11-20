#include "lista.h"



void liberar(LISTA** first) {
	struct LISTA* aux;
	struct LISTA* aux2;
	if (*first == NULL) {
		printf("Lista vazia");
		return;
	}
	else {
		aux = *first;
		aux2 = aux->prox;
		do {
			free(aux);
			aux == NULL;
			aux = aux2;
			aux2 = aux->prox;
		} while (aux != *first);
	}
}