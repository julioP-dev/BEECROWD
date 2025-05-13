#include <stdio.h>
int a, notas[7];
 
int main() {
 
    scanf("%d", &a);
    printf("%d\n", a);
    notas[0] = a / 100;
    a = a%100;
    notas[1] = a / 50;
    a = a%50;
    notas[2] = a / 20;
    a = a%20;
    notas[3] = a / 10;
    a = a%10;
    notas[4] = a / 5;
    a = a%5;
    notas[5] = a / 2;
    a = a%2;
    notas[6] = a / 1;
    a = a%1;
    printf("%d nota(s) de R$ 100,00\n", notas[0]);
    printf("%d nota(s) de R$ 50,00\n", notas[1]);
    printf("%d nota(s) de R$ 20,00\n", notas[2]);
    printf("%d nota(s) de R$ 10,00\n", notas[3]);
    printf("%d nota(s) de R$ 5,00\n", notas[4]);
    printf("%d nota(s) de R$ 2,00\n", notas[5]);
    printf("%d nota(s) de R$ 1,00\n", notas[6]);
    return 0;
}