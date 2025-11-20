#include <stdio.h>
#include <stdlib.h>

typedef struct {

	struct PILHA* proximo;
}PILHA;

//Recursividade
int fatorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * fatorial(n - 1); //chamada recursiva
	}
}


int main() {
	int numero;
	printf("Informe um valor inteiro: ");
	scanf_s("%d", &numero);
	int fat = 1, aux = numero;
	while (aux > 0) {
		fat *= aux;
		aux--;
	}
	printf("O fatorial do numero %d eh: %d\n\n", numero, fat);

	printf("Fatorial do numero %d eh: %d\n\n", numero, fatorial(numero));
}