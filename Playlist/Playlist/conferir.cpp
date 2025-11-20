#include "lista.h"

int conferir(LISTA** first, char musica[]) {
    if (*first == NULL) {
        return 0; // Lista vazia, pode inserir
    }

    LISTA* aux = *first;
    do {
        if (strcmp(aux->nome, musica) == 0) {
            return 1; // Encontrou, já existe
        }
        aux = aux->prox;
    } while (aux != *first);

    return 0; // Não encontrou, pode inserir
}