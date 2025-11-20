#include "busca.h"

void troca(int* a, int* b) {
	printf("Vai troca a = %d e b = %d \n", *a, *b);
	int t = *a;
	*a = *b;
	*b = t;
	printf("TROCOU: a = %d e b = %d \n", *a, *b);
}

int particiona(int vet[], int  esq, int dir) {
	int pivo = vet[dir];
	int i = esq - 1;
	for (int k = 0; k <= dir; k++) {
		printf(" %d", vet[k]);
	}
	printf("\n");

	for (int j = esq; j < dir; j++) {
		if (vet[j] <= pivo) {
			i++;
			troca(&vet[i], &vet[j]);
		}
	}
	for (int k = 0; k <= dir; k++) {
		printf(" %d", vet[k]);
	}
	printf("\n");

	troca(&vet[i + 1], &vet[dir]);
	for (int k = 0; k <= dir; k++) {
		printf(" %d", vet[k]);
	}
	printf("\n");
	system("pause");

}

//QUICKSORT ITERATIVO
void quickSort(int v[], int esq, int dir) {
	int* pilha;

	pilha = (int*)malloc((dir - esq + 1) * sizeof(int));

	int pilhaTop = -1;

	//inicia a pilha com o problema inicial (VETOR COMPLETO)
	pilha[++pilhaTop] = esq;
	pilha[++pilhaTop] = dir;


	//Enquanto a pilha nao estiveer sozinha
	while (pilhaTop >= 0) {
		//Retornar os limites da sublista da pilha
		dir = pilha[pilhaTop--];
		esq = pilha[pilhaTop--];
	}
	//Ordenacao da subllista
	int p = particiona(v, esq, dir);

	//Se houver sublistas na esquerda do pivo, adiciona a pilha
	if (p - 1 > esq) {
		pilha[++pilhaTop] = esq;
		pilha[++pilhaTop] = p - 1;
	}

	//Se houver sublistas na direita do pivo, adiciona a pilha
	if (p - 1 < dir) {
		pilha[++pilhaTop] = p + 1;
		pilha[++pilhaTop] = dir;
	}
}