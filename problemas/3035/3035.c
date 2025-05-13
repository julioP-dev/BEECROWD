#include <stdio.h>
#include <string.h>

#define MAX_PECAS 100
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int custo;
    int visitado;
} peca;

int encontrar_indice(peca pecas[], int total, char *nome) {
    for (int i = 0; i < total; i++) {
        if (strcmp(pecas[i].nome, nome) == 0)
            return i;
    }
    return -1; 
}

int calcular_custo(peca pecas[], int dependencias[MAX_PECAS][MAX_PECAS], int idx, int total) {
    if (pecas[idx].visitado)
        return pecas[idx].custo;
    
    pecas[idx].visitado = 1;
    
    int custo_total = pecas[idx].custo;
    for (int i = 0; i < total; i++) {
        if (dependencias[idx][i] > 0) {
            custo_total += dependencias[idx][i] * calcular_custo(pecas, dependencias, i, total);
        }
    }
    
    pecas[idx].custo = custo_total;
    return custo_total;
}

int main() {
    peca pecas[MAX_PECAS];
    int total_pecas = 0;
    int dependencias[MAX_PECAS][MAX_PECAS] = {0};
    int n;

    if (scanf("%d", &n) != 1) {
        fprintf(stderr, "Erro ao ler o número de peças simples.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        char nome[MAX_NOME];
        int custo;
        if (scanf("%s %d", nome, &custo) != 2) {
            fprintf(stderr, "Erro ao ler peça simples.\n");
            return 1;
        }
        strcpy(pecas[total_pecas].nome, nome);
        pecas[total_pecas].custo = custo;
        pecas[total_pecas].visitado = 0;
        total_pecas++;
    }

    char p1[MAX_NOME], p2[MAX_NOME];
    int quantidade;
    while (scanf("%s %s %d", p1, p2, &quantidade) == 3) {
        int idx1 = encontrar_indice(pecas, total_pecas, p1);
        int idx2 = encontrar_indice(pecas, total_pecas, p2);

        if (idx1 == -1) {
            strcpy(pecas[total_pecas].nome, p1);
            pecas[total_pecas].custo = 0;
            pecas[total_pecas].visitado = 0;
            idx1 = total_pecas++;
        }

        dependencias[idx1][idx2] = quantidade;
    }

    for (int i = 0; i < total_pecas; i++) {
        if (!pecas[i].visitado) {
            calcular_custo(pecas, dependencias, i, total_pecas);
        }
    }

    for (int i = 0; i < total_pecas - 1; i++) {
        for (int j = i + 1; j < total_pecas; j++) {
            if (strcmp(pecas[i].nome, pecas[j].nome) > 0) {
                peca temp = pecas[i];
                pecas[i] = pecas[j];
                pecas[j] = temp;
            }
        }
    }

    for (int i = 0; i < total_pecas; i++) {
        int eh_composta = 0;
        for (int j = 0; j < total_pecas; j++) {
            if (dependencias[i][j] > 0) {
                eh_composta = 1;
                break;
            }
        }

        if (eh_composta) {
            printf("%s %d\n", pecas[i].nome, pecas[i].custo);
        }
    }

    return 0;
}