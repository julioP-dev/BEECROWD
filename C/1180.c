#include <stdio.h>
int n, menor, posicao;
int main() {
    scanf("%d", &n);
    int x[n];
    for(int i =0; i < n; i++){
        scanf("%d", &x[i]);
        
    }
    menor = x[0];
    for(int j = 0;j < n;j++){
        if(x[j] < menor){
            menor = x[j];
            posicao = j;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    return 0;
}