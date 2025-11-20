#include "lista.h"


void inserir(LISTA** first) {
	char musica[50];
	
	printf("Insira o nome da musica: ");
	lbt();
	fgets(musica, sizeof(musica), stdin);

	musica[strcspn(musica, "\n")] = '\0';

	for (int i = 0; musica[i] != '\0'; i++) {
		musica[i] = toupper((unsigned char)musica[i]);
	}

	if (int t = conferir(first, musica) == 1) {
		printf("Musica ja esta na playlist. Nao foi inserida.\n");
		return;
	}

	struct LISTA* novo = (LISTA*)malloc(sizeof(LISTA));
	if (!novo) {
		printf("Erro ao alocar memoria");
		return;
	}

	strcpy(novo->nome, musica);

	struct LISTA* aux = *first;
	int op;

	if (*first == NULL) {
		*first = novo;
		novo->ant = *first;
		novo->prox = *first;
	}
	else 
	{
		if (aux->prox == *first) {
				novo->prox = aux;
				novo->ant = aux;
				aux->ant = novo;
				aux->prox = novo;
		}
		else {
			printf("Inserir antes ou depois dessa \n\n");
			int count = 1;
			do {
				printf("%d- Musica: %s \n\n", count, aux->nome);
				printf("1- Antes || 2- Depois \n3- Proxima musica \n");
				scanf("%d", &op);
				if (op == 1) {
					novo->prox = aux;
					novo->ant = aux->ant;
					aux->ant->prox = novo;
					aux->ant = novo;
					if (aux == *first) {
						*first = novo;
					}
				}
				else if (op == 2) {
					novo->ant = aux;
					novo->prox = aux->prox;
					aux->prox->ant = novo;
					aux->prox = novo;
				}
				else if (op == 3) {
					aux = aux->prox;
					count++;
					if (aux == *first) {
						count = 1;
					}
				}
				else {
					printf("Digite uma opcao valida \n");
				}
			} while (op != 1 && op != 2);
		}
		
	}

}