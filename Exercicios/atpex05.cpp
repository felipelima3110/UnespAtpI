/*5. Escreva um programa que calcule a soma, subtração, multiplicação e divisão de ‘a’ por ‘b’. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    float a, b, soma, sub, mult, div;

    printf("Digite o primeiro nº:");
    scanf("%f", &a);
    printf("Digite o segundo nº: ");
    scanf("%f", &b);

    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("Resultados\n Soma: %.2f \n Sub: %.2f \n Mult: %.2f \n Div %.2f", soma, sub, mult, div);

    return 0;
}