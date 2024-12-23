#include <stdio.h>
int n, numpar[5], numimpar[5];
int contpar = 0, contimpar = 0;
int main() {
 
    for(int i = 0; i <15; i++){
        scanf("%d", &n);
        if(n % 2 == 0){
            numpar[contpar] = n;
            contpar++;
        }
        else{
            numimpar[contimpar] = n;
            contimpar++;
        }
        if(contpar == 5){
            contpar = 0;
            printf("par[0] = %d\n", numpar[0]);
            printf("par[1] = %d\n", numpar[1]);;
            printf("par[2] = %d\n", numpar[2]);
            printf("par[3] = %d\n", numpar[3]);
            printf("par[4] = %d\n", numpar[4]);
            for(int j = 0; j < 5; j++){
                numpar[j] = 0;
            }
        }
        else if(contimpar == 5){
            contimpar = 0;
            printf("impar[0] = %d\n", numimpar[0]);
            printf("impar[1] = %d\n", numimpar[1]);;
            printf("impar[2] = %d\n", numimpar[2]);
            printf("impar[3] = %d\n", numimpar[3]);
            printf("impar[4] = %d\n", numimpar[4]);
            for(int k = 0; k < 5; k++){
                numimpar[k] = 0;
            }
        }
    }
    for(int f = 0; f < contimpar; f++) { 
        printf("impar[%d] = %d\n", f, numimpar[f]);
    }

    for(int y = 0; y < contpar; y++) { 
        printf("par[%d] = %d\n", y, numpar[y]);
    }
 
    return 0;
}