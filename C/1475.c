#include <stdio.h>
#include <string.h>
#include <limits.h>

#define INF 0x3f3f3f3f

int n, c, a, b, x;
int dp[2][2222];
int f[2][2222];

int min(int a, int b){
    return a < b ? a : b;
}

int lower_bound(int *arr, int size, int value){
    int low = 0, high = size;
    while(low<high){
        int mid = (low + high) / 2;
        if(arr[mid] < value) low = mid + 1;
        else high = mid;
    }
    return low;
}

int go(int x, int i){
    if (x < 0) return 0;
    if (dp[i][x]) return dp[i][x];
    int idx_a = lower_bound(f[i], n, f[i][x] - a) - 1;
    int idx_b = lower_bound(f[i], n, f[i][x] - b) - 1;
    return dp[i][x] = min(go(idx_a, i) + a, go(idx_b, i) + b);
}


int main() {
    while(scanf("%d %d %d %d", &n, &c, &a, &b) != EOF){
        memset(f, 0, sizeof(f));
        memset(dp, 0, sizeof(dp));
        
        for (int i = 0; i < n; ++i){
            scanf("%d", &x);
            f[0][i] = x;
        }
        
        f[1][0] = f[0][n-1];
        for(int i = 1; i < n; ++i){
            f[1][i] = f[0][i - 1] + c;
        }
        
        printf("%d\n", min(go(n-1,0), go(n-1, 1)));
    }
 
    
 
    return 0;
}