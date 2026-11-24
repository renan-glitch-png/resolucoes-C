/*José gosta de apostar na loteria, toda semana ele faz um jogo. Na loteria favorita dele, o jogador
aposta seis números de 1 a 99. No sorteio, são escolhidos também seis números de 1 a 99. Quem
acerta 3, 4, 5 ou 6 números ganha como prêmio, respectivamente, um “terno”, uma “quadra”,
uma “quina” ou uma “sena”. Dessa forma, faça um programa que, dados os números escolhidos
por José e os números sorteados, imprima na tela a palavra respectiva para a quantidade de
acertos dele, caso o número de acertos seja menor que 3, imprima na tela "azar".*/

#include <stdio.h>
#include <stdlib.h>

int main(){
int i;
int j;
int acertos = 0;
int jose[6];
int premio[6] = {
    52, 41, 23, 34, 62, 72};

        for(i = 0; i < 6; i++){
            printf("digite seus numero:\n");
            scanf("%d",&jose[i]);
                for(j = 0; j < 6; j++){
                         if(jose[i] == premio[j]) {
            acertos ++;}
           
}

}
if(acertos < 3){
        printf("azar :(\n");
    }
    if(acertos == 3){
        printf("Terno!\n");
    }
    if(acertos == 4){
        printf("Quadra!\n");
    }
    if(acertos == 5){
        printf("Quina!\n");
    }
    if(acertos == 6){
        printf("Sena!\n");
    }
return 0;
}