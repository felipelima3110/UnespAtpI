/*Escreva um programa que realize a soma de dois números inteiros que são dados
de entrada pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n1, n2, soma;

    printf("digite o primeiro número: ");
    scanf("%d", &n1);
    printf("digite o segundo número: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("O resultado da soma é: %d", soma);

    getchar();
    return 0;


}