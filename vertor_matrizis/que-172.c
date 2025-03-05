#include <stdio.h>

int main() {
    int vetor[10];
    int N;
    int contagem = 0;

    // Lê o vetor de 10 números inteiros
    printf("Digite 10 números inteiros separados por espaço: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Lê o número inteiro N
    printf("Digite um número inteiro N entre 1 e 10: ");
    scanf("%d", &N);

    // Verifica e conta as sequências ordenadas de tamanho N
    for (int i = 0; i <= 10 - N; i++) {
        int ordenado = 1;
        for (int j = 0; j < N - 1; j++) {
            if (vetor[i + j] >= vetor[i + j + 1]) {
                ordenado = 0;
                
            }
        }
        if (ordenado) {
            contagem++;
        }
    }

    printf("Quantidade de sequências de tamanho %d em ordem crescente: %d\n", N, contagem);

    return 0;
}