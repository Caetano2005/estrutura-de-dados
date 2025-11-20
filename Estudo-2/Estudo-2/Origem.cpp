#include<stdio.h>
#include<stdlib.h>



void trocar(int* a, int* b) {
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int main() {
	int x = 10, y = 20;
	printf("x: %d \n y: %d\n", x, y);
	trocar(&x, &y);

	printf("x: %d \n y: %d", x, y);
	return 0;
}