#pragma once
#include "biblioteca.h"

typedef struct LISTA {
	int valor;
	struct LISTA* prox;
};

void inserir(struct LISTA** first, struct LISTA** last, int valor);
void remover(struct LISTA** first, struct LISTA** last);
void mostrar(struct LISTA** first);
void buscar(struct LISTA** first, int valor);
void menu();