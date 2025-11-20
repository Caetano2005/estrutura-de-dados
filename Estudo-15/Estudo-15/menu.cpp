#include "Lista.h"
#include <ctype.h>


void menu() {
	LISTA* first = NULL, * last = NULL;
	int opcao;
	char letra;

	do {
		printf("Opcoes: \n");
		printf("1- Inserir letra \n2- Remover letra \n3- Mostrar letras \n0- Sair \n");
		printf("Opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1: 
			inserir(&first, &last);
			break;
		case 2:
			printf("Digite a letra que deseja remover: ");
			lbt();
			scanf("%c", &letra);
			letra = toupper(letra);
			remover(&first, &last, letra);
			break;
		case 3:
			mostrar(&first);
			break;
		case 0:
			printf("Saindo...");
			liberar(&first, &last);
			break;
		default:
			printf("Digite uma opcao valida \n\n");
		}

	} while (opcao != 0);

}