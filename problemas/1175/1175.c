#include <stdio.h>
int n,aux, vetor[20];
int main() {
 
    for(int i = 0; i <20; i++){
        scanf("%d", &n);
        vetor[i] = n;
    }
    for(int j = 0; j <10; j++){
        aux = vetor[j];
        vetor[j] = vetor[19 -j];
        vetor[19-j] = aux;
    }
    for(int k = 0; k <20; k++){
        printf("N[%d] = %d\n", k, vetor[k]);
    }
 
    return 0;
}