#include <stdio.h>

int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal;
    int duracaoHoras, duracaoMinutos;

    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    int inicio = horaInicial * 60 + minutoInicial;
    int fim = horaFinal * 60 + minutoFinal;

    if (fim <= inicio) {
        fim += 24 * 60;
    }

    int duracaoTotal = fim - inicio;
    
    duracaoHoras = duracaoTotal / 60;
    duracaoMinutos = duracaoTotal % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaoHoras, duracaoMinutos);

    return 0;
}