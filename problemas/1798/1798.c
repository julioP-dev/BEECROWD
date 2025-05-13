#include <stdio.h>

#define max(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int N, T;
    scanf("%d %d", &N, &T); 
    
    int C[N], V[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &C[i], &V[i]);
    }
    
    
    int dp[T + 1];
    
    
    for (int i = 0; i <= T; i++) {
        dp[i] = 0;
    }
    
    
    for (int t = 1; t <= T; t++) {
        for (int i = 0; i < N; i++) {
            if (C[i] <= t) {
                dp[t] = max(dp[t], dp[t - C[i]] + V[i]);
            }
        }
    }
    
    printf("%d\n", dp[T]);
    
    return 0;
}