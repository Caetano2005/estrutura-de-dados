#include<stdio.h>
#include<stdlib.h>


int main() {
	int size;

	printf("Quantidades de numeros: ");
	scanf_s("%d", &size);

	int* vetor = (int*)malloc(size * sizeof(int));
	if (vetor == NULL) {
		printf("Erro ao alocar memória.\n");
		return 1;
	}

	int* dobro = (int*)malloc(size * sizeof(int));
	if (dobro == NULL) {
		printf("Erro ao alocar memória.\n");
		return 1;
	}

	for (int i = 0; i < size; i++) {
		printf("Numero %d: ", i + 1);
		scanf_s("%d", vetor + i); //ou &vetor[i]
		dobro[i] = vetor[i] * 2;
	}

	for (int i = 0; i < size; i++) {
		printf("Original: %d  Dobro: %d\n", *(vetor + i), dobro[i]);
	}

	free(vetor);
	free(dobro);

	return 0;
}