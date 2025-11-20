#include<stdio.h>
#include<stdlib.h>

typedef struct pilha {
	int numero;
	struct pilha* under;
}PILHA;

void inserir(PILHA** topo, int valor) {
	PILHA* novo = (PILHA*)malloc(sizeof(PILHA));

	novo->numero = valor;

	if (*topo == NULL) {
		novo->under = NULL;
	}
	else {
		novo->under = *topo;
	}

	*topo = novo;
}

void remover(PILHA** topo, int valor) {
	if (*topo == NULL) {
		printf("Pilha vazia\n");
		return;
	}

	PILHA* remover = *topo;

	if (remover->under == NULL) {
		*topo = NULL;
	}
	else {
		*topo = remover->under;
	}

	remover = NULL;
	free(remover);

}

void listar(PILHA* topo) {
	if (topo == NULL) {
		printf("Pilha vazia\n");
		return;
	}

	PILHA* mostrar = topo;

	printf("Pilha: \n");
	while (mostrar != NULL) {
		printf("%d \t\t &: %p \t prox&: %p\n", mostrar->numero, mostrar, mostrar->under);
		mostrar = mostrar->under;
	}

	printf("NULL\n");
}

void liberar(PILHA* topo) {
	if (topo == NULL) {
		printf("Pilha vazia\n");
		return;
	}

	PILHA* remover;

	while (topo != NULL) {
		remover = topo;
		topo = topo->under;
		remover = NULL;
		free(remover);
	}
}

int main() {
	PILHA* topo = NULL;
	int valor, opcao;

	do {
		printf("1- Inserir \n2- Remover \n3- Listar \n0- Sair\nOpcao: ");
		scanf_s("%d", &opcao);

		switch (opcao) {
		case 1:
			printf("Digite o Valor: ");
			scanf_s("%d", &valor);
			inserir(&topo, valor);
			break;
		case 2:
			remover(&topo, valor);
			break;
		case 3:
			listar(topo);
			break;
		case 0:
			printf("Saindo...");
			liberar(topo);
			break;
		default:
			printf("Opcao invalida\n");
		}

	} while (opcao != 0);
	return 0;
}