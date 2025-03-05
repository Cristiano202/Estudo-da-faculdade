#include <stdio.h>

void main() {
    int vetor[10];
    int tamanho = 10;
    int aux,i,j;

    printf("Digite números inteiros:");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < tamanho - 1; i++) {
        for (j = i + 1; j < tamanho; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
}
