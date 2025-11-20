#include "Lista.h"



void liberar(LISTA** first, LISTA** last) {
	LISTA* aux;
	if (*first == NULL) {
		printf(" ");
	}
	else {
		while (*first != NULL) {
			aux = *first;
			*first = (*first)->prox;
			aux = NULL;
			free(aux);
		}
		free(*first);
		*last = NULL;
		free(*last);
	}
}