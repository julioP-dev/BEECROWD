#include <stdio.h>

int l, c, cont = 0;
int matriz[500][500]; 


int linhaNula(int linha) {
    for (int i = 0; i < c; i++) {
        if (matriz[linha][i] != 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    
    scanf("%d %d", &l, &c);

    
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int i = 0;
    while (i < l) {
        if (linhaNula(i)) {
            
            for (int p = i + 1; p < l; p++) {
                if (!linhaNula(p)) {
                    cont++;
                    break;
                }
            }
        } else {
            
            int primeiroElemento = -1;
            for (int j = 0; j < c; j++) {
                if (matriz[i][j] != 0) {
                    primeiroElemento = j;
                    break;
                }
            }

            
            for (int p = i + 1; p < l; p++) {
                for (int f = 0; f <= primeiroElemento; f++) {
                    if (matriz[p][f] != 0) {
                        cont++;
                        break;
                    }
                }
                if (cont > 0) break;  
            }
        }

        i++;
    }

    
    if (cont == 0) {
        printf("S\n"); 
    } else {
        printf("N\n"); 
    }

    return 0;
}