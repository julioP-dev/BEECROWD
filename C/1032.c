#include <stdio.h>

#define true 1
#define false 0 
#define MAXSIZE 3502
#define MAXPRIME 32650

int josephus(int n);
int isprime(int x);
void preencheprimo();
int primos[MAXSIZE] = {0};

int main() {
    preencheprimo();
    int n;
    
    while(true){
        scanf("%d", &n);
        
        if(n == 0){
            break;
        }
        printf("%d\n", josephus(n));
    }
    return 0;
}

int josephus(int n){
    int i;
    int retorno = 0;
    
    for(i = 1; i<= n;++i){
        retorno = (retorno + primos[n-i])%i;
    }
    return ++retorno;
}

int isprime(int x){
    int i;
    if(x==2){
        return true;
        
    }
    if(!(x&1)){
        return false;
    }
    for(i = 3; i* i<=x; i += 2){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

void preencheprimo(){
    int i, j;
    for(i = 2, j=0;i< MAXPRIME && j< MAXSIZE; ++i){
        if(isprime(i)){
            primos[j++] = i;
        }
    }
}