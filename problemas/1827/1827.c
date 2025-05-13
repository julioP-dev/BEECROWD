#include <stdio.h>
 
int main() {
 
    int n;
    
    while(scanf("%d", &n) != EOF){
        int matriz[n][n];
        int aux = n -1;
        for(int i =0; i< n; i++){
            for(int j= 0; j < n;j++){
                if(i==j){
                    matriz[i][j] = 2;
                }
                else{
                    matriz[i][j] = 0;
                }
            }
        }
        for(int i = 0; i < n; i++){
            matriz[i][aux] = 3;
            aux--;
        }
        for(int i = n/3; i < n - (n/3); i++){
            for(int j = n/3; j< n - (n/3); j++){
                matriz[i][j] = 1;
            }
        }
        matriz[n/2][n/2] = 4;
        
        for(int i =0; i < n; i++){
            for(int j = 0; j< n; j++){
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
 
    return 0;
}