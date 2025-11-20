#include "lista.h"

void mostrar(struct LISTA** first) {
	if (*first == NULL) {
		printf("Lista vazia \n");
		return;
	}
	struct LISTA* aux = *first;
	printf("\nInicio --> ");
	do {
		printf("%d --> ", aux->valor);
		aux = aux->prox;
	} while (aux != NULL);

	printf("NULL \n");
	free(aux);
}