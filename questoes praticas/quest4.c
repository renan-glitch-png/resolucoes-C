/*Construa uma função void minMax(int V[], int n, int min, intmax) que receba um vetor de inteiros V com n
elementos e o endereço de duas variáveis inteiras min e max. A função deve percorrer o vetor e armazenar nesses
endereços o menor e o maior elemento encontrados. Na main(), leia um vetor de 8 posições e exiba os resultados.*/
#include <stdio.h>

void minMax(int V[], int n, int *min, int *max) {
    *min = V[0];
    *max = V[0];

    for (int i = 1; i < n; i++) {
        if (V[i] < *min) {
            *min = V[i];
        }
        if (V[i] > *max) {
            *max = V[i];
        }
    }
}

int main() {
    int V[8];
    int menor, maior;

    printf("Digite 8 numeros:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &V[i]);
    }

    minMax(V, 8, &menor, &maior);

    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);

    return 0;
}