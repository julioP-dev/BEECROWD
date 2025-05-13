#include <stdio.h>

void ordenarDecrescente(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int N; 
    scanf("%d", &N);
    
    while (N--) {
        int M;
        scanf("%d", &M);
        
        int notas[M];
        int notasOrdenadas[M];
        
        for (int i = 0; i < M; i++) {
            scanf("%d", &notas[i]);
            notasOrdenadas[i] = notas[i];
        }
        
        ordenarDecrescente(notasOrdenadas, M);
        
        int naoTrocados = 0;
        for (int i = 0; i < M; i++) {
            if (notas[i] == notasOrdenadas[i]) {
                naoTrocados++;
            }
        }
        
        printf("%d\n", naoTrocados);
    }
    
    return 0;
}