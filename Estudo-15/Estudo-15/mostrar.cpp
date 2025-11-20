#include "Lista.h"



void mostrar(struct LISTA** first) {
	struct LISTA* aux = *first;
	if (aux == NULL) {
		printf("Lista Vazia \n\n");
	}
	else {
		printf("Alfabeto: ");
		while (aux != NULL) {
			printf("%c -> ", aux->letra);
			aux = aux->prox;
		}
		printf("Fim \n");
	}
}