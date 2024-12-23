#include <stdio.h>
#include <string.h>
long double M[12][12], soma = 0;
char t[1];
int l;
int main() {
 
   scanf("%d", &l);
   scanf("%s", &t);
   for(int i = 0; i <12; i++){
       for(int j =0; j <12;j++){
         scanf("%Lf", &M[i][j]);  
       }
   }
   for(int k = 0; k < 12; k++){
       soma += M[l][k];
   }
   
   if(strcmp(t, "S")==0){
       printf("%.1Lf\n", soma);
   }
   else if(strcmp(t, "M")==0){
       printf("%.1Lf\n", soma/12);
   }
 
    return 0;
}