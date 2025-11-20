#include "Pilha.h"

void inverter(struct PILHA** topo, char* palavrainver) {
	struct PILHA* aux = NULL;
	int cont = 0;
	if (*topo == NULL) {
		printf("Pilha Vazia \n");
	}
	else {
		while (*topo != NULL) {
			aux = *topo;
			palavrainver[cont] = aux->letra;
			*topo = aux->prox;
			free(aux);
			aux = NULL;
			cont++;
		}
		free(aux);
	}
}