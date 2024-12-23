#include <stdio.h>
#include <string.h>
char a[10];
int tamanho;
int main() {
 
    scanf("%s",a);
    tamanho = strlen(a);
    for(int i = tamanho -1; i >= 0; i--){
        printf("%c",a[i]);
    }
    printf("\n");
 
    return 0;
}