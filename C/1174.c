#include <stdio.h>
double n, a[100];
int main() {
 
    for(int i = 0;i<100;i++){
        scanf("%lf", &n);
        a[i] = n;
    }
    for(int j = 0;j<100;j++){
        if(a[j] <= 10){
            printf("A[%d] = %.1lf\n", j, a[j]);
        }
    }
 
    return 0;
}