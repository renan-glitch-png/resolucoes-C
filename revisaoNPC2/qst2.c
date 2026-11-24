/*Uma biblioteca registra seus livros no arquivo livros.txt, com título, autor e ano, se-
parados por vírgula. Desenvolva um programa em C que leia os dados de K novos livros
pelo teclado e os insira ao final do arquivo, sem apagar os registros existentes. Feche o
arquivo após a gravação.*/
#include <stdio.h>
#include <string.h>

void gravarLivro(FILE *arq, char titulo[], char autor[], int ano) {
    fprintf(arq, "%s,%s,%d\n", titulo, autor, ano);
}

int main(void) {
    FILE *arq;
    char titulo[100], autor[100];
    int k, ano, i;

    printf("Quantos livros deseja cadastrar? ");
    scanf("%d", &k);
    getchar();

    arq = fopen("livros.txt", "a");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo livros.txt\n");
        return 1;
    }

    for (i = 0; i < k; i++) {
        printf("\nLivro %d de %d\n", i + 1, k);

        printf("Titulo: ");
        fgets(titulo, sizeof(titulo), stdin);
        titulo[strcspn(titulo, "\n")] = '\0';

        printf("Autor: ");
        fgets(autor, sizeof(autor), stdin);
        autor[strcspn(autor, "\n")] = '\0';

        printf("Ano: ");
        scanf("%d", &ano);
        getchar();

        gravarLivro(arq, titulo, autor, ano);
    }

    fclose(arq);
    printf("\nLivros gravados com sucesso!\n");

    return 0;
}