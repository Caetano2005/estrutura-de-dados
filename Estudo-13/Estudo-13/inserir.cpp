#include "Pilha.h"

void inserir(struct PILHA** topo, char* palavrafrase) {
    PILHA* novo = NULL;
    PILHA* topoAux = *topo;
    int cont = 0;

    while (palavrafrase[cont] != '\0') {
        novo = (struct PILHA*)malloc(sizeof(struct PILHA));
        if (novo == NULL) {
            printf("ERRO!! Impossível alocar memória\n");
            return;
        }
        else {
            novo->letra = palavrafrase[cont];
            novo->prox = topoAux;
            topoAux = novo;
        }
        cont++;
    }
    *topo = topoAux;
}