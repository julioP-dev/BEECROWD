#include <stdio.h>
int testafibonacci(int n){
    int a = 1;
    int b = 1;
    int teste;
    if(n == 1){
        return 1;
    }
    while(b < n){
        teste = a + b;
        a = b;
        b = teste;
    }
    return b == n;
}
int main() {
    int pos;
    scanf("%d", &pos);
    int cont = 0;
    int num_teste = 1;
    while(cont < pos){
        if(!testafibonacci(num_teste)){
            cont++;
        }
        num_teste++;
    }
    printf("%d\n", num_teste -1);

 
    return 0;
}