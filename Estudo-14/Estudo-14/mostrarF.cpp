#include "Fila.h"

void mostrarF(FILA* fila) {
	if (fila->inicio == NULL) {
		printf("Fila vazia \n\n");
	}
	else {
		CLIENTE* aux = fila->inicio;

		printf("[Inicio] ");
		while (aux != NULL) {
			printf("-> ");
			printf("Chave: %s ", aux->chave);
			aux = aux->prox;
		}
		printf("<- [Final] \n\n");
	}
	
}