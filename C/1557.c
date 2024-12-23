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
        
        matriz[0][0] = 1;
        
        for(int i = 1; i < n; i++){
            matriz[i][0] = matriz[i - 1][0]* 2;
        }
        for(int i = 0; i < n; i++){
            for(int j = 1; j < n; j++){
                matriz[i][j] = matriz[i][j -1]* 2;
            }
        }
        int t = matriz[n -1][n -1];
        int count = 0;
        
        do{
            t /= 10;
            count++;
        } while(t> 0);
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j<n; j++){
                if(j == 0){
                    printf("%*d", count, matriz[i][j]);
                }
                else{
                    printf(" %*d",count, matriz[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
 
    return 0;
}