#include "lista.h"

void menu() {
	struct LISTA* first = NULL;
	int op;

	do {
		printf("Escolha uma opcao: \n");
		printf("1- Inserir \n2- Remover \n3- Mostrar \n0- Sair \n");
		scanf("%d", &op);

		switch (op)
		{

		case 1:
			inserir(&first);
			break;
		case 2:
			remover(&first);
			break;
		case 3:
			mostrar(&first);
			break;
		case 0:
			printf("Saindo...");
			liberar(&first);
		default:
			printf("Opcao invalida \n");
			break;
		}
	} while (op != 0);
}