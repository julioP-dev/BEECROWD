#include <stdio.h>
#include <math.h>


int ehQuadradoPerfeito(int num) {
    if (num < 0) return 0; 
    int raiz = sqrt(num);
    return raiz * raiz == num;
}


int somaDeDoisQuadrados(int n) {
    if (n < 0) return 0; 
    for (int a = 0; a * a <= n; a++) {
        int b2 = n - a * a; 
        if (ehQuadradoPerfeito(b2)) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int n;
    
    
    while (scanf("%d", &n) != EOF) {
        if (somaDeDoisQuadrados(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}