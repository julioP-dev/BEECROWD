#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char pilha[1001];
        int  diamantes = 0, cont_diamantes = 0;
        scanf("%s", pilha);

        for (int j = 0; j < strlen(pilha); j++) {
            if (pilha[j] == '<') {
                diamantes++;
            }
            else if (pilha[j] == '>' && diamantes > 0){
                --diamantes;
                ++cont_diamantes;
            }
        }
        printf("%d\n", cont_diamantes);
    }

    return 0;
}