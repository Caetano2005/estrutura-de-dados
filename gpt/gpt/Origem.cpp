#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int valor[5];
	char nome[50];
}ESTRUTURA;

void showArray(ESTRUTURA **vetor) {
	printf("Vetor atual: \n");

	for (int i = 0; i < 5; i++) {
		if (vetor[i] != NULL) {
			printf("Celula %d: \n", i);
			printf("Vetor %d valores: %d, %d, %d, %d, %d\n", i + 1, vetor[i]->valor[0], vetor[i]->valor[1], vetor[i]->valor[2], vetor[i]->valor[3], vetor[i]->valor[4]);
			printf("Texto %d: %s\n", i+ 1, vetor[i]->nome);
		}
		else {
			printf("Célula %d: NULL (apagada)\n", i);
		}
	}
	printf("------------------------------------------\n\n");
}


int main() {
	int i;

	ESTRUTURA **vetor = (ESTRUTURA**)malloc(5 * sizeof(ESTRUTURA*));
	if (vetor == NULL) {
		printf("Erro ao alocar vetor de ponteiros.\n");
		return 1;
	}

	for (i = 0; i < 5; i++) {
		vetor[i] = (ESTRUTURA*)malloc(sizeof(ESTRUTURA));
		if (vetor[i] == NULL) {
			printf("Erro ao alocar célula %d.\n", i);
			return 1;
		}
		vetor[i]->valor[0] = i + 1;
		vetor[i]->valor[1] = i + 2;
		vetor[i]->valor[2] = i + 3;
		vetor[i]->valor[3] = i + 4;
		vetor[i]->valor[4] = i + 5;
		sprintf_s(vetor[i]->nome, "Nome %d", i + 1);
	}

	printf("Vetor preenchido: \n");
	showArray(vetor);

	vetor[2]->valor[0] = 9;
	printf("Vetor alterado: \n");
	showArray(vetor);

	free(vetor[2]);
	vetor[2] = NULL;
	showArray(vetor);
}