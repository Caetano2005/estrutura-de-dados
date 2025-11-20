#include "busca.h"

int main() {
	int num, i = 0, j, vet[10], vetTmp[10], repetido;
	srand(time(NULL));

	while (i < sizeof(vet) / 4) {
		num = rand() % 61;
		repetido = 0;
		for (j = 0; j < i; j++) {
			if (vet[j] == num) {
				repetido = 1;
				break;
			}
		}
		if (!repetido) {
			vet[i] = num;
			vetTmp[i] = num;
			i++;
			printf(" %d ", num);
		}
		
	}
	printf(" \n");
	printf("Informe o valor: ");
	scanf("%d", &num);

	printf("Busca Linear \n\n");
	num = buscaLinear(vet, sizeof(vet) / 4, num);

	if (num != -1) {
		printf("Valor informado esta na posicao [%d]: %d \n", num + 1, vet[num]);
	}
	else {
		printf("Valor nao encontrado \n");
	}

	printf("\nOrdenacao pelo metodo bolha\n");
	bubbleSort(vet, sizeof(vet) / 4);
	for (num = 0; num < sizeof(vet) / 4; num++) {
		printf(" %d", vet[num]);
	}

	printf("\nBusca Binaria\n");
	printf("Informe o valor: ");
	scanf("%d", &num);

	num = buscaBinaria(vet, sizeof(vet) / 4, num);

	if (num != -1) {
		printf("Valor informado esta na posicao [%d]: %d \n", num + 1, vet[num]);
	}
	else {
		printf("Valor nao encontrado \n");
	}

	//--------------------------------------------------------------------------------------------------------------------------------
	//
	//--------------------------------------------------------------------------------------------------------------------------------
	

	printf("\nOrdenacao pelo metodo quickSort\n");
	quickSort(vetTmp, 0, (sizeof(vet) / 4) - 1);
	for (num = 0; num < sizeof(vetTmp) / 4; num++) {
		printf(" %d", vetTmp[num]);
	}

	printf("\nBusca Binaria\n");
	printf("Informe o valor: ");
	scanf("%d", &num);

	num = buscaBinaria(vet, sizeof(vet) / 4, num);

	if (num != -1) {
		printf("Valor informado esta na posicao [%d]: %d \n", num + 1, vetTmp[num]);
	}
	else {
		printf("Valor nao encontrado \n");
	}
}