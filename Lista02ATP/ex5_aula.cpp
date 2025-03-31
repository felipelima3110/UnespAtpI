/*Escreva um programa para ordenar 3 números inteiros sem usar vetores*/
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2, n3;
    int maior, menor, meio;
    printf("digite o primeiro nº:  ");
    scanf("%d", &n1);
    maior = n1;
    printf("digite o segundo nº: ");
    scanf("%d", &n2);

    if (n2 > maior){
        maior = n2;
        menor = n1;
    } else {
        menor = n2;
    }

    printf("digite o terceiro nº: ");
    scanf("%d", &n3);
    if (n3 > maior){
        meio = maior;
        maior = n3;
    
    } else if (n3 < menor){
        meio = menor;
        menor = n3;
        
    } else {
        meio = n3;
  
    }

    printf("%d %d %d", menor, meio, maior);

    getchar();
    return 0;
}