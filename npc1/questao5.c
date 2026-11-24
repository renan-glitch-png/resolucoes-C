#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;
    int a[2][3];
    int b[2][3];
    int c[2][3];

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("atribua valores a 1 matriz:\n");
            scanf("%d", &a[i][j]);
        }
    }
                printf("\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("atribua valores a 2 matriz:\n");
            scanf("%d", &b[i][j]);
        }
    }
                printf("\n");
      for(i=0;i< 2;i++){
        for(j=0;j< 3;j++){
    c[i][j] = a[i][j] + b[i][j];
        printf("soma das matrizes:%d\n", c[i][j]);
        }

    }
                printf("\n");
        for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("matrizA:%d\n", a[i][j]);

        }
                    printf("\n");
    }
        for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" matrizB:%d\n",b[i][j]);

        }
                    printf("\n");
    }
        for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf(" matrizC:%d\n",c[i][j]);

        }
                    printf("\n");
    }
    return 0;
}