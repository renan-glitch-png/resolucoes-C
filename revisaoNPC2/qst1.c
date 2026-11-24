/*Uma assistência técnica mantém o arquivo ordens.txt, com o código, o nome do cliente e
o status de cada atendimento, separados por vírgula. Desenvolva um programa em C que
solicite um código, busque a ordem no arquivo e exiba seus dados. Caso o código não
exista, informe que a ordem não foi encontrada.*/

#include <stdio.h>

int buscarOrdem(int buscado, char nome[], char status[]) {
    FILE *arquivo;
    char linha[200];
    int codigo;

    arquivo = fopen("ordem.txt", "r");
    if (arquivo == NULL) {
        return -1;                   
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (sscanf(linha, "%d,%99[^,],%99[^\n]", &codigo, nome, status) == 3) {
            if (codigo == buscado) {
                fclose(arquivo);
                return 1;              
            }
        }
    }

    fclose(arquivo);
    return 0;                         
}

int main(void) {
    int codigo, resultado;
    char nome[100], status[100];

    printf("Digite o codigo da ordem: ");
    scanf("%d", &codigo);

    resultado = buscarOrdem(codigo, nome, status);

    if (resultado == 1) {
        printf("Codigo: %d\n", codigo);
        printf("Cliente: %s\n", nome);
        printf("Status: %s\n", status);
    } else if (resultado == 0) {
        printf("Ordem nao encontrada.\n");
    } else {
        printf("Erro ao abrir o arquivo ordens.txt\n");
    }

    return 0;
}