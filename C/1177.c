#include <stdio.h>
int t;
int n[1000];
int aux = 0;
 
int main() {
    scanf("%d", &t);
    for(int i = 0; i <1000; i++){
        n[i] = aux;
        aux++;
        if(aux >= t){
            aux = 0;
        }
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}