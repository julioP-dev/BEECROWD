#include <stdio.h>
#include <stdlib.h>

void organiza_matriz (int matriz1[9][9], int matriz2[9][9]);
int verifica_linha (int matriz[9][9], int num_1);
int verifica_coluna(int matriz[9][9], int num_1);
int verifica_mini_matriz(int matriz[9][9], int aux1, int aux2);


int main(void) {

    int n;
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        int matriz[9][9], matriz_copia[9][9], cont_erros = 0;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }

        //organiza a matriz de teste
        organiza_matriz (matriz, matriz_copia);
        //verificando nas linhas
        for (int k = 0; k < 9; k++) {
            cont_erros += verifica_linha(matriz_copia, k);
        }

        // organiza a matriz de teste novamente para o segundo teste
        organiza_matriz (matriz, matriz_copia);
        //verificando nas colunas
        for (int i = 0; i < 9; i++) {
            cont_erros += verifica_coluna(matriz_copia, i);
        }

        //organiza a matrzi para o terceiro teste
        organiza_matriz (matriz, matriz_copia);
        //verificando as regiões
        cont_erros += verifica_mini_matriz(matriz_copia, 0, 0);
        cont_erros += verifica_mini_matriz(matriz_copia, 0, 3);
        cont_erros += verifica_mini_matriz(matriz_copia, 0, 6);
        cont_erros += verifica_mini_matriz(matriz_copia, 3, 0);
        cont_erros += verifica_mini_matriz(matriz_copia, 3, 3);
        cont_erros += verifica_mini_matriz(matriz_copia, 3, 6);
        cont_erros += verifica_mini_matriz(matriz_copia, 6, 0);
        cont_erros += verifica_mini_matriz(matriz_copia, 6, 3);
        cont_erros += verifica_mini_matriz(matriz_copia, 6, 6);

        printf("Instancia %d\n", k);

        if (cont_erros == 0) {
            printf("SIM\n");
        }
        else {
            printf("NAO\n");
        }
        printf("\n");

    }

    return 0;
}

void organiza_matriz (int matriz1[9][9], int matriz2[9][9]) {
    for(int p = 0; p < 9; p ++) {
        for (int q = 0; q < 9; q ++) {
            matriz2[p][q] = matriz1[p][q];
        }
    }
    return;
}

int verifica_linha(int matriz[9][9], int num_1) {
    int aux, condicao_quebrada = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (matriz[num_1][i] > matriz[num_1][j]) {
                aux = matriz[num_1][i];
                matriz[num_1][i] = matriz[num_1][j];
                matriz[num_1][j] = aux;
            }
        }
    }

    for (int k = 0; k < 9; k++) {
        if (matriz[num_1][k] != k + 1) {
            condicao_quebrada++;
        }
    }

    return condicao_quebrada;
}

int verifica_coluna(int matriz[9][9], int num_1) {
    int aux, condicao_quebrada = 0;
    int coluna[9];

    for (int i = 0; i < 9; i++) {
        coluna[i] = matriz[i][num_1];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (coluna[i] > coluna[j]) {
                aux = coluna[i];
                coluna[i] = coluna[j];
                coluna[j] = aux;
            }
        }
    }

    for (int k = 0; k < 9; k++) {
        if (coluna[k] != k + 1) {
            condicao_quebrada++;
        }
    }

    return condicao_quebrada;
}

int verifica_mini_matriz(int matriz[9][9], int aux1, int aux2) {
    int aux, lista[9], g = 0, condicao_quebrada = 0;

    for (int i = aux1; i < aux1 + 3; i++) {
        for (int j = aux2; j < aux2 + 3; j++) {
            lista[g] = matriz[i][j];
            g++;
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (lista[i] > lista[j]) {
                aux = lista[i];
                lista[i] = lista[j];
                lista[j] = aux;
            }
        }
    }

    for (int k = 0; k < 9; k++) {
        if (lista[k] != k + 1) {
            condicao_quebrada++;
        }
    }

    return condicao_quebrada;
}