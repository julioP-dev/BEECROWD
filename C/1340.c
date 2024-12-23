#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int main() {
    int n, operacao, numero;
    int pilha[MAX], fila[MAX], filaPrioridade[MAX];
    int topo, frenteFila, fimFila, fimFilaPrioridade;
    bool p, f, fp;

    while (scanf("%d", &n) != EOF) {
        topo = -1;
        frenteFila = 0;
        fimFila = 0;
        fimFilaPrioridade = 0;
        p = f = fp = true;

        for (int i = 0; i < n; ++i) {
            scanf("%d %d", &operacao, &numero);

            if (operacao == 1) {
                if (p)
                    pilha[++topo] = numero;  
                if (f)
                    fila[fimFila++] = numero;  
                if (fp) {
                    filaPrioridade[fimFilaPrioridade++] = numero;
                    for (int j = fimFilaPrioridade - 1; j > 0; --j) {
                        if (filaPrioridade[j] > filaPrioridade[j - 1]) {
                            int temp = filaPrioridade[j];
                            filaPrioridade[j] = filaPrioridade[j - 1];
                            filaPrioridade[j - 1] = temp;
                        } else {
                            break;
                        }
                    }
                }
            } else {
                if (p) {
                    if (topo == -1 || pilha[topo] != numero)
                        p = false;
                    else
                        topo--;
                }

                if (f) {
                    if (frenteFila == fimFila || fila[frenteFila] != numero)
                        f = false;
                    else
                        frenteFila++;
                }

                if (fp) {
                    if (fimFilaPrioridade == 0 || filaPrioridade[0] != numero)
                        fp = false;
                    else {
                        for (int j = 0; j < fimFilaPrioridade - 1; ++j)
                            filaPrioridade[j] = filaPrioridade[j + 1];
                        fimFilaPrioridade--;
                    }
                }
            }
        }

        if (p && !f && !fp)
            printf("stack\n");
        else if (!p && f && !fp)
            printf("queue\n");
        else if (!p && !f && fp)
            printf("priority queue\n");
        else if (!p && !f && !fp)
            printf("impossible\n");
        else
            printf("not sure\n");
    }

    return 0;
}