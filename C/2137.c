#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char codigos[1000][5]; 

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            scanf("%s", codigos[i]);
        }

        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                if (strcmp(codigos[i], codigos[j]) > 0) {
                    char temp[5];
                    strcpy(temp, codigos[i]);
                    strcpy(codigos[i], codigos[j]);
                    strcpy(codigos[j], temp);
                }
            }
        }

        for (int i = 0; i < N; i++) {
            printf("%s\n", codigos[i]);
        }
    }

    return 0;
}