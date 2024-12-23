#include <stdio.h>
 int n;
int main() {
    while (scanf("%d", &n) != EOF){
        int M[n][n];
        for(int i = 0; i <n;i++){
            for(int j = 0;j<n;j++){
                if(i == j){
                    M[i][j] = 1;
                }
                if(i+j == n-1){
                    M[i][j]= 2;
                }
                else if(i!= j && i + j != n-1){
                    M[i][j]=3;
                }
                printf("%d", M[i][j]);
            }
            printf("\n");
        }
    }
 
    return 0;
}