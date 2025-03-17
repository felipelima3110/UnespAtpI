/*Escreva um programa que receba dois valores e troque os mesmos (a = 1 e b = 2, mas no final, a == 2 e b ==1). Desafio:
 é possível fazer esse programa com só duas variáveis. */

#include <stdio.h>
#include <stdlib.h>

int main (){

    int a, b;

    printf("digite a");
    scanf("%d", &a);
    printf("digite b");
    scanf("%d", &b);

    a = b*a;
    b = a/b;
    a = a/b;

    printf("A = %d", a);
    printf("B = %d", b);

    getchar();
    return 0;
}