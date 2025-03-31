/*Escreva um programa que calcule a área de um círculo dado seu raio. */
#include <stdio.h>
#include <stdlib.h>
//#include <cmath>

int main (){

    float raio, area;
    const float pi = 3.14;
    
    printf("Digite o valor do raio");
    scanf("%f", &raio);

    area = pi * (raio * raio);

    printf("A área do círculo é: %f", area);


    getchar();
    return 0;
    

}