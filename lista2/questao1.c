#include <stdio.h>
#include <stdlib.h>

int main() {

    float notas[10];
    float media = 0;
    for(int i = 0; i < 10; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
    for(int y=0; y < 10; y++) {
        media += notas[y];
    }
    media /= 10;
    printf("A média da turma é: %.2f\n", media);

    return 0;

}