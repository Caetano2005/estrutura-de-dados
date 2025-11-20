#include "lista.h"

void remover(struct LISTA** first, struct LISTA** last) {
	if (*first == NULL) {
		printf("Lista vazia \n");
		return;
	}

	int op;
	struct LISTA* aux = *first;
	if (*first == *last) {
		printf("Apenas um no na lista \n");
		aux = *first;
		*first = NULL;
		*last = NULL;
	}
	else {
		void mostrar(struct LISTA** first);

		do {
			printf("1- Remover o primeiro No \n2- Remover o ultimo No\nOpcao: ");
			scanf("%d", &op);
			switch (op) {
			case 1:
				*first = aux->prox;
				break;
			case 2:
				while (aux->prox != *last) {
					aux = aux->prox;
				}
				*last = aux;
				aux = aux->prox;
				(*last)->prox = NULL;
				break;
			default:
				printf("Insira uma opcao valida \n");
			}
		} while (op != 1 && op != 2);
	}
	printf("Removendo: %d \n", aux->valor);
		aux = NULL;
		free(aux);
}