#include "fila.h"
void lbt(void)//Função criada para limpar o Buffer do Teclado
{
	int c = 0;
	while ((c = getchar()) != '\n' && c != EOF) {}
	return;
}