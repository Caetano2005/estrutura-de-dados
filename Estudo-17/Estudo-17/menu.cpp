#include "lista.h"



void menu() {
	struct LISTA* first = NULL;
	struct LISTA* last = NULL;
	int valor;
	int op;

	do {
		printf("\nEscolha uma opcao: \n1- Inserir \n2- Remover \n3- Mostrar \n4- Buscar \n0- Sair \n\nOpcao: ");
		scanf("%d", &op);

		switch (op) {
		case 1:
			printf("Insira o valor: ");
			scanf("%d", &valor);
			inserir(&first, &last, valor);
			break;
		case 2:
			remover(&first, &last);
			break;
		case 3:
			printf("Lista: \n");
			mostrar(&first);
			break;
		case 4:
			printf("Valor a ser buscado: ");
			scanf("%d", &valor);
			buscar(&first, valor);
			break;
		case 0:
			printf("Saindo...\n");
			break;
		default :
			printf("Digite um valor valido \n");
		}

	} while (op != 0);
}