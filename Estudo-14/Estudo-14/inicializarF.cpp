#include "Fila.h"

void inicializarF(FILA* fila, char tipo) {
	fila->inicio = NULL;
	fila->final = NULL;
	fila->contador = 0;
	fila->tipo = tipo;
}