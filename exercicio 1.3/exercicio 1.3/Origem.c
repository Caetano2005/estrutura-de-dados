#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int valor;
	int letra;
} ESTRUTURA;


int main() {
	int i;

	ESTRUTURA *vetor = (ESTRUTURA*)malloc(5 * sizeof(ESTRUTURA));
	if (vetor == NULL) {
		printf("Erro ao alocar memória.\n");
		return 1;
	}

	for (i = 0; i < 5; i++) {
		vetor[i].valor = i * 2;
	}

	vetor[3].valor = 15;
	vetor[3].valor = -1;

	for (i = 0; i < 5; i++) {
		printf("Valor %d: %d\n", i + 1, vetor[i].valor);
	}

	free(vetor);
}