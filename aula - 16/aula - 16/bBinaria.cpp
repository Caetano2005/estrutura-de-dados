#include "busca.h"

int buscaBinaria(int vet[], int n, int chave) {
	int inicio = 0, fim = n - 1;
	while (inicio <= fim) {
		int meio = (inicio + fim) / 2;
		if (vet[meio] == chave) {
			return meio;
		}
		else if (vet[meio] < chave) {
			inicio = meio + 1;
		}
		else {
			fim = meio - 1;
		}
	}
	return -1;
}