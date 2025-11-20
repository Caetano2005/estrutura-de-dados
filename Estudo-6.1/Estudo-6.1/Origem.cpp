#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int maior(int* a, int* b) {
	int bigger;
	if (*a > *b) {
		return *a;
	}
	else {
		return *b;
	}
}

int main() {
	int x, y;

	int* valor1 = &x;
	int* valor2 = &y;
	

	printf("Digite o valor 1: ");
	scanf("%d", valor1);

	printf("Digite o valor 2: ");
	scanf("%d", valor2);

	printf("Valor de x: %d\nValor de y: %d\n", x, y);

	int resultado = maior(valor1, valor2);
	printf("Maior: %d", resultado);

	return 0;
}