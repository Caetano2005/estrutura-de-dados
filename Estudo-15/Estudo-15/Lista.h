#pragma once
#include "Biblioteca.h"

typedef struct LISTA {
	char letra;
	struct LISTA* prox;
	struct LISTA* ant;
};

void lbt(void);
void inserir(struct LISTA** primeiro, struct LISTA** ultimo);
void remover(struct LISTA** primeiro, struct LISTA** ultimo, char letra);
void mostrar(struct LISTA** primeiro);
void liberar(struct LISTA** primeiro, struct LISTA** ultimo);
void menu();