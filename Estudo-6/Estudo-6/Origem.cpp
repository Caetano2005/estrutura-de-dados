#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void maior(int* a, int* b) {
	int bigger;
	if (*a > *b) {
		printf("Maior: %d", *a);
	}
	else {
		printf("Maior: %d", *b);
	}
	return 1;
}

int main() {
	int* valor1 = (int*)malloc(1 * sizeof(int));
	int* valor2 = (int*)malloc(1 * sizeof(int));
	if (valor1 == NULL || valor2 == NULL) {
		printf("Erro ao alocar memória.\n");
		return 1;
	}

	printf("Digite o valor 1: ");
	scanf("%d", valor1);

	printf("Digite o valor 2: ");
	scanf("%d", valor2);

	maior(valor1, valor2);
	return 0;
}