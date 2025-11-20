#include "busca.h"



int buscaLinear(int vet[], int n, int chave) {
	int i;
	for (i = 0; i < n; i++) {
		if (vet[i] == chave) {
			return i;
		}	
	}
	return -1;
}