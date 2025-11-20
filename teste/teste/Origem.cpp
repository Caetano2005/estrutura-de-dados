// Arquivo: exercicio3.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numeros[3];     // vetor de inteiros
    char texto[50];     // string
} Estrutura;

int main() {
    Estrutura** vetor = (Estrutura**)malloc(5 * sizeof(Estrutura*));
    if (vetor == NULL) {
        printf("Erro ao alocar vetor principal.\n");
        return 1;
    }

    // a) Preenchimento do vetor de estruturas
    for (int i = 0; i < 5; i++) {
        vetor[i] = (Estrutura*)malloc(sizeof(Estrutura));
        if (vetor[i] == NULL) {
            printf("Erro ao alocar célula %d.\n", i);
            return 1;
        }

        // Preencher vetor de inteiros
        for (int j = 0; j < 3; j++) {
            vetor[i]->numeros[j] = i * 10 + j;
        }

        // Preencher string
        sprintf_s(vetor[i]->texto, "Texto da célula %d", i + 1);
    }

    // d.i) Mostrar vetor após preenchimento
    printf("\n--- i. Vetor após preenchimento ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Célula %d: %s | Números: %d, %d, %d\n",
            i + 1, vetor[i]->texto,
            vetor[i]->numeros[0],
            vetor[i]->numeros[1],
            vetor[i]->numeros[2]);
    }

    // b) Alterar um único valor do vetor de inteiros da célula 2 (índice 1)
    vetor[1]->numeros[1] = 999;

    // d.ii) Mostrar vetor após alteração
    printf("\n--- ii. Após alterar número da célula 2 ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Célula %d: %s | Números: %d, %d, %d\n",
            i + 1, vetor[i]->texto,
            vetor[i]->numeros[0],
            vetor[i]->numeros[1],
            vetor[i]->numeros[2]);
    }

    // c) Apagar os dados da célula 3 (índice 2)
    free(vetor[2]);
    vetor[2] = NULL;

    // d.iii) Mostrar vetor após apagar célula
    printf("\n--- iii. Após apagar a célula 3 ---\n");
    for (int i = 0; i < 5; i++) {
        if (vetor[i] != NULL) {
            printf("Célula %d: %s | Números: %d, %d, %d\n",
                i + 1, vetor[i]->texto,
                vetor[i]->numeros[0],
                vetor[i]->numeros[1],
                vetor[i]->numeros[2]);
        }
        else {
            printf("Célula %d: [apagada]\n", i + 1);
        }
    }

    // Liberação de memória
    for (int i = 0; i < 5; i++) {
        if (vetor[i] != NULL)
            free(vetor[i]);
    }
    free(vetor);

    return 0;
}
