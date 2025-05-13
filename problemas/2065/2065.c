#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int id;
    int tempo;
} Funcionario;


void heapify(Funcionario heap[], int n, int i) {
    int menor = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;

    if (esquerda < n && (heap[esquerda].tempo < heap[menor].tempo || 
                        (heap[esquerda].tempo == heap[menor].tempo && heap[esquerda].id < heap[menor].id))) {
        menor = esquerda;
    }

    if (direita < n && (heap[direita].tempo < heap[menor].tempo || 
                        (heap[direita].tempo == heap[menor].tempo && heap[direita].id < heap[menor].id))) {
        menor = direita;
    }

    if (menor != i) {
        Funcionario temp = heap[i];
        heap[i] = heap[menor];
        heap[menor] = temp;

        heapify(heap, n, menor);
    }
}

Funcionario extractMin(Funcionario heap[], int *n) {
    Funcionario root = heap[0];
    heap[0] = heap[--(*n)];
    heapify(heap, *n, 0);
    return root;
}

void insertHeap(Funcionario heap[], int *n, Funcionario f) {
    int i = (*n)++;
    heap[i] = f;

  
    while (i != 0 && (heap[(i - 1) / 2].tempo > heap[i].tempo || 
                      (heap[(i - 1) / 2].tempo == heap[i].tempo && heap[(i - 1) / 2].id > heap[i].id))) {
        Funcionario temp = heap[i];
        heap[i] = heap[(i - 1) / 2];
        heap[(i - 1) / 2] = temp;
        i = (i - 1) / 2;
    }
}

void process() {
    int numFuncionarios, numClientes;
    scanf("%d %d", &numFuncionarios, &numClientes);

    Funcionario *heap = malloc(numFuncionarios * sizeof(Funcionario));
    int *tempoFuncionarios = malloc(numFuncionarios * sizeof(int));
    int *numItensClientes = malloc(numClientes * sizeof(int));
    int heapSize = 0;

    for (int i = 0; i < numFuncionarios; i++) {
        scanf("%d", &tempoFuncionarios[i]);
    }

    for (int i = 0; i < numFuncionarios; i++) {
        Funcionario f = {i, 0};
        insertHeap(heap, &heapSize, f);
    }

    for (int i = 0; i < numClientes; i++) {
        scanf("%d", &numItensClientes[i]);
    }

    for (int i = 0; i < numClientes; i++) {
        Funcionario f = extractMin(heap, &heapSize);
        int currId = f.id;
        int currTempo = f.tempo;

        int tempoDessaCompra = numItensClientes[i] * tempoFuncionarios[currId];
        f.tempo += tempoDessaCompra;

        insertHeap(heap, &heapSize, f);
    }

    int maxTempo = -1;
    for (int i = 0; i < numFuncionarios; i++) {
        if (heap[i].tempo > maxTempo) {
            maxTempo = heap[i].tempo;
        }
    }

    printf("%d\n", maxTempo);

    free(heap);
    free(tempoFuncionarios);
    free(numItensClientes);
}

int main() {
    process();
    return 0;
}