#include <stdio.h>
int a;
int b;
int main() {
    scanf("%d %d", &a, &b);
    if(a == 0 && b == 0){
        printf("Nao sao multiplos\n");
    }
    else{
        if(a%b == 0 || b%a == 0){
            printf("Sao Multiplos\n");
        }
        else{
            printf("Nao sao Multiplos\n");
        }
    }
  
    return 0;
}