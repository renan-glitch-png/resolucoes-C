/*Escreva um programa que contenha duas variaveis inteiras. Compare seus endereços e exiba o
maior endereço.*/
#include <stdio.h>
int main(){
int a, b;
 int *pa = &a;
 int *pb = &b;
 
 if ((void*)pa > (void*)pb) {
     printf("maior endereço: %p\n", (void*)pa);
 } else {
     printf("maior endereço: %p\n", (void*)pb);
 }
}