#include <stdio.h>
double x;
double n[100];
double aux;
int main() {
    scanf("%lf", &x);
    aux = x;
    for(int i = 0; i <100;i++){
        n[i] = aux;
        
           aux = aux/2.0;
       printf("N[%d] = %.4lf\n", i, n[i]);
        
    }
 
    return 0;
}