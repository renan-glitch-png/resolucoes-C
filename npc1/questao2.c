#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, j;
    int indice = 1, soma = 0;
    int n[5][5];

    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++){
            n[i][j] = indice;
            indice++;

        }
    }
    for (i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++){
            printf("numeros:%d\n", n[i][j]);

        }
    }
for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
        soma = soma + n[i][j];
    }
    printf("numeros somados:%d\n", soma);
}

        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
               if(i == j){
                printf("%d\n",n[i][j]);
               }
            }
        }

}