#include <stdio.h>
 int n[10];
 int aux;
int main() {
 
    scanf("%d", &aux);
    for(int i = 0; i < 10; i++){
        n[i] = aux;
        aux = aux*2;
        printf("N[%d] = %d\n", i, n[i]);
    }
 
    return 0;
}