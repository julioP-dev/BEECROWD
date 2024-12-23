#include <stdlib.h>
#include <math.h>

int main (void) {

    int G, A, M, C;
    scanf("%d %d %d %d", &G, &A, &M, &C);

    int matriz_AtividadesPorCurso[600][100];           
    int matriz_MateriaisPorAtividade[100][2000];        
    int matriz_CustoDoMaterialPorPlaneta[2000][100];    
    int matriz_aux[600][2000];                          
    int matriz_final[600][100];                        
    int lista_maior_numero_coluna[2000];

    for (int i = 0; i < G; i++) {
        for (int j = 0; j < A; j++) {
            scanf("%d", &matriz_AtividadesPorCurso[i][j]);
        }
    }

    
    for (int i = 0; i < A; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matriz_MateriaisPorAtividade[i][j]);
        }
    } 

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matriz_CustoDoMaterialPorPlaneta[i][j]);
        }
    }

    for (int i = 0; i < G; i++) {
        for (int j = 0; j < M; j++) {
            matriz_aux[i][j] = 0;
        }
    }

    for (int i = 0; i < G; i++) {
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < A; k++) {
                matriz_aux[i][j] += matriz_AtividadesPorCurso[i][k] * matriz_MateriaisPorAtividade[k][j];
            }
        }
    }

    for (int i = 0; i < G; i++) {
        for (int j = 0; j < C; j++) {
            matriz_final[i][j] = 0;
        }
    }

    for (int i = 0; i < G; i++) {
        for (int j = 0; j < C; j++) {
            for (int k = 0; k < M; k++) {
                matriz_final[i][j] += matriz_aux[i][k] * matriz_CustoDoMaterialPorPlaneta[k][j];
            }
        }
    }

    for (int j = 0; j < C; j++) {
        lista_maior_numero_coluna[j] = matriz_final[0][j]; 
        for (int i = 1; i < G; ++i) {
            if (matriz_final[i][j] > lista_maior_numero_coluna[j]) {
                lista_maior_numero_coluna[j] = matriz_final[i][j];
            }
        }
    }
    
    for (int i = 0; i < G; i++) {
        for (int j = 0; j < C; j++) {
            printf("%*d%c", (int)log10(lista_maior_numero_coluna[j] == 0 ? 1 : lista_maior_numero_coluna[j]) + 1, matriz_final[i][j], j < C - 1 ? ' ' : '\n');
        }
    }

   return 0;
}