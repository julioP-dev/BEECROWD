#include <stdio.h>

int main() {
    int n, indice = 4;
    scanf("%d", &n); 

    for (int aux = 0; aux < n; aux++) {
        int m;
        scanf("%d", &m); 
        unsigned long long int matriz[m][m];
        unsigned long long int max[m];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%llu", &matriz[i][j]);
                matriz[i][j] *= matriz[i][j]; 
                if (i == 0) {
                    max[j] = matriz[i][j]; 
                } else {
                    if (matriz[i][j] > max[j]) {
                        max[j] = matriz[i][j]; 
                    }
                }
            }
        }

        int vetor[m];
        for (int j = 0; j < m; j++) {
            int count = 0;
            unsigned long long int t = max[j];
            do {
                t /= 10;
                count++;
            } while (t > 0);
            vetor[j] = count;
        }

        printf("Quadrado da matriz #%d:\n", indice);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                if (j == 0) {
                    printf("%*llu", vetor[j], matriz[i][j]);
                } else {
                    printf(" %*llu", vetor[j], matriz[i][j]);
                }
            }
            printf("\n");
        }

        if (aux < n - 1) {
            printf("\n");
        }

        indice++;
    }

    return 0;
}