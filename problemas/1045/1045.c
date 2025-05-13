#include <stdio.h>
#include <math.h>
float n, valores[3];
int main() {
 
    for(int i = 0; i < 3;i++){
        scanf("%f", &n);
        valores[i] = n;
    }
    for(int j = 0; j < 2; j++){
        for(int k = j +1; k<3; k++){
            if(valores[j] > valores[k]){
                float aux = valores[j];
                valores[j]= valores[k];
                valores[k]= aux;
            }
        }
    }
    float a,b,c;
    a = valores[2];
    b = valores[1];
    c = valores[0];
    if(a >= b + c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(pow(a,2) == pow(b,2)+pow(c,2)){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(pow(a,2) > pow(b,2)+pow(c,2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if(pow(a,2) < pow(b,2)+pow(c,2)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a== b && a == c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a == b || b == c || a == c){
        printf("TRIANGULO ISOSCELES\n");
    }
    
 
    return 0;
}