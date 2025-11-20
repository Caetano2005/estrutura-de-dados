#pragma once  
#include "biblioteca.h"  

typedef struct LISTA {  
   char nome[50];
   struct LISTA* prox;
   struct LISTA* ant;
};

void mostrar(LISTA** first);
void inserir(LISTA** first);
void remover(LISTA** first);
void liberar(LISTA** first);
int conferir(LISTA** first, char musica[]);
void lbt();
void menu();