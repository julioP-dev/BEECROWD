#include <stdio.h>
int codigo1, codigo2, peca1, peca2;
float valor1, valor2, valor_final;
int main() {
    scanf("%d %d %f", &codigo1, &peca1, &valor1);
    scanf("%d %d %f", &codigo2, &peca2, &valor2);
    valor_final = peca1 * valor1 + peca2 * valor2;
    printf("VALOR A PAGAR: R$ %.2f\n", valor_final);
 
    return 0;
}