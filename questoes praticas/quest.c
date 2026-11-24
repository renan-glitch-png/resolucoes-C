/*Carlos está desenvolvendo um aplicativo para sua academia, mas está enfrentando
dificuldades ao aplicar o cálculo do peso ideal. Ele solicitou sua ajuda para criar uma função
chamada "pesoIdeal" que receba a altura e o sexo (1 para masculino e 2 para feminino) como
argumentos. A função deve calcular e retornar o peso ideal da pessoa. Além disso, crie um
pequeno programa para testar a função.*/

#include <stdio.h>
#include <stdlib.h>

float m(double j){
    float e = 72.7;
   return (e * j) - 58;
};
float f(double r){
    float i = 62.1;
   return (i * r) - 48.7;
};
int main(){
    float j, r;
    int g;
    printf("digite 1 para femenino e 2 para masculino:\n");
    scanf("%d", &g);
    if(g == 1){
        printf("digite sua altura:\n");
        scanf("%f", &r);
        printf("seu peso ideal: %f\n", m(r));
        return 0;
    }
        if(g == 2){
        printf("digite sua altura:\n");
        scanf("%f", &j);
        printf("seu peso ideal: %f\n", f(j));
        return 0;
    }

}