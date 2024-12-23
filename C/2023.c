#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int max_nome = 82;          
    int max_criancas = 1000;     
    char nomes[max_criancas][max_nome];
    int count = 0;

    while (count < max_criancas && fgets(nomes[count], max_nome, stdin) != NULL) {
        nomes[count][strcspn(nomes[count], "\n")] = '\0';
        count++;
    }

    
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcasecmp(nomes[i], nomes[j]) > 0) {
                char temp[max_nome];
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }

    printf("%s\n", nomes[count - 1]);

    return 0;
}