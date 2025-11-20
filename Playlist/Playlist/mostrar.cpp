#include "lista.h"



void mostrar(LISTA** first) {
	struct LISTA* aux = *first;
	if (*first == NULL) {
		printf("Nao tem musicas na playlist \n");
		return;
	}
	else if (aux->prox == *first) {
		printf("Apenas uma musica na playlist \n");
		printf("Playlist: %s\n", aux->nome);
	}
	else {
		printf("Playlist: ");
		while (aux->prox != *first) {
			printf("%s -> ", aux->nome);
			aux = aux->prox;
		}
		printf("%s -> ", aux->nome);
		printf("Fim \n");
	}
}