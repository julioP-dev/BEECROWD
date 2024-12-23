#include <stdio.h>
int n;
int fatorial = 1;

int main() {
    scanf("%d", &n);
    for(int i = 0; i< n; i++){
        fatorial = fatorial * (n - i);
        
    }
 printf("%d\n", fatorial);
    return 0;
}