/*Questão 9: Controle Financeiro de Departamentos
Uma empresa possui 5 departamentos e deseja monitorar as despesas mensais de cada um ao longo dos 4
trimestres do ano. Armazene esses dados em uma matriz float despesas[5][4], em que cada linha representa
um departamento e cada coluna representa um trimestre. O programa deve solicitar o preenchimento da
matriz e calcular:
• O total de despesas de cada departamento ao longo do ano completo.
• O total de despesas acumulado da empresa em cada trimestre específico.
• O departamento que obteve a maior despesa anual total.*/
#include <stdio.h>
#include <stdlib.h>
struct despesas {
    char departamento;
    float trimestre;
};
int main(){
    struct despesas c[5][3];

    for (int i = 0; i < 5; i++){
        printf("adicione o departeamento\n");
        scanf("%s", &c[i]);
  
    }
          for (int j = 0; j < 3; j++){
            printf("adicione o trimestre:\n");
            scanf("%f", &c[j]);
        }
        

}