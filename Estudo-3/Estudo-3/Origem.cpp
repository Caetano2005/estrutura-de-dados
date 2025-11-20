#include<stdio.h>
#include<stdlib.h>



int soma(int* v, int tamanho) {
	int total = 0;
	for (int i = 0; i < tamanho; i++) {
		total += *(v + i);
	}
	return total;
}

int main() {
	int vetor[5] = {1, 2, 3, 4, 5};
	int x = soma(vetor, 5);

	printf("x: %d", x);

	/*
	int v[3] = { 100, 200, 300 };
	int* p = v;

	printf("&v = %p, p = %p, *p = %d\n", &v, p, *p);
	printf("p + 1 = %p, *(p + 1) = %d\n", p + 1, *(p + 1));
	printf("p + 2 = %p, *(p + 2) = %d\n", p + 2, *(p + 2));
	*/
	return 0;
}