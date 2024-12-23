#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int n;
int main() {
    scanf("%d", &n);
    getchar();
    
    for(int count = 0; count < n; count++){
        char frase[1001];
        int contagem = 0;
        
        scanf("%[^\n]%*c", frase);
        for(int j = 97; j <= 122;j++){
            if(strchr(frase,j) != NULL){
                contagem++;
            }
        }
        if(contagem == 26){
            printf("frase completa\n");
        }
        else if(contagem >= 13){
            printf("frase quase completa\n");
        }
        else{
            printf("frase mal elaborada\n");
        }
    }
 
    
 
    return 0;
}