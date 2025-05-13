#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char expressao[1001]; 
    while (1) {
        int parenteses = 0, i = 0;

        if (scanf("%s", expressao) == EOF) {
            break;
        }

        for (i = 0; i < strlen(expressao); i++) {
            if (expressao[i] == '(') {
                ++parenteses;
            }
            else if (expressao[i] == ')' && parenteses > 0) {
                --parenteses;
            }
            else if (expressao[i] == ')') { 
                parenteses = -1; 
                break;
            }
        }

        if (parenteses == 0) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
    }

    return 0;
}