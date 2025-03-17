/*Escreva um programa que realize a soma de dois números “quebrados” que são dados de entrada pelo usuário (usa-se %f para caracteres que representam pontos flutuantes e separa-se com “.” ponto as casas decimais). 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float n1, n2;

    printf("digite o primeiro número: ");
    scanf("%f", &n1);
    printf("digite o segundo número: ");
    scanf("%f", &n2);
    n1 = n1 + n2;
    printf("O resultado da soma é: %.2f", n1);

    getchar();
    return 0;


}