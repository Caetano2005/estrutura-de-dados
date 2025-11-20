#include "lista.h"



void remover(LISTA** first) {
	struct LISTA* aux = *first;
	char musica[50];

	if (*first == NULL) {
		printf("Lista vazia \n");
	}
	else
	{
		printf("Musica a ser removida: ");
		lbt();
		fgets(musica, sizeof(musica), stdin);

		musica[strcspn(musica, "\n")] = '\0';

		for (int i = 0; musica[i] != '\0'; i++) {
			musica[i] = toupper(musica[i]);
		}

		do {
			if ((strcmp(aux->nome, musica) == 0)) {
				if (aux->prox == aux && aux->ant == aux) {
					printf("Musica removida: %s\n", aux->nome);
					aux = NULL;
					free(aux);
					*first = NULL;
					return;
				}
				else {
					printf("Musica removida: %s\n", aux->nome);
					aux->prox->ant = aux->ant;
					aux->ant->prox = aux->prox;
					if (aux == *first) {
						*first = aux->prox;
					}
					aux = NULL;
					free(aux);
					return;
				}
			}
			aux = aux->prox;
		} while (aux != *first);
		
		if (aux == *first) {
			printf("%s nao esta na lista \n", musica);
			return;
		}
	}
	
}