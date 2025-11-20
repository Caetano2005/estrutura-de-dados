#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int dado;
    struct No* prox;
} No;

void inserirOrdenado(No** inicio, int valor) {
    No* novo = (No*)malloc(sizeof(No));
    novo->dado = valor;
    novo->prox = NULL;

    if (*inicio == NULL || valor < (*inicio)->dado) {
        novo->prox = *inicio;
        *inicio = novo;
        return;
    }

    No* atual = *inicio;
    while (atual->prox != NULL && atual->prox->dado < valor) {
        atual = atual->prox;
    }

    novo->prox = atual->prox;
    atual->prox = novo;
}

void remover(No** inicio, int valor) {
    if (*inicio == NULL) {
        printf("Lista vazia\n");
        return;
    }

    No* atual = *inicio;
    No* anterior = NULL;

    while (atual != NULL && atual->dado != valor) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        printf("Valor não encontrado\n");
        return;
    }

    if (anterior == NULL) {
        *inicio = atual->prox;
    }
    else {
        anterior->prox = atual->prox;
    }

    free(atual);
    printf("Valor %d removido\n", valor);
}

void buscar(No* inicio, int valor) {
    while (inicio != NULL) {
        if (inicio->dado == valor) {
            printf("Valor %d encontrado\n", valor);
            return;
        }
        inicio = inicio->prox;
    }
    printf("Valor %d não encontrado\n", valor);
}

void listar(No* inicio) {
    printf("Lista: ");
    while (inicio != NULL) {
        printf("%d -> ", inicio->dado);
        inicio = inicio->prox;
    }
    printf("NULL\n");
}

void liberarLista(No* inicio) {
    No* temp;
    while (inicio != NULL) {
        temp = inicio;
        inicio = inicio->prox;
        free(temp);
    }
}

int main() {
    No* lista = NULL;
    int opcao, valor;

    do {
        printf("\n1-Inserir\n2-Remover\n3-Buscar\n4-Listar\n0-Sair\nOpcao: ");
        scanf_s("%d", &opcao);

        switch (opcao) {
        case 1:
            printf("Valor para inserir: ");
            scanf_s("%d", &valor);
            inserirOrdenado(&lista, valor);
            break;
        case 2:
            printf("Valor para remover: ");
            scanf_s("%d", &valor);
            remover(&lista, valor);
            break;
        case 3:
            printf("Valor para buscar: ");
            scanf_s("%d", &valor);
            buscar(lista, valor);
            break;
        case 4:
            listar(lista);
            break;
        case 0:
            liberarLista(lista);
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}