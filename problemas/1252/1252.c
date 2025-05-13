#include <stdio.h>
#include <stdlib.h>

int M;

int comp(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;

    if (x % M == y % M) {  
        if (abs(x) % 2 == abs(y) % 2) {  
            if (x % 2 != 0) { 
                return y - x;
            } else {
                return x - y; 
            }
        }
        return (abs(x) % 2 == 1) ? -1 : 1;  
    }
    return (x % M) - (y % M); 
}

int main() {
    int N;

    while (scanf("%d %d", &N, &M) == 2 && N != 0 && M != 0) {
        int vetor[N];
        printf("%d %d\n", N, M);

        for (int i = 0; i < N; i++) {
            scanf("%d", &vetor[i]);
        }

        qsort(vetor, N, sizeof(int), comp);  

        for (int i = 0; i < N; i++) {
            printf("%d\n", vetor[i]);
        }
    }

    printf("0 0\n"); 

    return 0;
}