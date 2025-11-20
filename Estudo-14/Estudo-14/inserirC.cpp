#include "Fila.h"


void inserirC(FILA* fila) {
	CLIENTE* novo = (CLIENTE*)malloc(sizeof(CLIENTE));
	if (novo == NULL) {
		printf("Erro ao alocar memoria");
		return;
	}

	fila->contador++;

    sprintf_s(novo->chave, sizeof(novo->chave), "%c%03d", fila->tipo, fila->contador);
	printf("\n");
	novo->prox = NULL;

	if (fila->final != NULL) {
		fila->final->prox = novo;
	}
	else {
		fila->inicio = novo;
	}
	fila->final = novo;

	printf("Sua chave: %s \n", novo->chave);
}