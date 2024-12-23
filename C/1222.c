#include <stdio.h>
#include <string.h>

int main() {
    int N, L, C;  
    while (scanf("%d %d %d", &N, &L, &C) != EOF) {
        char palavra[71]; 
        int linhas = 1;  
        int caracteres_na_linha = 0;  

        for (int i = 0; i < N; i++) {
            scanf("%s", palavra);  
            int comprimento_palavra = strlen(palavra);

        
            if (caracteres_na_linha == 0) {
                caracteres_na_linha = comprimento_palavra;
            } else if (caracteres_na_linha + 1 + comprimento_palavra <= C) {
                caracteres_na_linha += 1 + comprimento_palavra;
            } else {
                linhas++;
                caracteres_na_linha = comprimento_palavra;
            }
        }

        int paginas = (linhas + L - 1) / L;
        printf("%d\n", paginas);
    }

    return 0;
}