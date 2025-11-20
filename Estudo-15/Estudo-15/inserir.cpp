#include "Lista.h"
#include <ctype.h>


void inserir(struct LISTA** first, struct LISTA** last) {
	struct LISTA* novo;
	struct LISTA* aux = *first;
	char letra;
	

	if ((novo = (struct LISTA*)malloc(sizeof(struct LISTA))) == NULL) {
		printf("Erro ao alocar memoria");
	}
	else {	
		printf("Digite uma letra: ");
		lbt();
		scanf("%c", &letra);
		letra = toupper(letra);
		novo->letra = letra;
		if (*first == NULL && *last == NULL) {
			novo->ant = NULL;
			novo->prox = NULL;
			*first = novo;
			*last = novo;
		}
		else {
			if (novo->letra < (*first)->letra) {
				(*first)->ant = novo;
				novo->prox = *first;
				novo->ant = NULL;
				*first = novo;
			}
			else if (novo->letra > (*last)->letra) {
				(*last)->prox = novo;
				novo->ant = *last;
				novo->prox = NULL;
				*last = novo;
			}
			else {
				while (novo->letra > aux->prox->letra) {
					aux = aux->prox;
				}
					novo->prox = aux->prox;
					novo->ant = aux;
					aux->prox->ant = novo;
					aux->prox = novo;
			}
		}
	}
}