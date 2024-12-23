#include <stdio.h>
#include <string.h>

int main() {
    char str1[52], str2[52];

    while (fgets(str1, 52, stdin) != NULL) {
        fgets(str2, 52, stdin);

        str1[strcspn(str1, "\n")] = '\0';
        str2[strcspn(str2, "\n")] = '\0';

        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int matriz[len1 + 1][len2 + 1];  
        int max_len = 0;  
        
        for (int i = 0; i <= len1; i++) {
            for (int j = 0; j <= len2; j++) {
                matriz[i][j] = 0;
            }
        }

        for (int i = 1; i <= len1; i++) {
            for (int j = 1; j <= len2; j++) {
                if (str1[i - 1] == str2[j - 1]) {
                    matriz[i][j] = matriz[i - 1][j - 1] + 1;
                    if (matriz[i][j] > max_len) {
                        max_len = matriz[i][j];  
                    }
                }
            }
        }

        printf("%d\n", max_len);
    }

    return 0;
}