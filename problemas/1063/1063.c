#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int n, i, j, topo;
    char linha[2000], entrada[1000], saida[1000], pilha[1000];
    
    while (scanf("%d", &n) && n) {
        for (i = 0; i < n; i++) {
            scanf(" %c", &entrada[i]);
        }
        for (i = 0; i < n; i++) {
            scanf(" %c", &saida[i]);   
        }  
        entrada[n] = '\0';
        saida[n] = '\0';
        i = 0;
        j = 0;
        topo = -1;  
        
        for (;;) {
            if (topo >= 0 && j < n && pilha[topo] == saida[j]) {
                topo--;
                printf("R");
                j++;
            }
            else if (i < n) {
                pilha[++topo] = entrada[i]; 
                printf("I");
                i++;
            } 
            else {
                break;
            }
        }
        
        if (topo == -1) {
            printf("\n");
        }
        else {
            printf(" Impossible\n");
        }
    }
    
    return 0;
}