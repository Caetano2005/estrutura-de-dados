#include<stdio.h>
#include<stdlib.h>

typedef struct lista {
	int numero;
	struct lista* prox;
}LISTA;

void inserir(LISTA** inicio, int valor) {
	LISTA* novo = (LISTA*)malloc(sizeof(LISTA));
	if (novo == NULL) {
		printf("Erro ao alocar memoria");
		return;
	}

	novo->numero = valor;
	novo->prox = NULL;

	if (*inicio == NULL || valor < (*inicio)->numero) {
		novo->prox = *inicio;
		*inicio = novo;
		return;
	}

	LISTA* atual = *inicio;

	while (atual->prox != NULL && atual->prox->numero < valor) {
		atual = atual->prox;
	}

	novo->prox = atual->prox;
	atual->prox = novo;
}

void remover(LISTA** inicio, int valor) {
	if (*inicio == NULL) {
		printf("Lista vazia\n");
		return;
	}

	LISTA* atual = *inicio;
	LISTA* auxiliar = NULL;

	while (atual != NULL && atual->numero != valor) {
		auxiliar = atual;
		atual = atual->prox;
	}

	if (atual == NULL) {
		printf("Valor nao encontrado\n");
		return;
	}

	if (auxiliar == NULL) {
		*inicio = atual->prox;
	}
	else {
		auxiliar->prox = atual->prox;
	}

	printf("Valor removido %d", atual->numero);
	atual = NULL;
	free(atual);
}

void buscar(LISTA* inicio, int valor) {
	if (inicio == NULL) {
		printf("Lista vazia\n");
		return;
	}

	while (inicio != NULL) {
		if (inicio->numero = valor) {
			printf("Valor encontrado: %d\n", inicio->numero);
			return;
		}
		inicio = inicio->prox;
	}

		printf("Valor nao encontrado\n");
}

void listar(LISTA* inicio) {
	if (inicio == NULL) {
		printf("Lista vazia\n");
		return;
	}

	printf("Lista: \n");

	while (inicio != NULL) {
		printf("%d -> ", inicio->numero);
		inicio = inicio->prox;
	}

	printf("NULL\n");
}

void liberar(LISTA* inicio) {
	LISTA* anterior;
	while (inicio != NULL) {
		anterior = inicio;
		inicio = inicio->prox;
		anterior = NULL;
		free(anterior);
	}
}


int main() {
	LISTA* inicio = NULL;
	int valor, opcao;

	do {
		printf("1- Inserir \n2- Remover \n3- Buscar \n4- Listar \n0- Sair\nOpcao: ");
		scanf_s("%d", &opcao);

		switch (opcao) {
		case 1:
			printf("Digite o Valor: ");
			scanf_s("%d", &valor);
			if (valor % 2 != 0) {
				printf("Esse nao eh um numero par\n");
				break;
			}
			inserir(&inicio, valor);
			break;
		case 2:
			printf("Digite o Valor: ");
			scanf_s("%d", &valor);
			remover(&inicio, valor);
			break;
		case 3:
			printf("Digite o Valor: ");
			scanf_s("%d", &valor);
			buscar(inicio, valor);
			break;
		case 4:
			listar(inicio);
			break;
		case 0:
			printf("Saindo...");
			liberar(inicio);
			break;
		default:
			printf("Opcao invalida");
		}

	} while (opcao != 0);

	return 0;
}