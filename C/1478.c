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
        
        for(int i =0; i< n; i++){
            for(int j= 0; j < n;j++){
                if(i==j){
                    matriz[i][j] = 1;
                }
                else if(i < j){
                    matriz[i][j] = matriz[i][j-1]+1;
                }
                
            }
        }
        for(int i =0; i< n; i++){
            for(int j= n -1; j >= 0;j--){
                if(i>j){
                    matriz[i][j] = matriz[i][j+1] + 1;
                }
            }
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