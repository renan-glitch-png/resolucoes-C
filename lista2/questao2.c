#include <stdio.h> 
#include <stdlib.h>

int main(){

    float n[10];
    
    for(int i=0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%f", &n[i]);

        if(n[i] > 10 || n[i] < 0) {
            printf("numero invalido");
        return 0;
        }
    }
}