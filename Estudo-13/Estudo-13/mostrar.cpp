#include "Pilha.h"

void mostrar(char* palavraPalind, char* palavraInvSespaco) {
	int resultado;
	if (palavraPalind[0] == '\0') {
		printf("Palavra ou frase não informada\n");
	}
	else
	{
		printf("Palavra: %s \n", palavraPalind);
		printf("Palavra invertida: %s \n", palavraInvSespaco);
		if ((resultado = strcmp(palavraPalind, palavraInvSespaco)) == 0) {
				printf("A palavra eh um Palindromo \n");
		}
		else
		{
			printf("A palavra nao eh um Palindromo \n");
		}
	}
	
}