#include <stdio.h>
int A, B, C, D;
int main() {
    scanf("%d %d %d %d", &A, &B, &C, &D);
    if ((A + B > C && B + C > A && C + A > B) || 
        (A + B > D && B + D > A && D + A > B) || 
        (A + C > D && C + D > A && D + A > C) || 
        (B + C > D && C + D > B && D + B > C)) {
        printf("S\n");
    } 
    else {
        printf("N\n");
    }
    return 0;
}