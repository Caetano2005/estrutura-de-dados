#pragma once
#ifndef FILA_H
#define FILA_H
#include "Biblioteca.h"


typedef struct cliente {
	char chave[10];
	struct cliente* prox;
}CLIENTE;

typedef struct fila {
	CLIENTE* inicio;
	CLIENTE* final;
	int contador;
	char tipo;
}FILA;

void inicializarF(FILA* fila, char tipo);
void inserirC(FILA* fila);
void chamarC(FILA* fila);
void mostrarF(FILA* fila);
void liberarF(FILA* fila);
void menu();


#endif // !FILA_H


