#include <stdio.h>
#include <string.h>
char palavra1[20];
char palavra2[20];
char palavra3[20];
int main() {
 
    scanf("%20[^\n] %20[^\n] %20[^\n]", palavra1, palavra2, palavra3);
    if (strcmp(palavra1, "vertebrado") == 0) {
        if (strcmp(palavra2, "ave") == 0) {
            if (strcmp(palavra3, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(palavra3, "onivoro") == 0) {
                printf("pomba\n");
            }
        } else if (strcmp(palavra2, "mamifero") == 0) {
            if (strcmp(palavra3, "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(palavra3, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    } else if (strcmp(palavra1, "invertebrado") == 0) {
        if (strcmp(palavra2, "inseto") == 0) {
            if (strcmp(palavra3, "hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(palavra3, "herbivoro") == 0) {
                printf("lagarta\n");
            }
        } else if (strcmp(palavra2, "anelideo") == 0) {
            if (strcmp(palavra3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(palavra3, "onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}