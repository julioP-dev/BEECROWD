#include <stdio.h>
#include <string.h>

int main() {
    char nomes[1000][101];
    char escolhas[1000][4];
    int total = 0;
    char vencedor[101];
    int vencedorDefinido = 0;
    int vencedorPosicao = -1; 

    while (1) {
        char nome[101], escolha[4];
        scanf("%s", nome);
        if (strcmp(nome, "FIM") == 0) {
            break;
        }
        scanf("%s", escolha);

        strcpy(nomes[total], nome);
        strcpy(escolhas[total], escolha);
        total++;
    }

    char nomesSim[1000][101];
    char nomesNao[1000][101];
    int totalSim = 0, totalNao = 0;

    for (int j = 0; j < total; j++) {
        if (strcmp(escolhas[j], "YES") == 0) {
            int duplicado = 0;
            for (int k = 0; k < totalSim; k++) {
                if (strcmp(nomesSim[k], nomes[j]) == 0) {
                    duplicado = 1;
                    break;
                }
            }
            if (!duplicado) {
                strcpy(nomesSim[totalSim], nomes[j]);

                if (!vencedorDefinido || strlen(nomesSim[totalSim]) > strlen(vencedor) ||
                    (strlen(nomesSim[totalSim]) == strlen(vencedor) && vencedorPosicao > j)) {
                    strcpy(vencedor, nomesSim[totalSim]);
                    vencedorDefinido = 1;
                    vencedorPosicao = j; 
                }

                totalSim++;
            }
        } else if (strcmp(escolhas[j], "NO") == 0) {
            strcpy(nomesNao[totalNao], nomes[j]);
            totalNao++;
        }
    }

    for (int j = 0; j < totalSim - 1; j++) {
        for (int k = j + 1; k < totalSim; k++) {
            if (strcmp(nomesSim[j], nomesSim[k]) > 0) {
                char tempNome[101];
                strcpy(tempNome, nomesSim[j]);
                strcpy(nomesSim[j], nomesSim[k]);
                strcpy(nomesSim[k], tempNome);
            }
        }
    }

    for (int j = 0; j < totalNao - 1; j++) {
        for (int k = j + 1; k < totalNao; k++) {
            if (strcmp(nomesNao[j], nomesNao[k]) > 0) {
                char tempNome[101];
                strcpy(tempNome, nomesNao[j]);
                strcpy(nomesNao[j], nomesNao[k]);
                strcpy(nomesNao[k], tempNome);
            }
        }
    }

    for (int j = 0; j < totalSim; j++) {
        printf("%s\n", nomesSim[j]);
    }

    for (int j = 0; j < totalNao; j++) {
        printf("%s\n", nomesNao[j]);
    }

    printf("\nAmigo do Habay:\n%s\n", vencedor);

    return 0;
}