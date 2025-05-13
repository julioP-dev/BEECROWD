#include <stdio.h>
#include <math.h>

int ehQuadradoPerfeito(int num) {
    int raiz = sqrt(num);
    return raiz * raiz == num;
}

int resolver(int N) {
    int hastes[N]; 
    int bolas = 0; 
    
    for (int i = 0; i < N; i++) {
        hastes[i] = 0; 
    }
    
    int bola = 1; 
    
    while (1) {
        int colocada = 0;
        
        
        for (int i = 0; i < N; i++) {
            if (hastes[i] == 0 || ehQuadradoPerfeito(hastes[i] + bola)) {
                hastes[i] = bola;
                bola++;
                bolas++;
                colocada = 1;
                break;
            }
        }
        
        
        if (!colocada) {
            break;
        }
    }
    
    return bolas;
}

int main() {
    int T, N;
    scanf("%d", &T); 
    
    while (T--) {
        scanf("%d", &N); 
        int resultado = resolver(N);
        printf("%d\n", resultado);
    }
    
    return 0;
}