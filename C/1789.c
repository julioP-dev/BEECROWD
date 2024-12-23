#include <stdio.h>
int l, maior, lesma;
int main() {
    while (scanf("%d", &l) != EOF) {
        maior = 0;
        for(int i = 0;i<l; i++){
            scanf("%d", &lesma);
            if(lesma> maior){
                maior = lesma;
            }
        }
        if(maior < 10){
            printf("1\n");
        }
        else{
            if(maior >= 10 && maior <20){
                printf("2\n");
            }
            else{
                printf("3\n");
            }
        }
    }
 
    
 
    return 0;
}