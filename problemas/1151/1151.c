#include <stdio.h>
int N;
int anterior = 0;
int aux = 1;
int proximo;
int main() {
    scanf("%d", &N);
    printf("0 1");
    for(int i = 0; i < N-2; i++){
        proximo = anterior + aux;
        printf(" %d", proximo);
        anterior = aux;
        aux = proximo;
        }
        printf("\n");
 
    return 0;
}