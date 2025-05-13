#include <stdio.h>

int main() {
    int N, t;
    long long anterior, aux, proximo;
    
    scanf("%d", &t);
    
    for(int i = 1; i <= t; i++){
        scanf("%d", &N);
        
        anterior = 0;
        aux = 1;
        
        for(int j = 0; j < N; j++){
            proximo = anterior + aux;
            anterior = aux;
            aux = proximo;
        }
        printf("Fib(%d) = %lld\n", N, anterior);
    }
    return 0;
}