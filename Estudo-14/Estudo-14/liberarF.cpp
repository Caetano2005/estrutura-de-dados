#include "Fila.h"


void liberarF(FILA* fila) {
	CLIENTE* aux;
	while (fila->inicio != NULL) {
		//chamarC(fila);
		aux = fila->inicio;
		fila->inicio = aux->prox;
		aux = NULL;
		free(aux);
	}
	fila->final = NULL;
	fila->inicio = NULL;
	fila->contador = 0;
}