#include <stdio.h> 
#include <string.h>

int main() { 
    int N; 
    scanf("%d", &N); 
    getchar();
    
    for (int i = 0; i < N; i++) { 
        char linha[1001]; 
        fgets(linha, 1001, stdin);

        
        linha[strcspn(linha, "\n")] = '\0';

        
        for (int j = 0; linha[j] != '\0'; j++) {
            if ((linha[j] >= 'A' && linha[j] <= 'Z') || (linha[j] >= 'a' && linha[j] <= 'z')) {
                linha[j] += 3;
            }
        }

        
        int len = strlen(linha);
        for (int j = 0; j < len / 2; j++) {
            char temp = linha[j];
            linha[j] = linha[len - j - 1];
            linha[len - j - 1] = temp;
        }

        
        for (int j = len / 2; j < len; j++) {
            linha[j] -= 1;
        }

        
        printf("%s\n", linha);
    }

    return 0;
}