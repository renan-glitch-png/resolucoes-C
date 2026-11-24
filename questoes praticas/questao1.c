/*Uma concessionária possui 15 veículos cadastrados. Cada veículo possui modelo, preço base e ano de
fabricação. Veículos com 10 anos ou mais de fabricação recebem um desconto de 12% no valor da taxa de
IPVA, enquanto os demais recebem 5%. Construa um programa em C que leia os dados dos 15 veículos e
realize as seguintes tarefas:
• Exibir o modelo, o preço base e o valor do desconto calculado (em % e em reais) de cada veículo.
• Identificar e exibir o modelo do veículo com o maior preço base cadastrado.
• Calcular e exibir a soma total de todos os descontos concedidos aos 15 veículos.*/
#include <stdio.h>
#include <stdlib.h>

struct veiculos{
    char modelo;
    float preço;
    int ano;
};

int main(){
    struct veiculos v[3];
    float soma;
    float desconto;

for (int i = 0; i < 3; i++){
    printf("digite o modelo do veiculo:\n");
    scanf("%s", &v[i].modelo);

    printf("digite o preço do veiculo:\n");
    scanf("%f", &v[i].preço);

    printf("digite o ano do veiculo:\n");
    scanf("%d", &v[i].ano);   
}

for (int i; i < 3; i++){
   desconto = v[i].preço * 12 - v[i].preço;
   scanf("%2.f", desconto);
   printf("o desconto é de:\n", desconto);
}

}