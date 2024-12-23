#include <stdio.h>
#include <stdlib.h>

int comparacao(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main (void) {
    int N, K;

    scanf("%d %d", &N, &K);
    
    int distancias[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &distancias[i]);
    }

    qsort(distancias, N, sizeof(int), comparacao);
    
    int menor_diferenca = 1000000; 

    for(int i = 0; i <= N - (N - K); i++) {
        int diferenca = distancias[i + (N - K - 1)] - distancias[i];
        if(diferenca < menor_diferenca) {
            menor_diferenca = diferenca;
        }
    }

    printf("%d\n", menor_diferenca);
    
    return 0;
}