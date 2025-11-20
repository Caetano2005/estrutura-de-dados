#include "Fila.h"

void menu() {
	int opcao, tipo, op, op2;
	FILA comum, prior, vip;
    srand((unsigned int)(time(NULL) & 0xFFFFFFFF));

	inicializarF(&comum, 'C');
	inicializarF(&prior, 'P');
	inicializarF(&vip, 'V');

	int aleatorio;
	int tentativas;
	int chamadas;


	do {

		printf("Opcoes: \n");
		printf("1- Gerar senha \n");
		printf("2- Gerar senha aleatoria \n");
		printf("3- Chamar proximo cliente \n");
		printf("4- Mostrar filas \n");
		printf("0- Sair \n");
		printf("Opcao: ");
		scanf_s("%d", &opcao);

		switch (opcao)
		{
		case 1:
			printf("Tipo | 1- Comum | 2- Prioritaria: | 3- VIP \n");
			printf("Senha: ");
			scanf_s("%d", &tipo);

			if (tipo == 1) {
				inserirC(&comum);
			} 
			else if (tipo == 2) {
				inserirC(&prior);
			}
			else if (tipo == 3) {
				inserirC(&vip);
			}
			else {
				printf("Insira um tipo valido \n");
			}
			break;

		case 2:
			aleatorio = rand() % 3;
			if (aleatorio == 0) {
				inserirC(&comum);
			}
			else if (aleatorio == 1) {
				inserirC(&prior);
			}
			else {
				inserirC(&vip);
			}
			break;

		case 3:
			tentativas = 0;
			chamadas = 0;

			while (tentativas < 3 && chamadas == 0) {
				aleatorio = rand() % 3;

				if (aleatorio == 0 && comum.inicio != NULL) {
					chamarC(&comum);
					chamadas = 1;
				}
				else if (aleatorio == 1 && prior.inicio != NULL) {
					chamarC(&prior);
					chamadas = 1;
				} 
				else if (aleatorio == 2 && vip.inicio != NULL) {
					chamarC(&vip);
					chamadas = 1;
				}
				else {
					tentativas++;
				}
			}

			if (chamadas == 0) {
				printf("Todas as filas estao vazias \n");
			}
			break;

		case 4:
			printf("Fila comum: \n");
			mostrarF(&comum);
			printf("Fila prioritaria: \n");
			mostrarF(&prior);
			printf("Fila VIP: \n");
			mostrarF(&vip);
			break;

		case 0:
			printf("Saindo... \n");
			liberarF(&comum);
			liberarF(&prior);
			liberarF(&vip);
			break;

		default:
			printf("Digite uma opcao valida \n");
			break;
		}
	} while (opcao != 0);
}