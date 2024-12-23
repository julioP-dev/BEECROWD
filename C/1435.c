#include <stdio.h>
#include <stdbool.h>
 
int main() {
    
    int n;
    
    while(true){
        scanf("%d", &n);
        if(n == 0){
            break;
        }
        
        int matriz[n][n];
        
        int interno = n/2;
        int aux = 0;
        
        while(aux<= interno){
            for(int i = aux; i < n - aux; i++ ){
                for(int j = aux; j < n - aux; j++){
                    matriz[i][j] = aux + 1;
                }
            }
            aux++;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j<n; j++){
                if(j == 0){
                    printf("%3d", matriz[i][j]);
                }
                else{
                    printf(" %3d", matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
 
    
    return 0;
}