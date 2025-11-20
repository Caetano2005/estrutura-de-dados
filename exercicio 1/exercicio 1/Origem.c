#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int valor;
} Elemento;

int main() {
    int i, j;

    Elemento** matriz = (Elemento**)malloc(2 * sizeof(Elemento*));
    if (matriz == NULL) {
        printf("Erro ao alocar matriz.\n");
        return 1;
    }

    for (i = 0; i < 2; i++) {
        matriz[i] = (Elemento*)malloc(2 * sizeof(Elemento));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar linha %d.\n", i);
            return 1;
        }
    }

    int numero = 1;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            matriz[i][j].valor = numero++;
        }
    }

    printf("Conteúdo da matriz:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j].valor);
        }
        printf("\n");
    }

    return 0;
}