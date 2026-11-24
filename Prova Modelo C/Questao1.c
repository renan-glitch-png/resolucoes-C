/*Um hospital recebe um lote de N medicamentos identificados por um código numérico
inteiro. O sistema do almoxarifado precisa registrar todos os códigos recebidos em um
vetor e identificar qual foi o medicamento com maior demanda (o código que mais vezes
se repetiu no lote) e quantas vezes ele apareceu. Em caso de empate na contagem, o
programa deve considerar o primeiro código que atingiu essa quantidade máxima.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    int n;
    int indicie = 0;

    printf("informe a quantidade de medicamentos:\n");
    scanf("%d", &n);

    int medicamentos[n];

    for(i=0;i<n;i++){
        printf("digite os ids dos medicamentos:\n");
        scanf("%d", &medicamentos[i]);
            for(j=0;j<n;j++){
                
    }
    }

}