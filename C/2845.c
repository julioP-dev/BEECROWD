#include <stdio.h>

int main() {
    int teste;
    int maior;
    scanf("%d", &teste);
    maior = -2147483648;
    for (int i = 0; i < teste; i++) {
        int x;
        scanf("%d", &x);
        if(x > maior){
            maior = x;
        }
    }
    printf("%d\n", ++maior);
    return 0;
}