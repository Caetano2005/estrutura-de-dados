#include "Cabeçalho.h"

int main() {
	int x = 25;
	int* p;

	p = &x;

	printf("Valor de x: %d\n", x);
	printf("Endereco de x: %d\n", &x);
	printf("Conteudo de p: %d\n", &p);
	printf("Valor apontado por p: %d\n", *p);

	return 0;
}