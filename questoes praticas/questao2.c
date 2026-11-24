/*Questão 4: Interseção de Catálogos de Livros
Dois estudantes de Computação, Bruno e Camila, possuem listas de livros com códigos de identificação
inteiros. Bruno possui um vetor com N códigos e Camila possui um vetor com M códigos. Construa um
algoritmo que receba os tamanhos N e M e os respectivos códigos, compare os dois vetores e:
• Calcule e imprima a quantidade de livros que ambos têm em comum (interseção de conjuntos).
• Liste os códigos desses livros em comum sem repetições*/

#include <stdlib.h>
#include <stdio.h>

int main(){

    int n, m;
    int i, j;

    printf("Informe o tamanho de N:\n");
    scanf("%d", &n);

    printf("Informe o tamanho de M:\n");
    scanf("%d", &m);

    int vetor_a[n], vetor_b[m];
    int vetor_c[n];
    int k = 0;

    printf("Informacoes do vetor A\n");
    for(i = 0; i < n; i++){
        printf("Digite o ID [%d]\n", i + 1);
        scanf("%d", &vetor_a[i]);
    }

    printf("Informacoes do vetor B\n");
    for(i = 0; i < m; i++){
        printf("Digite o ID [%d]", i + 1);
        scanf("%d", &vetor_b[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            if(vetor_a[i] == vetor_b[j]){
                vetor_c[k] = vetor_a[i];
                k++;
                break;
            }
        }
    }

    if(k == 0){
        printf("Nenhum id repetido\n");
    }
    else{
        for(i = 0; i < k; i++){
            printf("%d\n", vetor_c[i]);
        }
    }

    printf("Total igual a %d\n", k);


    return 0;
}