#include "Lista.h"



void remover(struct LISTA** first, struct LISTA** last, char letra) {
	struct LISTA* aux = *first;

	if (aux == NULL) {
		printf("Lista vazia");
	}
	else {
		while (aux->letra != letra) {
			aux = aux->prox;
			if (aux == NULL) {
				printf("Letra nao esta na lista\n");
				return;
			}
		}
		if (aux == *first && aux == *last) {
			*first = NULL;
			*last = NULL;
		}
		else if (aux == *first) {
			*first = aux->prox;
			(*first)->ant = NULL;
		}
		else if (aux == *last) {
			*last = aux->ant;
			(*last)->prox = NULL;
		}
		else {
			aux->prox->ant = aux->ant;
			aux->ant->prox = aux->prox;
		}
		free(aux);
	}
}