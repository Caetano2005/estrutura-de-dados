#include<stdio.h>
#include<stdlib.h>


int main() {
	int size;

	printf("Tamanho do vetor: ");
	scanf_s("%d", &size);

	int* vetor = (int *)malloc(size * sizeof(int));
	if (vetor == NULL) {
		printf("Erro ao alocar memória.\n");
		return 1;
	}

	for (int i = 0; i < size; i++) {
		printf("Numero %d: ", i);
		scanf_s("%d", vetor + i); //ou &vetor[i]
	}

	for (int i = 0; i < size; i++) {
		printf("Numeros %d: %d\n", i, *(vetor + i)); //ou vetor[i]
	}

	free(vetor);

	return 0;
}