#include "Fila.h"

void chamarC(FILA* fila) {
if (fila->inicio == NULL) {
	printf("A fila do tipo %c esta vazia \n", fila->tipo);
	return;
}
CLIENTE* aux = fila->inicio;

printf("Chamando senha %s \n", aux->chave);

fila->inicio = aux->prox;
if (fila->inicio == NULL) {
	fila->final = NULL;
	printf("A fila do tipo %c esta vazia \n", fila->tipo);
}

free(aux);
aux = NULL;
}