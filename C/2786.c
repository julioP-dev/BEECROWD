#include <stdio.h>
 
int main() {
    int L, C, tipo1, tipo2;
    scanf("%d %d", &L, &C);
    tipo1 = L * C + (L-1) * (C-1);
    tipo2 = 2 * (L -1) + 2 * (C-1);
    printf("%d\n",tipo1);
    printf("%d\n",tipo2);
    return 0;
}