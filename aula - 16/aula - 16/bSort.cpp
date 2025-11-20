#include "biblioteca.h"



void bubbleSort(int vet[], int n) {
	int i, j, tmp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (vet[j] > vet[j + 1]) {
				tmp = vet[j];
				vet[j] = vet[j + 1];
				vet[j + 1] = tmp;
			}
		}
	}
}