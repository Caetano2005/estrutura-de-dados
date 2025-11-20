#pragma once
#include "biblioteca.h"


typedef struct PILHA {
	char letra;
	struct PILHA* prox;
};

void lbt(void);

void mostrar(char* palavraPalind, char* palavraInvSespaco);

void inverter(struct PILHA** topo, char* palavrainvert);

void inserir(struct PILHA** topo, char* palavraFra);

void menu();



