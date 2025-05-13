#include <stdio.h>
#include <math.h>
double a, moedas[6];
int notas[6], b,c;
 
int main() {
 
    scanf("%lf", &a);
    b = floor(a);
    c = round((a-b)*100);
   notas[0] = b / 100;
    b = b % 100;
    notas[1] = b / 50;
    b = b % 50;
    notas[2] = b / 20;
    b = b % 20;
    notas[3] = b / 10;
    b = b % 10;
    notas[4] = b / 5;
    b = b % 5;
    notas[5] = b / 2;
    b = b % 2;
    moedas[0] = b / 1;
    b = b%1;
    moedas[1] = c / 50;
    c = c%50;
    moedas[2] = c / 25;
    c = c%25;
    moedas[3] = c / 10;
    c = c%10;
    moedas[4] = c / 5;
    c = c%5;
    moedas[5] = c / 1;
    c = c%1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas[0]);
    printf("%d nota(s) de R$ 50.00\n", notas[1]);
    printf("%d nota(s) de R$ 20.00\n", notas[2]);
    printf("%d nota(s) de R$ 10.00\n", notas[3]);
    printf("%d nota(s) de R$ 5.00\n", notas[4]);
    printf("%d nota(s) de R$ 2.00\n", notas[5]);
    printf("MOEDAS:\n");
    printf("%1.lf moeda(s) de R$ 1.00\n", moedas[0]);
    printf("%1.lf moeda(s) de R$ 0.50\n", moedas[1]);
    printf("%1.lf moeda(s) de R$ 0.25\n", moedas[2]);
    printf("%1.lf moeda(s) de R$ 0.10\n", moedas[3]);
    printf("%1.lf moeda(s) de R$ 0.05\n", moedas[4]);
    printf("%1.lf moeda(s) de R$ 0.01\n", moedas[5]);
    return 0;
}