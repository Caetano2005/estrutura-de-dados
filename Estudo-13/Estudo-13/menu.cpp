#include "Pilha.h"

void menu() {
	int op;
	char palavrafrase[50], palavraPalind[50], palavrainvertida[50], palavrainvsespaco[50];
	int cont, cont2 = 0;
	struct PILHA* topo = NULL;
	do {
		system("CLS");
		printf("*** MENU PRINCIPAL ****\n\n");
		printf("1- Informar Palavra ou Frase\n");
		printf("2- Inverter Palavra ou Frase\n");
		printf("3- Mostrar\n");
		printf("4- Sair\n");
		printf("Informe uma opção: ");
		scanf_s("%d", &op);
		switch (op)
		{
		case 1:
			for (cont = 0; cont < 50; cont++) {
				palavrafrase[cont] = palavrainvertida[cont] = palavrainvsespaco[cont] = palavraPalind[cont] = '\0';
			}
			lbt();
			printf("Informe a palavra ou frase: ");
			scanf_s("%[^\n]", &palavrafrase, _countof(palavrafrase));
			cont = 0;
			cont2 = 0;
			while (cont < 50) {
				if (palavrafrase[cont] != ' ') {
					palavraPalind[cont2] = palavrafrase[cont];
					cont2++;
				}
				cont++;
			}
			printf("Palavra sem espaço: %s\n", palavraPalind);
			system("pause");
			inserir(&topo, palavrafrase);
			break;
		case 2:
			if (topo == NULL) {
				printf("Pilha Vazia \n");
				system("pause");
				break;
			}
			inverter(&topo, palavrainvertida);
			cont = 0;
			cont2 = 0;
			while (cont < 50) {
				if (palavrainvertida[cont] != ' ') {
					palavrainvsespaco[cont2] = palavrainvertida[cont];
					cont2++;
				}
				cont++;
			}
			printf("Palavra sem espaço: %s\n", palavrainvsespaco);
			system("pause");
			break;
		case 3:
			mostrar(palavraPalind, palavrainvsespaco);
			system("Pause");
		default:
			printf("ERRO!! Informe 1, 2, 3 ou 4 !!\n");
		}
	} while (op != 4);
}