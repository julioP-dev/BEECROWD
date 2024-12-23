#include <stdio.h>
#include <string.h>

int main() {
    int N, bem = 0, mal = 0;
    char comportamento[100];
    char nomes[100][21];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf(" %c %s", &comportamento[i], nomes[i]);
        if (comportamento[i] == '+') {
            bem++;
        } else {
            mal++;
        }
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                
                char temp[21];
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
                
                char tempComportamento = comportamento[i];
                comportamento[i] = comportamento[j];
                comportamento[j] = tempComportamento;
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        printf("%s\n", nomes[i]);
    }
    
    printf("Se comportaram: %d | Nao se comportaram: %d\n", bem, mal);

    return 0;
}