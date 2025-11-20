#include<stdio.h>
#include<stdlib.h>
#include <string.h> 

#define MAX 5

typedef struct {
	char nome[50];
	int idade;
}PESSOA;

void lbf(){
	int c;
	while ((c = getchar()) != '\n' && c != EOF);
}

void cadastrar(PESSOA *lista, int *qtd) {

	if (*qtd >= MAX) {
		printf("Lista cheia");
		return;
	}
	
		printf("Digite o nome da pessoa %d:\n", *qtd + 1);
		scanf_s("%s", lista[*qtd].nome, (unsigned)_countof(lista[*qtd].nome));
		lbf();
		printf("Digite a idade da pessoa %d:\n", *qtd + 1);
		scanf_s("%d", &lista[*qtd].idade);

		(*qtd)++;
		printf("Pessoa cadastrada\n");
}

void listar(PESSOA *lista, int qtd) {
	if (qtd == 0) {
		printf("Lista vazia");
		return;
	}

	for (int i = 0; i < qtd; i++) {
		printf("Pessoa %d:\n", i + 1);
		printf("Nome: %s\n", lista[i].nome);
		printf("Idade: %d\n\n", lista[i].idade);
	}
}

void mostrar(PESSOA* lista, int qtd) {
	char buscado[50];
	printf("Digite o nome a ser buscado: ");
	scanf_s("%s", buscado, (unsigned)_countof(buscado));
	lbf();

	printf("Voce digitou: %s\n", buscado);

	for (int i = 0; i < qtd; i++) {
		printf("Comparando com: %s\n", lista[i].nome);
		if (strcmp(lista[i].nome, buscado) == 0) {
			printf("Encontrado: Nome: %s | Idade: %d\nPosicao: %d\n", lista[i].nome, lista[i].idade, i + 1);
			return;
		}
	}
	printf("Nome nao encontrado");
}



int main() {
	PESSOA person[MAX];
	int qtd = 0;
	int opcao;
	do {
		printf("1- Cadastrar\n2- Listar\n3- Buscar\n0- Sair\nOpcao: ");
		scanf_s("%d", &opcao);

		switch (opcao) {
		case 1:
			cadastrar(person, &qtd);
			break;
		case 2:
			listar(person, qtd);
			break;
		case 3:
			mostrar(person, qtd);
			break;
		case 0:
			printf("Saindo...");
			break;
		default:
			printf("Opcao invalida");
		}
	} while (opcao != 0);
	
	return 0;
}